/*****************************************************************************
**
** exam.cpp
**
** Create a cylinder in NX:
**   1. Create a circle (R=99mm) on XY plane directly (no sketch)
**   2. Extrude the circle along Z axis (0 ~ 10mm)
**
*****************************************************************************/

#include <uf_defs.h>
#include <NXOpen/Session.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/Conic.hxx>
#include <NXOpen/Curve.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/CurveDumbRule.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/WCS.hxx>
#include <NXOpen/Features_CylinderBuilder.hxx>
#include <NXOpen/Direction.hxx>

#include <vector>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

extern "C" DllExport void ufusr(char* param, int* retCode, int paramLen)
{
    NXOpen::Session* theSession = NXOpen::Session::GetSession();
    NXOpen::Part* workPart = theSession->Parts()->Work();

    // 1.创建圆柱
    NXOpen::Features::CylinderBuilder* cylinderBuilder1 = workPart->Features()->CreateCylinderBuilder(nullptr);
    cylinderBuilder1->BooleanOption()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    cylinderBuilder1->Diameter()->SetValue(99);
    cylinderBuilder1->Height()->SetValue(200);
    cylinderBuilder1->SetDirection(NXOpen::Vector3d(0.0, 0.0, 1.0));
    cylinderBuilder1->SetOrigin(NXOpen::Point3d(0.0, 0.0, 0.0));
    NXOpen::Features::Feature* cylinderFeature1 = cylinderBuilder1->CommitFeature();
    cylinderBuilder1->Destroy();
}

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
}
