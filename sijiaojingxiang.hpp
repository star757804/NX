#ifndef SIJIAOJINGXIANG_H_INCLUDED
#define SIJIAOJINGXIANG_H_INCLUDED

//------------------------------------------------------------------------------
// 基础头文件
//------------------------------------------------------------------------------
#include <uf.h>
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <iostream>
#include <vector>
#include <string>

//------------------------------------------------------------------------------
// NXOpen 核心
//------------------------------------------------------------------------------
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/ListingWindow.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/TaggedObject.hxx>

//------------------------------------------------------------------------------
// Block Styler
//------------------------------------------------------------------------------
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SelectObject.hxx>
#include <NXOpen/BlockStyler_Toggle.hxx>

//------------------------------------------------------------------------------
// 你当前 Block Styler 自动生成的宏，先保留
//------------------------------------------------------------------------------
#define              SnapPointTypesEnabled_UserDefined (1 << 0);
#define                 SnapPointTypesEnabled_Inferred (1 << 1);
#define           SnapPointTypesEnabled_ScreenPosition (1 << 2);
#define                 SnapPointTypesEnabled_EndPoint (1 << 3);
#define                 SnapPointTypesEnabled_MidPoint (1 << 4);
#define             SnapPointTypesEnabled_ControlPoint (1 << 5);
#define             SnapPointTypesEnabled_Intersection (1 << 6);
#define                SnapPointTypesEnabled_ArcCenter (1 << 7);
#define            SnapPointTypesEnabled_QuadrantPoint (1 << 8);
#define            SnapPointTypesEnabled_ExistingPoint (1 << 9);
#define             SnapPointTypesEnabled_PointonCurve (1 <<10);
#define           SnapPointTypesEnabled_PointonSurface (1 <<11);
#define         SnapPointTypesEnabled_PointConstructor (1 <<12);
#define     SnapPointTypesEnabled_TwocurveIntersection (1 <<13);
#define             SnapPointTypesEnabled_TangentPoint (1 <<14);
#define                    SnapPointTypesEnabled_Poles (1 <<15);
#define         SnapPointTypesEnabled_BoundedGridPoint (1 <<16);
#define         SnapPointTypesEnabled_FacetVertexPoint (1 <<17);
#define            SnapPointTypesEnabled_DefiningPoint (1 <<18);

#define             SnapPointTypesOnByDefault_EndPoint (1 << 3);
#define             SnapPointTypesOnByDefault_MidPoint (1 << 4);
#define         SnapPointTypesOnByDefault_ControlPoint (1 << 5);
#define         SnapPointTypesOnByDefault_Intersection (1 << 6);
#define            SnapPointTypesOnByDefault_ArcCenter (1 << 7);
#define        SnapPointTypesOnByDefault_QuadrantPoint (1 << 8);
#define        SnapPointTypesOnByDefault_ExistingPoint (1 << 9);
#define         SnapPointTypesOnByDefault_PointonCurve (1 <<10);
#define       SnapPointTypesOnByDefault_PointonSurface (1 <<11);
#define     SnapPointTypesOnByDefault_PointConstructor (1 <<12);
#define     SnapPointTypesOnByDefault_BoundedGridPoint (1 <<16);
#define     SnapPointTypesOnByDefault_FacetVertexPoint (1 <<17);

using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport sijiaojingxiang
{
public:
    static Session* theSession;
    static UI* theUI;
    static Part* workPart;
    static Part* displayPart;
    static ListingWindow* lw;

    sijiaojingxiang();
    ~sijiaojingxiang();

    NXOpen::BlockStyler::BlockDialog::DialogResponse Launch();

    //--------------------------------------------------------------------------
    // Block Styler 回调
    //--------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char* blockID);

private:
    const char* theDlxFileName;
    NXOpen::BlockStyler::BlockDialog* theDialog;

    //--------------------------------------------------------------------------
    // 当前 .dlx 里的控件
    //--------------------------------------------------------------------------
    NXOpen::BlockStyler::Group* group1;
    NXOpen::BlockStyler::Group* group0;
    NXOpen::BlockStyler::SelectObject* selection0;
    NXOpen::BlockStyler::Group* group;
    NXOpen::BlockStyler::Toggle* toggle0;

private:
    std::vector<NXOpen::Body*> getSelectedBodies();
    bool getToggleValue(NXOpen::BlockStyler::Toggle* block);
};

#endif // SIJIAOJINGXIANG_H_INCLUDED