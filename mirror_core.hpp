#ifndef MIRROR_CORE_H_INCLUDED
#define MIRROR_CORE_H_INCLUDED

#include <vector>
#include <stdexcept>

#include <NXOpen/Part.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/Plane.hxx>

class MirrorCore
{
public:
    // 基于当前 WCS 做四角镜像
    // A
    // A -> YZ 面 = B
    // A -> XZ 面 = C
    // B -> XZ 面 = D
    static void FourCornerByWcs(
        NXOpen::Part* workPart,
        const std::vector<NXOpen::Body*>& sourceBodies);

private:
    static NXOpen::Plane* CreateYZPlaneAtWcs(NXOpen::Part* workPart);
    static NXOpen::Plane* CreateXZPlaneAtWcs(NXOpen::Part* workPart);

    static NXOpen::Body* MirrorOne(
        NXOpen::Part* workPart,
        NXOpen::Body* sourceBody,
        NXOpen::Plane* mirrorPlane);
};

#endif // MIRROR_CORE_H_INCLUDED