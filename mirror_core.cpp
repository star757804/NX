#include "mirror_core.hpp"

#include <NXOpen/NXException.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneCollection.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_BodyFeature.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_GeomcopyBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_Geomcopy.hxx>
#include <NXOpen/WCS.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/PartCollection.hxx>

using namespace NXOpen;

Plane* MirrorCore::CreateYZPlaneAtWcs(Part* workPart)
{
    if (workPart == NULL)
        throw std::runtime_error("CreateYZPlaneAtWcs: workPart 为空。");

    Session* theSession = Session::GetSession();
    Part* displayPart = theSession->Parts()->Display();
    if (displayPart == NULL)
        throw std::runtime_error("CreateYZPlaneAtWcs: displayPart 为空。");

    // WCS 必须从拥有它的 display part 取
    WCS* wcs = displayPart->WCS();
    if (wcs == NULL)
        throw std::runtime_error("CreateYZPlaneAtWcs: 无法获取当前 WCS。");

    Point3d origin = wcs->Origin();

    CartesianCoordinateSystem* csys = wcs->CoordinateSystem();
    if (csys == NULL)
        throw std::runtime_error("CreateYZPlaneAtWcs: 无法获取 WCS 坐标系。");

    Vector3d xDir, yDir;
    csys->GetDirections(&xDir, &yDir);

    // 过当前 WCS 原点，法向量 = WCS X 方向
    Plane* plane = workPart->Planes()->CreatePlane(
        origin,
        xDir,
        SmartObject::UpdateOptionWithinModeling);

    if (plane == NULL)
        throw std::runtime_error("创建第一个镜像平面失败。");

    return plane;
}

Plane* MirrorCore::CreateXZPlaneAtWcs(Part* workPart)
{
    if (workPart == NULL)
        throw std::runtime_error("CreateXZPlaneAtWcs: workPart 为空。");

    Session* theSession = Session::GetSession();
    Part* displayPart = theSession->Parts()->Display();
    if (displayPart == NULL)
        throw std::runtime_error("CreateXZPlaneAtWcs: displayPart 为空。");

    // WCS 必须从拥有它的 display part 取
    WCS* wcs = displayPart->WCS();
    if (wcs == NULL)
        throw std::runtime_error("CreateXZPlaneAtWcs: 无法获取当前 WCS。");

    Point3d origin = wcs->Origin();

    CartesianCoordinateSystem* csys = wcs->CoordinateSystem();
    if (csys == NULL)
        throw std::runtime_error("CreateXZPlaneAtWcs: 无法获取 WCS 坐标系。");

    Vector3d xDir, yDir;
    csys->GetDirections(&xDir, &yDir);

    // 过当前 WCS 原点，法向量 = WCS Y 方向
    Plane* plane = workPart->Planes()->CreatePlane(
        origin,
        yDir,
        SmartObject::UpdateOptionWithinModeling);

    if (plane == NULL)
        throw std::runtime_error("创建第二个镜像平面失败。");

    return plane;
}

Body* MirrorCore::MirrorOne(Part* workPart, Body* sourceBody, Plane* mirrorPlane)
{
    if (workPart == NULL)
        throw std::runtime_error("MirrorOne: workPart 为空。");
    if (sourceBody == NULL)
        throw std::runtime_error("MirrorOne: sourceBody 为空。");
    if (mirrorPlane == NULL)
        throw std::runtime_error("MirrorOne: mirrorPlane 为空。");

    Features::GeomcopyBuilder* geomcopyBuilder = NULL;

    try
    {
        geomcopyBuilder = workPart->Features()->CreateGeomcopyBuilder(NULL);
        geomcopyBuilder->SetType(Features::GeomcopyBuilder::TransformTypesMirror);
        geomcopyBuilder->SetMirrorPlane(mirrorPlane);
        geomcopyBuilder->NumberOfCopies()->SetFormula("1");

        bool added = geomcopyBuilder->GeometryToInstance()->Add(sourceBody);
        if (!added)
            throw std::runtime_error("待镜像实体添加失败。");

        Features::Feature* feature = geomcopyBuilder->CommitFeature();
        if (feature == NULL)
            throw std::runtime_error("镜像特征提交失败。");

        // 关键修正：GeomcopyBuilder 的结果按 Geomcopy 取
        Features::Geomcopy* geomcopyFeature =
            dynamic_cast<Features::Geomcopy*>(feature);

        if (geomcopyFeature == NULL)
            throw std::runtime_error("镜像结果不是 Geomcopy。");

        std::vector<Body*> newBodies = geomcopyFeature->GetBodies();
        if (newBodies.empty() || newBodies[0] == NULL)
            throw std::runtime_error("镜像后没有生成新实体。");

        Body* resultBody = newBodies[0];

        geomcopyBuilder->Destroy();
        geomcopyBuilder = NULL;

        return resultBody;
    }
    catch (...)
    {
        if (geomcopyBuilder != NULL)
        {
            geomcopyBuilder->Destroy();
            geomcopyBuilder = NULL;
        }
        throw;
    }
}

void MirrorCore::FourCornerByWcs(
    Part* workPart,
    const std::vector<Body*>& sourceBodies)
{
    if (workPart == NULL)
        throw std::runtime_error("当前工作部件为空。");

    if (sourceBodies.empty())
        throw std::runtime_error("没有选中需要镜像的实体体。");

    Plane* yzPlane = CreateYZPlaneAtWcs(workPart);
    Plane* xzPlane = CreateXZPlaneAtWcs(workPart);

    for (size_t i = 0; i < sourceBodies.size(); ++i)
    {
        Body* A = sourceBodies[i];
        if (A == NULL)
            continue;

        Body* B = MirrorOne(workPart, A, yzPlane);
        Body* C = MirrorOne(workPart, A, xzPlane);
        Body* D = MirrorOne(workPart, B, xzPlane);

        (void)C;
        (void)D;
    }
}