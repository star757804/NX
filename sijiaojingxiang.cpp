#include "sijiaojingxiang.hpp"
#include "mirror_core.hpp"

using namespace NXOpen;
using namespace NXOpen::BlockStyler;

//------------------------------------------------------------------------------
// 静态变量初始化
//------------------------------------------------------------------------------
Session* (sijiaojingxiang::theSession) = NULL;
UI* (sijiaojingxiang::theUI) = NULL;
Part* (sijiaojingxiang::workPart) = NULL;
Part* (sijiaojingxiang::displayPart) = NULL;
ListingWindow* (sijiaojingxiang::lw) = NULL;

//------------------------------------------------------------------------------
// 构造函数
//------------------------------------------------------------------------------
sijiaojingxiang::sijiaojingxiang()
    : theDlxFileName("sijiaojingxiang.dlx"),
    theDialog(NULL),
    group1(NULL),
    group0(NULL),
    selection0(NULL),
    group(NULL),
    toggle0(NULL)
{
    try
    {
        sijiaojingxiang::theSession = NXOpen::Session::GetSession();
        sijiaojingxiang::theUI = UI::GetUI();
        sijiaojingxiang::workPart = theSession->Parts()->Work();
        sijiaojingxiang::displayPart = theSession->Parts()->Display();
        sijiaojingxiang::lw = theSession->ListingWindow();

        theDialog = sijiaojingxiang::theUI->CreateDialog(theDlxFileName);

        theDialog->AddApplyHandler(make_callback(this, &sijiaojingxiang::apply_cb));
        theDialog->AddOkHandler(make_callback(this, &sijiaojingxiang::ok_cb));
        theDialog->AddUpdateHandler(make_callback(this, &sijiaojingxiang::update_cb));
        theDialog->AddInitializeHandler(make_callback(this, &sijiaojingxiang::initialize_cb));
        theDialog->AddDialogShownHandler(make_callback(this, &sijiaojingxiang::dialogShown_cb));
    }
    catch (exception& ex)
    {
        throw;
    }
}

//------------------------------------------------------------------------------
// 析构函数
//------------------------------------------------------------------------------
sijiaojingxiang::~sijiaojingxiang()
{
    if (theDialog != NULL)
    {
        delete theDialog;
        theDialog = NULL;
    }
}

//------------------------------------------------------------------------------
// NX 插件入口
//------------------------------------------------------------------------------
extern "C" DllExport void ufusr(char* param, int* retcod, int param_len)
{
    sijiaojingxiang* theApp = NULL;
    UF_initialize();

    try
    {
        theApp = new sijiaojingxiang();
        theApp->Launch();
    }
    catch (exception& ex)
    {
        if (sijiaojingxiang::theUI != NULL)
        {
            sijiaojingxiang::theUI->NXMessageBox()->Show(
                "四角镜像",
                NXOpen::NXMessageBox::DialogTypeError,
                ex.what());
        }
    }

    if (theApp != NULL)
    {
        delete theApp;
        theApp = NULL;
    }

    UF_terminate();
}

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)Session::LibraryUnloadOptionImmediately;
}

extern "C" DllExport void ufusr_cleanup(void)
{
    try
    {
        // 当前无额外清理
    }
    catch (exception& ex)
    {
        if (sijiaojingxiang::theUI != NULL)
        {
            sijiaojingxiang::theUI->NXMessageBox()->Show(
                "四角镜像",
                NXOpen::NXMessageBox::DialogTypeError,
                ex.what());
        }
    }
}

//------------------------------------------------------------------------------
// 显示对话框
//------------------------------------------------------------------------------
NXOpen::BlockStyler::BlockDialog::DialogResponse sijiaojingxiang::Launch()
{
    NXOpen::BlockStyler::BlockDialog::DialogResponse dialogResponse =
        NXOpen::BlockStyler::BlockDialog::DialogResponse::DialogResponseInvalid;

    try
    {
        dialogResponse = theDialog->Launch();
    }
    catch (exception& ex)
    {
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
    }

    return dialogResponse;
}

//------------------------------------------------------------------------------
// initialize_cb
//------------------------------------------------------------------------------
void sijiaojingxiang::initialize_cb()
{
    try
    {
        group1 = dynamic_cast<NXOpen::BlockStyler::Group*>(
            theDialog->TopBlock()->FindBlock("group1"));
        group0 = dynamic_cast<NXOpen::BlockStyler::Group*>(
            theDialog->TopBlock()->FindBlock("group0"));
        selection0 = dynamic_cast<NXOpen::BlockStyler::SelectObject*>(
            theDialog->TopBlock()->FindBlock("selection0"));
        group = dynamic_cast<NXOpen::BlockStyler::Group*>(
            theDialog->TopBlock()->FindBlock("group"));
        toggle0 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(
            theDialog->TopBlock()->FindBlock("toggle0"));

        // 建议你在 .dlx 里把 selection0 的过滤直接设成 Body
        // 这里先不写死复杂过滤，避免和你现有 .dlx 属性冲突
    }
    catch (exception& ex)
    {
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
    }
}

//------------------------------------------------------------------------------
// dialogShown_cb
//------------------------------------------------------------------------------
void sijiaojingxiang::dialogShown_cb()
{
    try
    {
        // 这里可以放默认值设置
        // 当前先留空，保持 .dlx 里的默认状态
    }
    catch (exception& ex)
    {
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
    }
}

//------------------------------------------------------------------------------
// 读取 selection0 中选中的 Body
//------------------------------------------------------------------------------
std::vector<NXOpen::Body*> sijiaojingxiang::getSelectedBodies()
{
    std::vector<NXOpen::Body*> result;

    if (selection0 == NULL)
        return result;

    PropertyList* prop = selection0->GetProperties();
    std::vector<TaggedObject*> objs = prop->GetTaggedObjectVector("SelectedObjects");
    delete prop;
    prop = NULL;

    for (size_t i = 0; i < objs.size(); ++i)
    {
        Body* body = dynamic_cast<Body*>(objs[i]);
        if (body != NULL)
            result.push_back(body);
    }

    return result;
}

//------------------------------------------------------------------------------
// 读取 Toggle 值
//------------------------------------------------------------------------------
bool sijiaojingxiang::getToggleValue(NXOpen::BlockStyler::Toggle* block)
{
    if (block == NULL)
        return false;

    PropertyList* prop = block->GetProperties();
    bool value = prop->GetLogical("Value");
    delete prop;
    prop = NULL;

    return value;
}

//------------------------------------------------------------------------------
// apply_cb
// 现阶段：
//   selection0 -> 选择实体体
//   toggle0    -> 是否启用 WCS 四角镜像
//------------------------------------------------------------------------------
int sijiaojingxiang::apply_cb()
{
    int errorCode = 0;

    try
    {
        if (workPart == NULL)
            throw std::runtime_error("当前没有工作部件。");

        std::vector<Body*> bodies = getSelectedBodies();
        if (bodies.empty())
            throw std::runtime_error("请先选择至少一个实体体。");

        bool useWcs = getToggleValue(toggle0);
        if (!useWcs)
            throw std::runtime_error("当前版本先按 WCS 方式实现，请先打开 toggle0。");

        MirrorCore::FourCornerByWcs(workPart, bodies);
    }
    catch (exception& ex)
    {
        errorCode = 1;
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
    }

    return errorCode;
}

//------------------------------------------------------------------------------
// update_cb
//------------------------------------------------------------------------------
int sijiaojingxiang::update_cb(NXOpen::BlockStyler::UIBlock* block)
{
    try
    {
        if (block == selection0)
        {
            // 预留：对象变化时的联动逻辑
        }
        else if (block == toggle0)
        {
            // 预留：方式切换时的联动逻辑
        }
    }
    catch (exception& ex)
    {
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
        return 1;
    }

    return 0;
}

//------------------------------------------------------------------------------
// ok_cb
//------------------------------------------------------------------------------
int sijiaojingxiang::ok_cb()
{
    int errorCode = 0;

    try
    {
        errorCode = apply_cb();
    }
    catch (exception& ex)
    {
        errorCode = 1;
        sijiaojingxiang::theUI->NXMessageBox()->Show(
            "四角镜像",
            NXOpen::NXMessageBox::DialogTypeError,
            ex.what());
    }

    return errorCode;
}

//------------------------------------------------------------------------------
// GetBlockProperties
//------------------------------------------------------------------------------
PropertyList* sijiaojingxiang::GetBlockProperties(const char* blockID)
{
    return theDialog->GetBlockProperties(blockID);
}