// NX 2306
// Journal created by admin on Mon Mar 23 18:36:45 2026 中国标准时间

//
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_Annotation.hxx>
#include <NXOpen/Annotations_AppendedTextBuilder.hxx>
#include <NXOpen/Annotations_BaseLinearDimensionBuilder.hxx>
#include <NXOpen/Annotations_BreakSettingsBuilder.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Annotations_DimensionMeasurementBuilder.hxx>
#include <NXOpen/Annotations_DimensionSetBuilder.hxx>
#include <NXOpen/Annotations_DimensionStyleBuilder.hxx>
#include <NXOpen/Annotations_DisplayStyleBuilder.hxx>
#include <NXOpen/Annotations_DrivingValueBuilder.hxx>
#include <NXOpen/Annotations_ForeshorteningSymbolSettingsBuilder.hxx>
#include <NXOpen/Annotations_FrameBarElementStyleBuilder.hxx>
#include <NXOpen/Annotations_FrameBarStyleBuilder.hxx>
#include <NXOpen/Annotations_HatchStyleBuilder.hxx>
#include <NXOpen/Annotations_HoleCalloutSettingsBuilder.hxx>
#include <NXOpen/Annotations_LetteringStyleBuilder.hxx>
#include <NXOpen/Annotations_LineArrowStyleBuilder.hxx>
#include <NXOpen/Annotations_OrdinateStyleBuilder.hxx>
#include <NXOpen/Annotations_OriginBuilder.hxx>
#include <NXOpen/Annotations_PlaneBuilder.hxx>
#include <NXOpen/Annotations_ProductGridStyleBuilder.hxx>
#include <NXOpen/Annotations_RadialStyleBuilder.hxx>
#include <NXOpen/Annotations_SelectAnnotation.hxx>
#include <NXOpen/Annotations_SheetMetalPMISettingsBuilder.hxx>
#include <NXOpen/Annotations_SingleSidedDisplayBuilder.hxx>
#include <NXOpen/Annotations_StyleBuilder.hxx>
#include <NXOpen/Annotations_SymbolStyleBuilder.hxx>
#include <NXOpen/Annotations_UnitsStyleBuilder.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/Assemblies_Component.hxx>
#include <NXOpen/Axis.hxx>
#include <NXOpen/AxisCollection.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/BodyDumbRule.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/CoordinateSystemCollection.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/CurveFeatureRule.hxx>
#include <NXOpen/DatumAxis.hxx>
#include <NXOpen/DatumCollection.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Drawings_DraftingView.hxx>
#include <NXOpen/Drawings_SelectDraftingView.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/ExpressionCollectorSet.hxx>
#include <NXOpen/ExpressionCollectorSetList.hxx>
#include <NXOpen/Face.hxx>
#include <NXOpen/FaceTangentRule.hxx>
#include <NXOpen/Features_BooleanBuilder.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_EditWithRollbackManager.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_PatternFeatureBuilder.hxx>
#include <NXOpen/Features_Revolve.hxx>
#include <NXOpen/Features_RevolveBuilder.hxx>
#include <NXOpen/Features_SelectFeatureList.hxx>
#include <NXOpen/Features_Shell.hxx>
#include <NXOpen/Features_ShellBuilder.hxx>
#include <NXOpen/Features_SketchFeature.hxx>
#include <NXOpen/GeometricUtilities_AlongPathPattern.hxx>
#include <NXOpen/GeometricUtilities_AngularPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_BooleanRegionSelect.hxx>
#include <NXOpen/GeometricUtilities_CircularPattern.hxx>
#include <NXOpen/GeometricUtilities_DistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_GeneralPattern.hxx>
#include <NXOpen/GeometricUtilities_HelixPattern.hxx>
#include <NXOpen/GeometricUtilities_HorizontalReference.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MirrorPattern.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternDefinition.hxx>
#include <NXOpen/GeometricUtilities_PatternFill.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItem.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItemList.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsList.hxx>
#include <NXOpen/GeometricUtilities_PatternOrientation.hxx>
#include <NXOpen/GeometricUtilities_PatternReferencePointServiceBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsList.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsListItem.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsListItemList.hxx>
#include <NXOpen/GeometricUtilities_PolygonPattern.hxx>
#include <NXOpen/GeometricUtilities_PolygonPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_RectangularPattern.hxx>
#include <NXOpen/GeometricUtilities_ReferencePattern.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/GeometricUtilities_SpiralPattern.hxx>
#include <NXOpen/ICurve.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/IReferenceAxis.hxx>
#include <NXOpen/ISurface.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/MeasureManager.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_SessionPreferences.hxx>
#include <NXOpen/Preferences_SessionSketch.hxx>
#include <NXOpen/Preferences_SketchPreferences.hxx>
#include <NXOpen/PreviewBuilder.hxx>
#include <NXOpen/RegionBoundaryRule.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectBodyList.hxx>
#include <NXOpen/SelectCoordinateSystemList.hxx>
#include <NXOpen/SelectDisplayableObject.hxx>
#include <NXOpen/SelectDisplayableObjectList.hxx>
#include <NXOpen/SelectIReferenceAxis.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectNXObject.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SelectTaggedObjectList.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/SelectionIntentRuleOptions.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/SimpleSketchInPlaceBuilder.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchConstraint.hxx>
#include <NXOpen/SketchDragGeometryBuilder.hxx>
#include <NXOpen/SketchFindMovableObjectsBuilder.hxx>
#include <NXOpen/SketchFoundRelation.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/SketchLinearDimensionBuilder.hxx>
#include <NXOpen/SketchOperationBuilder.hxx>
#include <NXOpen/SketchWorkRegionBuilder.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/View.hxx>
#include <NXOpen/Xform.hxx>
#include <NXOpen/XformCollection.hxx>
// We are currently testing removal of using namespace NXOpen.
// Uncomment the below line if your journal does not compile.
// using namespace NXOpen;

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
}

extern "C" DllExport void ufusr(char *param, int *retCode, int paramLen)
{
    NXOpen::Session *theSession = NXOpen::Session::GetSession();
    NXOpen::Part *workPart(theSession->Parts()->Work());
    NXOpen::Part *displayPart(theSession->Parts()->Display());
    // ----------------------------------------------
    //   Menu: 插入(S)->草图(S)
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId1;
    markId1 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Enter Sketch");
    
    NXOpen::Session::UndoMarkId markId2;
    markId2 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Update Model from Sketch");
    
    theSession->BeginTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId3;
    markId3 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Sketch *nullNXOpen_Sketch(NULL);
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder1;
    sketchInPlaceBuilder1 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    NXOpen::Point3d origin1(0.0, 0.0, 0.0);
    NXOpen::Vector3d normal1(0.0, 0.0, 1.0);
    NXOpen::Plane *plane1;
    plane1 = workPart->Planes()->CreatePlane(origin1, normal1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    sketchInPlaceBuilder1->SetPlaneReference(plane1);
    
    NXOpen::Unit *unit1(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("MilliMeter")));
    NXOpen::Expression *expression1;
    expression1 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression2;
    expression2 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder1;
    sketchAlongPathBuilder1 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);
    
    NXOpen::SimpleSketchInPlaceBuilder *simpleSketchInPlaceBuilder1;
    simpleSketchInPlaceBuilder1 = workPart->Sketches()->CreateSimpleSketchInPlaceBuilder();
    
    sketchAlongPathBuilder1->PlaneLocation()->Expression()->SetFormula("0");
    
    theSession->SetUndoMarkName(markId3, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    simpleSketchInPlaceBuilder1->SetUseWorkPartOrigin(false);
    
    NXOpen::Matrix3x3 rotMatrix1;
    rotMatrix1.Xx = -0.18796908606335713;
    rotMatrix1.Xy = 0.97755349025948024;
    rotMatrix1.Xz = 0.09516720215502994;
    rotMatrix1.Yx = -0.31340342853344472;
    rotMatrix1.Yy = -0.15152616799561064;
    rotMatrix1.Yz = 0.93745299156600626;
    rotMatrix1.Zx = 0.93083076532095199;
    rotMatrix1.Zy = 0.14638645461270008;
    rotMatrix1.Zz = 0.33485085073497645;
    NXOpen::Point3d translation1(-62.42122834353659, 38.43833534838793, 0.0);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix1, translation1, 0.80534835131194482);
    
    NXOpen::DatumAxis *datumAxis1(dynamic_cast<NXOpen::DatumAxis *>(workPart->Datums()->FindObject("DATUM_CSYS(0) X axis")));
    NXOpen::Direction *direction1;
    direction1 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::DatumPlane *datumPlane1(dynamic_cast<NXOpen::DatumPlane *>(workPart->Datums()->FindObject("DATUM_CSYS(0) YZ plane")));
    NXOpen::Features::DatumCsys *datumCsys1(dynamic_cast<NXOpen::Features::DatumCsys *>(workPart->Features()->FindObject("DATUM_CSYS(0)")));
    NXOpen::Point *point1(dynamic_cast<NXOpen::Point *>(datumCsys1->FindObject("POINT 1")));
    NXOpen::Xform *xform1;
    xform1 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane1, direction1, point1, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem1;
    cartesianCoordinateSystem1 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    simpleSketchInPlaceBuilder1->SetCoordinateSystem(cartesianCoordinateSystem1);
    
    simpleSketchInPlaceBuilder1->HorizontalReference()->SetValue(datumAxis1);
    
    NXOpen::Point *point2;
    point2 = simpleSketchInPlaceBuilder1->SketchOrigin();
    
    simpleSketchInPlaceBuilder1->SetSketchOrigin(point2);
    
    NXOpen::Xform *nullNXOpen_Xform(NULL);
    NXOpen::Point *point3;
    point3 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Session::UndoMarkId markId4;
    markId4 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId4, NULL);
    
    NXOpen::Session::UndoMarkId markId5;
    markId5 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(false);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(false);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(false);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetDisplayShadedRegions(true);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    theSession->Preferences()->Sketch()->SetEditDimensionOnCreation(true);
    
    theSession->Preferences()->Sketch()->SetCreateDimensionForTypedValues(true);
    
    theSession->Preferences()->Sketch()->SetAddRemoteFindingAfterSnap(true);
    
    NXOpen::NXObject *nXObject1;
    nXObject1 = simpleSketchInPlaceBuilder1->Commit();
    
    NXOpen::Sketch *sketch1(dynamic_cast<NXOpen::Sketch *>(nXObject1));
    NXOpen::Features::Feature *feature1;
    feature1 = sketch1->Feature();
    
    NXOpen::Session::UndoMarkId markId6;
    markId6 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "update");
    
    int nErrs1;
    nErrs1 = theSession->UpdateManager()->DoUpdate(markId6);
    
    sketch1->Activate(NXOpen::Sketch::ViewReorientTrue);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder1;
    sketchFindMovableObjectsBuilder1 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject2;
    nXObject2 = sketchFindMovableObjectsBuilder1->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder1->Destroy();
    
    theSession->DeleteUndoMark(markId5, NULL);
    
    theSession->SetUndoMarkName(markId3, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    sketchInPlaceBuilder1->Destroy();
    
    sketchAlongPathBuilder1->Destroy();
    
    simpleSketchInPlaceBuilder1->Destroy();
    
    workPart->Points()->DeletePoint(point3);
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression2);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression1);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    plane1->DestroyPlane();
    
    theSession->DeleteUndoMarksUpToMark(markId2, NULL, true);
    
    NXOpen::Session::UndoMarkId markId7;
    markId7 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Open Sketch");
    
    theSession->ActiveSketch()->SetName("SKETCH_000");
    
    NXOpen::Point3d origin2(-62.421228343536242, -76.548137916020778, 0.0);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin2);
    
    NXOpen::Point3d origin3(-62.421228343536242, -76.548137916020778, 0.0);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin3);
    
    NXOpen::Matrix3x3 rotMatrix2;
    rotMatrix2.Xx = 1.0;
    rotMatrix2.Xy = 0.0;
    rotMatrix2.Xz = 0.0;
    rotMatrix2.Yx = 0.0;
    rotMatrix2.Yy = 1.0;
    rotMatrix2.Yz = 0.0;
    rotMatrix2.Zx = 0.0;
    rotMatrix2.Zy = 0.0;
    rotMatrix2.Zz = 1.0;
    NXOpen::Point3d translation2(62.421228343536235, 76.548137916020792, 0.0);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix2, translation2, 0.80534835131194482);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->曲线(C)->直线(L)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId8;
    markId8 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId9;
    markId9 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId9, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint1(-251.16331088754305, 0.0, 0.0);
    NXOpen::Point3d endPoint1(-168.37305013716832, 0.0, 0.0);
    NXOpen::Line *line1;
    line1 = workPart->Curves()->CreateLine(startPoint1, endPoint1);
    
    theSession->ActiveSketch()->AddGeometry(line1, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId10;
    markId10 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId10, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint2(-251.16331088754305, 0.0, 0.0);
    NXOpen::Point3d endPoint2(-251.16331088754305, 13.965896703637538, 0.0);
    NXOpen::Line *line2;
    line2 = workPart->Curves()->CreateLine(startPoint2, endPoint2);
    
    theSession->ActiveSketch()->AddGeometry(line2, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId11;
    markId11 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId11, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint3(-251.16331088754305, 13.965896703637538, 0.0);
    NXOpen::Point3d endPoint3(-219.16331088754305, 13.965896703637538, 0.0);
    NXOpen::Line *line3;
    line3 = workPart->Curves()->CreateLine(startPoint3, endPoint3);
    
    theSession->ActiveSketch()->AddGeometry(line3, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId12;
    markId12 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId12, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint4(-219.16331088754305, 13.965896703637538, 0.0);
    NXOpen::Point3d endPoint4(-219.16331088754305, 39.930264607256461, 0.0);
    NXOpen::Line *line4;
    line4 = workPart->Curves()->CreateLine(startPoint4, endPoint4);
    
    theSession->ActiveSketch()->AddGeometry(line4, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId13;
    markId13 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId13, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint5(-219.16331088754305, 39.930264607256461, 0.0);
    NXOpen::Point3d endPoint5(-191.37201864158604, 39.930264607256461, 0.0);
    NXOpen::Line *line5;
    line5 = workPart->Curves()->CreateLine(startPoint5, endPoint5);
    
    theSession->ActiveSketch()->AddGeometry(line5, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId14;
    markId14 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId14, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint6(-191.37201864158604, 39.930264607256461, 0.0);
    NXOpen::Point3d endPoint6(-191.37201864158604, 13.96589670363754, 0.0);
    NXOpen::Line *line6;
    line6 = workPart->Curves()->CreateLine(startPoint6, endPoint6);
    
    theSession->ActiveSketch()->AddGeometry(line6, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId15;
    markId15 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId15, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint7(-191.37201864158604, 13.96589670363754, 0.0);
    NXOpen::Point3d endPoint7(-170.37201864158604, 13.96589670363754, 0.0);
    NXOpen::Line *line7;
    line7 = workPart->Curves()->CreateLine(startPoint7, endPoint7);
    
    theSession->ActiveSketch()->AddGeometry(line7, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId16;
    markId16 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId16, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint8(-168.37305013716832, 0.0, 0.0);
    NXOpen::Point3d endPoint8(-170.37201864158604, 13.965896703637542, 0.0);
    NXOpen::Line *line8;
    line8 = workPart->Curves()->CreateLine(startPoint8, endPoint8);
    
    theSession->ActiveSketch()->AddGeometry(line8, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    // ----------------------------------------------
    //   Menu: 任务(K)->完成草图(K)
    // ----------------------------------------------
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder2;
    sketchFindMovableObjectsBuilder2 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject3;
    nXObject3 = sketchFindMovableObjectsBuilder2->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder2->Destroy();
    
    NXOpen::SketchWorkRegionBuilder *sketchWorkRegionBuilder1;
    sketchWorkRegionBuilder1 = workPart->Sketches()->CreateWorkRegionBuilder();
    
    sketchWorkRegionBuilder1->SetScope(NXOpen::SketchWorkRegionBuilder::ScopeTypeEntireSketch);
    
    NXOpen::NXObject *nXObject4;
    nXObject4 = sketchWorkRegionBuilder1->Commit();
    
    sketchWorkRegionBuilder1->Destroy();
    
    theSession->ActiveSketch()->CalculateStatus();
    
    theSession->Preferences()->Sketch()->SetSectionView(false);
    
    NXOpen::Session::UndoMarkId markId17;
    markId17 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);
    
    theSession->DeleteUndoMarksSetInTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    theSession->EndTaskEnvironment();
    
    NXOpen::Matrix3x3 rotMatrix3;
    rotMatrix3.Xx = 0.46895671128887606;
    rotMatrix3.Xy = -0.44456077586916087;
    rotMatrix3.Xz = 0.76318105289357152;
    rotMatrix3.Yx = 0.65072241092446081;
    rotMatrix3.Yy = 0.75816510361491352;
    rotMatrix3.Yz = 0.041785399139505901;
    rotMatrix3.Zx = -0.5971933915054517;
    rotMatrix3.Zy = 0.47702347135041501;
    rotMatrix3.Zz = 0.64483227348126915;
    NXOpen::Point3d translation3(48.46930026581191, 141.35274773046751, -198.49301495597825);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix3, translation3, 0.80534835131194482);
    
    NXOpen::Matrix3x3 rotMatrix4;
    rotMatrix4.Xx = 0.8376311631116875;
    rotMatrix4.Xy = -0.23574493359777154;
    rotMatrix4.Xz = 0.49274573652863507;
    rotMatrix4.Yx = 0.35804985777836218;
    rotMatrix4.Yy = 0.91821514256781145;
    rotMatrix4.Yz = -0.16935539939450478;
    rotMatrix4.Zx = -0.41252191933164029;
    rotMatrix4.Zy = 0.3182849010590354;
    rotMatrix4.Zz = 0.85353405780248881;
    NXOpen::Point3d translation4(90.599012327503715, 101.40302380052985, -172.13242920959669);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix4, translation4, 0.80534835131194482);
    
    NXOpen::Point3d origin4(-129.58015880951021, -33.730337382235057, 151.62093334597628);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin4);
    
    NXOpen::Point3d origin5(-129.58015880951021, -33.730337382235057, 151.62093334597628);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin5);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->旋转(V)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId18;
    markId18 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::Feature *nullNXOpen_Features_Feature(NULL);
    NXOpen::Features::RevolveBuilder *revolveBuilder1;
    revolveBuilder1 = workPart->Features()->CreateRevolveBuilder(nullNXOpen_Features_Feature);
    
    revolveBuilder1->Limits()->StartExtend()->Value()->SetFormula("0");
    
    revolveBuilder1->Limits()->EndExtend()->Value()->SetFormula("360");
    
    revolveBuilder1->Limits()->StartExtend()->Value()->SetFormula("0");
    
    revolveBuilder1->Limits()->EndExtend()->Value()->SetFormula("360");
    
    revolveBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies1(1);
    NXOpen::Body *nullNXOpen_Body(NULL);
    targetBodies1[0] = nullNXOpen_Body;
    revolveBuilder1->BooleanOperation()->SetTargetBodies(targetBodies1);
    
    revolveBuilder1->Offset()->StartOffset()->SetFormula("0");
    
    revolveBuilder1->Offset()->EndOffset()->SetFormula("5");
    
    revolveBuilder1->SetTolerance(0.001);
    
    NXOpen::Section *section1;
    section1 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    revolveBuilder1->SetSection(section1);
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder1;
    smartVolumeProfileBuilder1 = revolveBuilder1->SmartVolumeProfile();
    
    smartVolumeProfileBuilder1->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder1->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId18, NXOpen::NXString("\346\227\213\350\275\254 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d origin6(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector1(0.0, 0.0, 1.0);
    NXOpen::Direction *direction2;
    direction2 = workPart->Directions()->CreateDirection(origin6, vector1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Point *nullNXOpen_Point(NULL);
    NXOpen::Axis *axis1;
    axis1 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction2, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    revolveBuilder1->SetAxis(axis1);
    
    section1->SetDistanceTolerance(0.001);
    
    section1->SetChainingTolerance(0.00095);
    
    std::vector<double> starthelperpoint1(3);
    const double starthelperpoint1_initial_values [] = {
        0.0, 0.0, 0.0
    };
    starthelperpoint1.assign(starthelperpoint1_initial_values, starthelperpoint1_initial_values + 3);
    revolveBuilder1->SetStartLimitHelperPoint(starthelperpoint1);
    
    std::vector<double> endhelperpoint1(3);
    const double endhelperpoint1_initial_values [] = {
        0.0, 0.0, 0.0
    };
    endhelperpoint1.assign(endhelperpoint1_initial_values, endhelperpoint1_initial_values + 3);
    revolveBuilder1->SetEndLimitHelperPoint(endhelperpoint1);
    
    section1->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId19;
    markId19 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions1;
    selectionIntentRuleOptions1 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions1->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::ICurve *> curves1(8);
    curves1[0] = line1;
    curves1[1] = line2;
    curves1[2] = line3;
    curves1[3] = line4;
    curves1[4] = line5;
    curves1[5] = line6;
    curves1[6] = line7;
    curves1[7] = line8;
    NXOpen::Point3d seedPoint1(-204.33468528323485, 8.0104612699954938, 0.0);
    NXOpen::RegionBoundaryRule *regionBoundaryRule1;
    regionBoundaryRule1 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(sketch1, curves1, seedPoint1, 0.001, selectionIntentRuleOptions1);
    
    delete selectionIntentRuleOptions1;
    section1->AllowSelfIntersection(false);
    
    section1->AllowDegenerateCurves(false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules1(1);
    rules1[0] = regionBoundaryRule1;
    NXOpen::NXObject *nullNXOpen_NXObject(NULL);
    NXOpen::Point3d helpPoint1(0.0, 0.0, 0.0);
    section1->AddToSection(rules1, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint1, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId19, NULL);
    
    NXOpen::Session::UndoMarkId markId20;
    markId20 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId21;
    markId21 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    theSession->DeleteUndoMark(markId21, NULL);
    
    revolveBuilder1->SetSection(section1);
    
    NXOpen::Expression *expression3;
    expression3 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    theSession->DeleteUndoMark(markId20, NULL);
    
    revolveBuilder1->SetSection(section1);
    
    NXOpen::Expression *expression4;
    expression4 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Matrix3x3 rotMatrix5;
    rotMatrix5.Xx = 0.5950452526020199;
    rotMatrix5.Xy = -0.084922982966115293;
    rotMatrix5.Xz = 0.79919286428241898;
    rotMatrix5.Yx = 0.35292322271176285;
    rotMatrix5.Yy = 0.92100575946585406;
    rotMatrix5.Yz = -0.16490479041396239;
    rotMatrix5.Zx = -0.72205702422076479;
    rotMatrix5.Zy = 0.38017953389795511;
    rotMatrix5.Zz = 0.57801139761997045;
    NXOpen::Point3d translation5(-7.5974659091116976, 102.34616135020931, -212.24009463304787);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix5, translation5, 0.80534835131194482);
    
    NXOpen::Point *point4;
    point4 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Point *point5;
    point5 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Point *point6;
    point6 = axis1->Point();
    
    axis1->SetPoint(point5);
    
    revolveBuilder1->SetAxis(axis1);
    
    int nErrs2;
    nErrs2 = theSession->UpdateManager()->AddToDeleteList(direction2);
    
    NXOpen::Point3d origin7(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector2(0.0, 1.0, 0.0);
    NXOpen::Direction *direction3;
    direction3 = workPart->Directions()->CreateDirection(origin7, vector2, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Direction *direction4;
    direction4 = axis1->Direction();
    
    axis1->SetDirection(direction3);
    
    int nErrs3;
    nErrs3 = theSession->UpdateManager()->AddToDeleteList(direction4);
    
    revolveBuilder1->SetAxis(axis1);
    
    NXOpen::Matrix3x3 rotMatrix6;
    rotMatrix6.Xx = 0.93645063865400135;
    rotMatrix6.Xy = 0.0051345999113247432;
    rotMatrix6.Xz = -0.35076179559391607;
    rotMatrix6.Yx = -0.20362658940979533;
    rotMatrix6.Yy = 0.82215456190560166;
    rotMatrix6.Yz = -0.53159955645499435;
    rotMatrix6.Zx = 0.28565085935430312;
    rotMatrix6.Zy = 0.56924117228250759;
    rotMatrix6.Zz = 0.77095270563672569;
    NXOpen::Point3d translation6(33.478776091622983, 34.427291844726525, -89.465111033839776);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix6, translation6, 0.80534835131194482);
    
    NXOpen::Matrix3x3 rotMatrix7;
    rotMatrix7.Xx = 0.94302091588884518;
    rotMatrix7.Xy = 0.093407542431949042;
    rotMatrix7.Xz = -0.31935338296782118;
    rotMatrix7.Yx = -0.32822440941886155;
    rotMatrix7.Yy = 0.41861830691750501;
    rotMatrix7.Yz = -0.84677473402030889;
    rotMatrix7.Zx = 0.054592025588062018;
    rotMatrix7.Zy = 0.90334586074789192;
    rotMatrix7.Zz = 0.42542445464717565;
    NXOpen::Point3d translation7(32.541501407244361, 26.836746063450917, -125.1523061915854);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix7, translation7, 0.80534835131194482);
    
    NXOpen::Point3d scaleAboutPoint1(62.585494733913919, 19.711966845327215, 0.0);
    NXOpen::Point3d viewCenter1(-62.585494733913919, -19.711966845327215, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint1, viewCenter1);
    
    NXOpen::Point3d scaleAboutPoint2(78.231868417392405, 27.103954412324931, 0.0);
    NXOpen::Point3d viewCenter2(-78.231868417392405, -27.103954412324931, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint2, viewCenter2);
    
    NXOpen::Point3d scaleAboutPoint3(98.81650046160135, 37.473270304918969, 0.0);
    NXOpen::Point3d viewCenter3(-98.81650046160135, -37.473270304918969, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint3, viewCenter3);
    
    NXOpen::Point3d scaleAboutPoint4(124.80395675182757, 48.766584643387702, 0.0);
    NXOpen::Point3d viewCenter4(-124.80395675182757, -48.766584643387702, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint4, viewCenter4);
    
    NXOpen::Matrix3x3 rotMatrix8;
    rotMatrix8.Xx = 0.9589290938290369;
    rotMatrix8.Xy = 0.077805593638202775;
    rotMatrix8.Xz = -0.27276598506198413;
    rotMatrix8.Yx = -0.26490275849475897;
    rotMatrix8.Yy = 0.58942629610763908;
    rotMatrix8.Yz = -0.76315343804421187;
    rotMatrix8.Zx = 0.10139783799517087;
    rotMatrix8.Zy = 0.80406649666270857;
    rotMatrix8.Zz = 0.58582894038658473;
    NXOpen::Point3d translation8(125.96022679111306, 64.642523760724373, -117.29222914612922);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix8, translation8, 0.32987068469737263);
    
    NXOpen::Session::UndoMarkId markId22;
    markId22 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\227\213\350\275\254", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId22, NULL);
    
    NXOpen::Session::UndoMarkId markId23;
    markId23 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\227\213\350\275\254", NXOpen::NXString::UTF8));
    
    revolveBuilder1->SetParentFeatureInternal(false);
    
    NXOpen::Features::Feature *feature2;
    feature2 = revolveBuilder1->CommitFeature();
    
    theSession->DeleteUndoMark(markId23, NULL);
    
    theSession->SetUndoMarkName(markId18, NXOpen::NXString("\346\227\213\350\275\254", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression5(revolveBuilder1->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression6(revolveBuilder1->Limits()->EndExtend()->Value());
    revolveBuilder1->Destroy();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression3);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression4);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->Points()->DeletePoint(point4);
    
    NXOpen::Matrix3x3 rotMatrix9;
    rotMatrix9.Xx = 0.73122651976891451;
    rotMatrix9.Xy = 0.14907816582747979;
    rotMatrix9.Xz = 0.66564515866951246;
    rotMatrix9.Yx = 0.29371167365867717;
    rotMatrix9.Yy = 0.81192662942679494;
    rotMatrix9.Yz = -0.50448845495637173;
    rotMatrix9.Zx = -0.61566324361883606;
    rotMatrix9.Zy = 0.56440309079696172;
    rotMatrix9.Zz = 0.54991628595230435;
    NXOpen::Point3d translation9(124.53726045773421, 60.200275168406023, -112.50731753968142);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix9, translation9, 0.32987068469737263);
    
    NXOpen::Point3d origin8(79.692680968773729, 46.18221177080224, 246.41166736798635);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin8);
    
    NXOpen::Point3d origin9(79.692680968773729, 46.18221177080224, 246.41166736798635);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin9);
    
    NXOpen::Matrix3x3 rotMatrix10;
    rotMatrix10.Xx = 0.72672810900404927;
    rotMatrix10.Xy = 0.153325585144099;
    rotMatrix10.Xz = 0.66959504218865229;
    rotMatrix10.Yx = 0.26831018156918385;
    rotMatrix10.Yy = 0.8339792315776926;
    rotMatrix10.Yz = -0.48217039287309776;
    rotMatrix10.Zx = -0.63235741637915233;
    rotMatrix10.Zy = 0.53006594517786743;
    rotMatrix10.Zz = 0.56493733432389059;
    NXOpen::Point3d translation10(-229.26569489228501, 62.968319985889437, -111.82177188446725);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix10, translation10, 0.32987068469737263);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->偏置/缩放(O)->抽壳(H)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId24;
    markId24 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ShellBuilder *shellBuilder1;
    shellBuilder1 = workPart->Features()->CreateShellBuilder(nullNXOpen_Features_Feature);
    
    shellBuilder1->SetTolerance(0.001);
    
    shellBuilder1->SetUseSurfaceApproximation(true);
    
    shellBuilder1->SetTgtPierceOption(false);
    
    shellBuilder1->SetDefaultThickness("2");
    
    theSession->SetUndoMarkName(markId24, NXOpen::NXString("\346\212\275\345\243\263 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d scaleAboutPoint5(-378.1816555815343, -79.406116442358112, 0.0);
    NXOpen::Point3d viewCenter5(378.1816555815343, 79.406116442358282, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint5, viewCenter5);
    
    NXOpen::Point3d scaleAboutPoint6(-302.54532446522762, -59.674899629408486, 0.0);
    NXOpen::Point3d viewCenter6(302.54532446522734, 59.674899629408699, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint6, viewCenter6);
    
    NXOpen::Point3d scaleAboutPoint7(-242.0362595721821, -47.739919703526795, 0.0);
    NXOpen::Point3d viewCenter7(242.03625957218188, 47.739919703526908, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint7, viewCenter7);
    
    NXOpen::Point3d scaleAboutPoint8(-303.82865564005357, -57.749902867169638, 0.0);
    NXOpen::Point3d viewCenter8(303.82865564005328, 57.749902867169709, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint8, viewCenter8);
    
    NXOpen::Point3d scaleAboutPoint9(-242.0362595721821, -44.146592414014044, 0.0);
    NXOpen::Point3d viewCenter9(242.03625957218188, 44.146592414014215, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint9, viewCenter9);
    
    NXOpen::ScCollector *scCollector1;
    scCollector1 = workPart->ScCollectors()->CreateCollector();
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions2;
    selectionIntentRuleOptions2 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions2->SetSelectedFromInactive(false);
    
    NXOpen::Features::Revolve *revolve1(dynamic_cast<NXOpen::Features::Revolve *>(feature2));
    NXOpen::Face *face1(dynamic_cast<NXOpen::Face *>(revolve1->FindObject("FACE 1")));
    std::vector<NXOpen::Face *> boundaryFaces1(0);
    NXOpen::FaceTangentRule *faceTangentRule1;
    faceTangentRule1 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face1, boundaryFaces1, 0.050000000000000003, selectionIntentRuleOptions2);
    
    delete selectionIntentRuleOptions2;
    std::vector<NXOpen::SelectionIntentRule *> rules2(1);
    rules2[0] = faceTangentRule1;
    scCollector1->ReplaceRules(rules2, false);
    
    shellBuilder1->SetRemovedFacesCollector(scCollector1);
    
    NXOpen::Body *body1(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("REVOLVED(3)")));
    shellBuilder1->SetBody(body1);
    
    NXOpen::ScCollector *nullNXOpen_ScCollector(NULL);
    NXOpen::ExpressionCollectorSet *expressionCollectorSet1;
    expressionCollectorSet1 = workPart->CreateExpressionCollectorSet(nullNXOpen_ScCollector, "2", "Shell Offset", 0);
    
    expressionCollectorSet1->SetItemFlipFlag(true);
    
    shellBuilder1->FaceThicknesses()->Append(expressionCollectorSet1);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions3;
    selectionIntentRuleOptions3 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions3->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Face *> boundaryFaces2(0);
    NXOpen::FaceTangentRule *faceTangentRule2;
    faceTangentRule2 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face1, boundaryFaces2, 0.050000000000000003, selectionIntentRuleOptions3);
    
    delete selectionIntentRuleOptions3;
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions4;
    selectionIntentRuleOptions4 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions4->SetSelectedFromInactive(false);
    
    NXOpen::Face *face2(dynamic_cast<NXOpen::Face *>(revolve1->FindObject("FACE 2")));
    std::vector<NXOpen::Face *> boundaryFaces3(0);
    NXOpen::FaceTangentRule *faceTangentRule3;
    faceTangentRule3 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face2, boundaryFaces3, 0.050000000000000003, selectionIntentRuleOptions4);
    
    delete selectionIntentRuleOptions4;
    std::vector<NXOpen::SelectionIntentRule *> rules3(2);
    rules3[0] = faceTangentRule2;
    rules3[1] = faceTangentRule3;
    scCollector1->ReplaceRules(rules3, false);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions5;
    selectionIntentRuleOptions5 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions5->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Face *> boundaryFaces4(0);
    NXOpen::FaceTangentRule *faceTangentRule4;
    faceTangentRule4 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face1, boundaryFaces4, 0.050000000000000003, selectionIntentRuleOptions5);
    
    delete selectionIntentRuleOptions5;
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions6;
    selectionIntentRuleOptions6 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions6->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Face *> boundaryFaces5(0);
    NXOpen::FaceTangentRule *faceTangentRule5;
    faceTangentRule5 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face2, boundaryFaces5, 0.050000000000000003, selectionIntentRuleOptions6);
    
    delete selectionIntentRuleOptions6;
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions7;
    selectionIntentRuleOptions7 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions7->SetSelectedFromInactive(false);
    
    NXOpen::Face *face3(dynamic_cast<NXOpen::Face *>(revolve1->FindObject("FACE 3")));
    std::vector<NXOpen::Face *> boundaryFaces6(0);
    NXOpen::FaceTangentRule *faceTangentRule6;
    faceTangentRule6 = workPart->ScRuleFactory()->CreateRuleFaceTangent(face3, boundaryFaces6, 0.050000000000000003, selectionIntentRuleOptions7);
    
    delete selectionIntentRuleOptions7;
    std::vector<NXOpen::SelectionIntentRule *> rules4(3);
    rules4[0] = faceTangentRule4;
    rules4[1] = faceTangentRule5;
    rules4[2] = faceTangentRule6;
    scCollector1->ReplaceRules(rules4, false);
    
    NXOpen::Matrix3x3 rotMatrix11;
    rotMatrix11.Xx = 0.93240956955325238;
    rotMatrix11.Xy = -0.092844253426834791;
    rotMatrix11.Xz = -0.34927401737194513;
    rotMatrix11.Yx = -0.0054372159753117997;
    rotMatrix11.Yy = 0.96272506677772807;
    rotMatrix11.Yz = -0.27042722215091686;
    rotMatrix11.Zx = 0.36136246524502436;
    rotMatrix11.Zy = 0.2540480080682343;
    rotMatrix11.Zz = 0.89714925085439667;
    NXOpen::Point3d translation11(-39.541567337299298, 96.658414697288123, -106.31103725189891);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix11, translation11, 0.64427868104955599);
    
    NXOpen::Point3d scaleAboutPoint10(-288.4928481008829, 28.746618316102303, 0.0);
    NXOpen::Point3d viewCenter10(288.49284810088272, -28.746618316102168, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint10, viewCenter10);
    
    NXOpen::Point3d scaleAboutPoint11(-230.79427848070631, 23.654360214392742, 0.0);
    NXOpen::Point3d viewCenter11(230.79427848070617, -23.654360214392632, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint11, viewCenter11);
    
    NXOpen::Point3d scaleAboutPoint12(-184.63542278456507, 18.923488171514194, 0.0);
    NXOpen::Point3d viewCenter12(184.63542278456495, -18.923488171514077, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint12, viewCenter12);
    
    NXOpen::Point3d scaleAboutPoint13(-147.70833822765204, 15.769573476261826, 0.0);
    NXOpen::Point3d viewCenter13(147.70833822765189, -15.769573476261733, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint13, viewCenter13);
    
    NXOpen::Point3d scaleAboutPoint14(-118.16667058212165, 12.615658781009479, 0.0);
    NXOpen::Point3d viewCenter14(118.16667058212151, -12.615658781009348, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint14, viewCenter14);
    
    NXOpen::Point3d scaleAboutPoint15(-94.129635384705011, 11.034496213789641, 0.0);
    NXOpen::Point3d viewCenter15(94.129635384704898, -11.034496213789492, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint15, viewCenter15);
    
    NXOpen::Matrix3x3 rotMatrix12;
    rotMatrix12.Xx = 0.93204813723131608;
    rotMatrix12.Xy = -0.11584233671825234;
    rotMatrix12.Xz = -0.34331737926777656;
    rotMatrix12.Yx = 0.058315806566624044;
    rotMatrix12.Yy = 0.98312201644983033;
    rotMatrix12.Yz = -0.17340809518620395;
    rotMatrix12.Zx = 0.35761087314023737;
    rotMatrix12.Zy = 0.14160386221879262;
    rotMatrix12.Zz = 0.9230724834034445;
    NXOpen::Point3d translation12(172.40677385981593, 60.279116049078858, -109.93542656646528);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix12, translation12, 2.4577281229002237);
    
    NXOpen::Point3d scaleAboutPoint16(-15.232987456109539, 5.1673738367015218, 0.0);
    NXOpen::Point3d viewCenter16(15.232987456109479, -5.1673738367014268, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint16, viewCenter16);
    
    NXOpen::Point3d scaleAboutPoint17(-19.041234320136923, 6.459217295876873, 0.0);
    NXOpen::Point3d viewCenter17(19.041234320136866, -6.4592172958767833, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint17, viewCenter17);
    
    NXOpen::Point3d scaleAboutPoint18(-23.801542900171121, 8.4104391873396533, 0.0);
    NXOpen::Point3d viewCenter18(23.8015429001711, -8.4104391873395592, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint18, viewCenter18);
    
    NXOpen::Matrix3x3 rotMatrix13;
    rotMatrix13.Xx = 0.95942220910741038;
    rotMatrix13.Xy = -0.037052220166838859;
    rotMatrix13.Xz = -0.27952845588986308;
    rotMatrix13.Yx = -0.081736588907367957;
    rotMatrix13.Yy = 0.91222163134483947;
    rotMatrix13.Yz = -0.40146086402083075;
    rotMatrix13.Zx = 0.26986692036122295;
    rotMatrix13.Zy = 0.40801817151601594;
    rotMatrix13.Zz = 0.87217717065254685;
    NXOpen::Point3d translation13(156.31477758954424, 66.703909198057659, -115.25442349916409);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix13, translation13, 1.2583567989249147);
    
    NXOpen::Point3d origin10(-89.208876464687336, -8.9659165092978803, 163.94284318710527);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin10);
    
    NXOpen::Point3d origin11(-89.208876464687336, -8.9659165092978803, 163.94284318710527);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin11);
    
    NXOpen::Matrix3x3 rotMatrix14;
    rotMatrix14.Xx = 0.95535723157563468;
    rotMatrix14.Xy = -0.043037857768534582;
    rotMatrix14.Xz = -0.29230173258953002;
    rotMatrix14.Yx = -0.076513030980278326;
    rotMatrix14.Yy = 0.91954414483529967;
    rotMatrix14.Yz = -0.3854663692066177;
    rotMatrix14.Zx = 0.28537399350038256;
    rotMatrix14.Zy = 0.39062297487195735;
    rotMatrix14.Zz = 0.87520019157666507;
    NXOpen::Point3d translation14(131.20296407416441, 66.557714247425523, -114.90712609671783);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix14, translation14, 1.2583567989249147);
    
    NXOpen::Session::UndoMarkId markId25;
    markId25 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\212\275\345\243\263", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId25, NULL);
    
    NXOpen::Session::UndoMarkId markId26;
    markId26 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\212\275\345\243\263", NXOpen::NXString::UTF8));
    
    NXOpen::NXObject *nXObject5;
    nXObject5 = shellBuilder1->Commit();
    
    theSession->DeleteUndoMark(markId26, NULL);
    
    theSession->SetUndoMarkName(markId24, NXOpen::NXString("\346\212\275\345\243\263", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression7(shellBuilder1->DefaultThickness());
    shellBuilder1->Destroy();
    
    NXOpen::Matrix3x3 rotMatrix15;
    rotMatrix15.Xx = 0.99391260934568848;
    rotMatrix15.Xy = -0.092595116216113216;
    rotMatrix15.Xz = 0.059698152706561182;
    rotMatrix15.Yx = 0.10798995876625016;
    rotMatrix15.Yy = 0.92610332633397752;
    rotMatrix15.Yz = -0.36148415976196158;
    rotMatrix15.Zx = -0.02181499001409774;
    rotMatrix15.Zy = 0.36573046551534816;
    rotMatrix15.Zz = 0.93046511638245655;
    NXOpen::Point3d translation15(132.19238129567543, 66.426759321000887, -114.41014385404385);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix15, translation15, 1.2583567989249147);
    
    NXOpen::Point3d origin12(-43.694495693735675, -16.701741246943808, 128.50055564988045);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin12);
    
    NXOpen::Point3d origin13(-43.694495693735675, -16.701741246943808, 128.50055564988045);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin13);
    
    NXOpen::Matrix3x3 rotMatrix16;
    rotMatrix16.Xx = 0.99398597827400814;
    rotMatrix16.Xy = -0.093936751447587022;
    rotMatrix16.Xz = 0.056282872369343248;
    rotMatrix16.Yx = 0.10792255680311177;
    rotMatrix16.Yy = 0.9274380918465206;
    rotMatrix16.Yz = -0.35806606586657885;
    rotMatrix16.Zx = -0.018563316722741387;
    rotMatrix16.Zy = 0.36198684025743999;
    rotMatrix16.Zz = 0.9319983534066425;
    NXOpen::Point3d translation16(34.237550688067245, 66.610371530632364, -114.33540188047451);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix16, translation16, 1.2583567989249147);
    
    NXOpen::Matrix3x3 rotMatrix17;
    rotMatrix17.Xx = 0.93833670102795308;
    rotMatrix17.Xy = 0.039736190786122741;
    rotMatrix17.Xz = 0.34343160985237331;
    rotMatrix17.Yx = 0.070986080888834013;
    rotMatrix17.Yy = 0.95006323441564466;
    rotMatrix17.Yz = -0.30387633493204652;
    rotMatrix17.Zx = -0.33835663407716493;
    rotMatrix17.Zy = 0.30951718167736553;
    rotMatrix17.Zz = 0.88865848469616326;
    NXOpen::Point3d translation17(31.56875271095598, 66.158657565851342, -113.2878382049971);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix17, translation17, 1.2583567989249147);
    
    NXOpen::Point3d scaleAboutPoint19(-42.157326426539839, 63.498815864414119, 0.0);
    NXOpen::Point3d viewCenter19(42.157326426539818, -63.498815864414048, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint19, viewCenter19);
    
    NXOpen::Point3d scaleAboutPoint20(-53.22231048238352, 79.373519830517651, 0.0);
    NXOpen::Point3d viewCenter20(53.22231048238352, -79.373519830517594, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint20, viewCenter20);
    
    NXOpen::Point3d scaleAboutPoint21(-66.527888102979389, 98.888367007391579, 0.0);
    NXOpen::Point3d viewCenter21(66.527888102979389, -98.888367007391466, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint21, viewCenter21);
    
    NXOpen::Point3d scaleAboutPoint22(-82.338528176835609, 123.61045875923951, 0.0);
    NXOpen::Point3d viewCenter22(82.338528176835609, -123.61045875923936, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint22, viewCenter22);
    
    NXOpen::Point3d scaleAboutPoint23(-80.336531544107089, 155.02640591897978, 0.0);
    NXOpen::Point3d viewCenter23(80.336531544107089, -155.02640591897966, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint23, viewCenter23);
    
    NXOpen::Matrix3x3 rotMatrix18;
    rotMatrix18.Xx = 0.98768483739329394;
    rotMatrix18.Xy = -0.010326440061849346;
    rotMatrix18.Xz = -0.15611542722944369;
    rotMatrix18.Yx = -0.076750521487171985;
    rotMatrix18.Yy = 0.83753141137986975;
    rotMatrix18.Yz = -0.54097180370467635;
    rotMatrix18.Zx = 0.1363378870117542;
    rotMatrix18.Zy = 0.54629158842846282;
    rotMatrix18.Zz = 0.82642451620064949;
    NXOpen::Point3d translation18(-12.425947229059709, 128.74287948272368, -118.01507056189584);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix18, translation18, 0.64427868104955643);
    
    NXOpen::Matrix3x3 rotMatrix19;
    rotMatrix19.Xx = 0.98729507925687487;
    rotMatrix19.Xy = -0.0097306209716758688;
    rotMatrix19.Xz = -0.1585993111292324;
    rotMatrix19.Yx = -0.15353049343827049;
    rotMatrix19.Yy = 0.19880462524783893;
    rotMatrix19.Yz = -0.96793858718653603;
    rotMatrix19.Zx = 0.040948920129384121;
    rotMatrix19.Zy = 0.97999083464876036;
    rotMatrix19.Zz = 0.19478488120145643;
    NXOpen::Point3d translation19(-12.437842836024052, 141.49514427372091, -126.67393339266795);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix19, translation19, 0.64427868104955643);
    
    NXOpen::Point3d scaleAboutPoint24(-139.01043285715136, 162.62372647394969, 0.0);
    NXOpen::Point3d viewCenter24(139.01043285715136, -162.62372647394946, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint24, viewCenter24);
    
    NXOpen::Point3d scaleAboutPoint25(-173.7630410714392, 203.27965809243707, 0.0);
    NXOpen::Point3d viewCenter25(173.7630410714392, -203.27965809243685, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint25, viewCenter25);
    
    NXOpen::Session::UndoMarkId markId27;
    markId27 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\347\274\226\350\276\221\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->BeginTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId28;
    markId28 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Enter Sketch");
    
    sketch1->Activate(NXOpen::Sketch::ViewReorientTrue);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder3;
    sketchFindMovableObjectsBuilder3 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject6;
    nXObject6 = sketchFindMovableObjectsBuilder3->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder3->Destroy();
    
    theSession->DeleteUndoMarksUpToMark(markId28, NULL, true);
    
    NXOpen::Session::UndoMarkId markId29;
    markId29 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Open Sketch");
    
    NXOpen::Point3d scaleAboutPoint26(17.769192853918902, 5.5881047871634584, 0.0);
    NXOpen::Point3d viewCenter26(-17.769192853918874, -5.5881047871634584, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint26, viewCenter26);
    
    NXOpen::Point3d scaleAboutPoint27(22.211491067398608, 7.107677141567553, 0.0);
    NXOpen::Point3d viewCenter27(-22.211491067398608, -7.1076771415675468, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint27, viewCenter27);
    
    NXOpen::Point3d scaleAboutPoint28(29.219599455905406, 8.1952742903850062, 0.0);
    NXOpen::Point3d viewCenter28(-29.219599455905374, -8.1952742903849884, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint28, viewCenter28);
    
    NXOpen::Point3d scaleAboutPoint29(39.013718146400542, 9.2867010066278795, 0.0);
    NXOpen::Point3d viewCenter29(-39.013718146400485, -9.2867010066278475, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint29, viewCenter29);
    
    NXOpen::Point3d scaleAboutPoint30(49.485191575265723, 11.488702276240659, 0.0);
    NXOpen::Point3d viewCenter30(-49.485191575265674, -11.488702276240618, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint30, viewCenter30);
    
    NXOpen::Point3d scaleAboutPoint31(61.557304513971729, 14.061692890190411, 0.0);
    NXOpen::Point3d viewCenter31(-61.557304513971694, -14.061692890190345, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint31, viewCenter31);
    
    NXOpen::Point3d scaleAboutPoint32(86.109169892721667, 10.658464025809229, 0.0);
    NXOpen::Point3d viewCenter32(-86.109169892721624, -10.658464025809167, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint32, viewCenter32);
    
    NXOpen::Point3d origin14(-143.09451408104235, 4.5745675494208369, 0.0);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin14);
    
    NXOpen::Point3d origin15(-143.09451408104235, 4.5745675494208369, 0.0);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin15);
    
    NXOpen::Matrix3x3 rotMatrix20;
    rotMatrix20.Xx = 1.0;
    rotMatrix20.Xy = 0.0;
    rotMatrix20.Xz = 0.0;
    rotMatrix20.Yx = 0.0;
    rotMatrix20.Yy = 1.0;
    rotMatrix20.Yz = 0.0;
    rotMatrix20.Zx = 0.0;
    rotMatrix20.Zy = 0.0;
    rotMatrix20.Zz = 1.0;
    NXOpen::Point3d translation20(143.09451408104235, -4.5745675494208085, 0.0);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix20, translation20, 1.7686941058628538);
    
    NXOpen::Session::UndoMarkId markId30;
    markId30 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\351\200\211\346\213\251\345\207\240\344\275\225\344\275\223", NXOpen::NXString::UTF8));
    
    NXOpen::SketchDragGeometryBuilder *sketchDragGeometryBuilder1;
    sketchDragGeometryBuilder1 = workPart->Sketches()->CreateDragGeometryBuilder();
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects1(1);
    dragobjects1[0].Geometry = line7;
    dragobjects1[0].PointType = NXOpen::Sketch::PointTypeNone;
    dragobjects1[0].PointIndex = 0;
    sketchDragGeometryBuilder1->SetDragGeometry(dragobjects1);
    
    sketchDragGeometryBuilder1->SetSplineLinearScale(false);
    
    std::vector<NXOpen::SketchFoundRelation *> foundrelations1;
    foundrelations1 = sketchDragGeometryBuilder1->FindRelations();
    
    theSession->ActiveSketch()->UpdateDimensionDisplay();
    
    theSession->SetUndoMarkVisibility(markId30, NULL, NXOpen::Session::MarkVisibilityVisible);
    
    theSession->SetUndoMarkName(markId30, NXOpen::NXString("\350\215\211\345\233\276\346\213\226\346\213\275", NXOpen::NXString::UTF8));
    
    sketchDragGeometryBuilder1->SetSnapRadius(3.9492414074577251);
    
    sketchDragGeometryBuilder1->SetSplineLinearScale(false);
    
    NXOpen::Sketch::SketchGeometry snapgeometry1;
    snapgeometry1.Geometry = line7;
    snapgeometry1.PointType = NXOpen::Sketch::PointTypeEndPoint;
    snapgeometry1.PointIndex = 0;
    sketchDragGeometryBuilder1->SetSnapGeometry(snapgeometry1);
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects2(1);
    dragobjects2[0].Geometry = line7;
    dragobjects2[0].PointType = NXOpen::Sketch::PointTypeEndPoint;
    dragobjects2[0].PointIndex = 0;
    sketchDragGeometryBuilder1->SetDragGeometry(dragobjects2);
    
    NXOpen::Point3d initialposition1(-170.37201864158604, 13.96589670363754, 0.0);
    sketchDragGeometryBuilder1->InitializeDrag(initialposition1);
    
    NXOpen::Point3d newposition1(-168.45043902665159, 14.148486112954728, 0.0);
    sketchDragGeometryBuilder1->DragToPoint(newposition1);
    
    NXOpen::NXObject *nXObject7;
    nXObject7 = sketchDragGeometryBuilder1->Commit();
    
    sketchDragGeometryBuilder1->Destroy();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder4;
    sketchFindMovableObjectsBuilder4 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject8;
    nXObject8 = sketchFindMovableObjectsBuilder4->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder4->Destroy();
    
    NXOpen::Session::UndoMarkId markId31;
    markId31 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\215\211\345\233\276\346\213\226\346\213\275", NXOpen::NXString::UTF8));
    
    NXOpen::SketchDragGeometryBuilder *sketchDragGeometryBuilder2;
    sketchDragGeometryBuilder2 = workPart->Sketches()->CreateDragGeometryBuilder();
    
    sketchDragGeometryBuilder2->SetSnapRadius(3.9492414074577251);
    
    sketchDragGeometryBuilder2->SetSplineLinearScale(false);
    
    NXOpen::Sketch::SketchGeometry snapgeometry2;
    snapgeometry2.Geometry = line4;
    snapgeometry2.PointType = NXOpen::Sketch::PointTypeNone;
    snapgeometry2.PointIndex = 0;
    sketchDragGeometryBuilder2->SetSnapGeometry(snapgeometry2);
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects3(1);
    dragobjects3[0].Geometry = line4;
    dragobjects3[0].PointType = NXOpen::Sketch::PointTypeNone;
    dragobjects3[0].PointIndex = 0;
    sketchDragGeometryBuilder2->SetDragGeometry(dragobjects3);
    
    NXOpen::Point3d initialposition2(-219.16228891787006, 27.163031660258603, 0.0);
    sketchDragGeometryBuilder2->InitializeDrag(initialposition2);
    
    NXOpen::Point3d newposition2(-222.75250837919529, 23.722404676488619, 0.0);
    sketchDragGeometryBuilder2->DragToPoint(newposition2);
    
    NXOpen::NXObject *nXObject9;
    nXObject9 = sketchDragGeometryBuilder2->Commit();
    
    sketchDragGeometryBuilder2->Destroy();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder5;
    sketchFindMovableObjectsBuilder5 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject10;
    nXObject10 = sketchFindMovableObjectsBuilder5->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder5->Destroy();
    
    NXOpen::Session::UndoMarkId markId32;
    markId32 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\215\211\345\233\276\346\213\226\346\213\275", NXOpen::NXString::UTF8));
    
    NXOpen::SketchDragGeometryBuilder *sketchDragGeometryBuilder3;
    sketchDragGeometryBuilder3 = workPart->Sketches()->CreateDragGeometryBuilder();
    
    sketchDragGeometryBuilder3->SetSnapRadius(3.9492414074577251);
    
    sketchDragGeometryBuilder3->SetSplineLinearScale(false);
    
    NXOpen::Sketch::SketchGeometry snapgeometry3;
    snapgeometry3.Geometry = line6;
    snapgeometry3.PointType = NXOpen::Sketch::PointTypeNone;
    snapgeometry3.PointIndex = 0;
    sketchDragGeometryBuilder3->SetSnapGeometry(snapgeometry3);
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects4(1);
    dragobjects4[0].Geometry = line6;
    dragobjects4[0].PointType = NXOpen::Sketch::PointTypeNone;
    dragobjects4[0].PointIndex = 0;
    sketchDragGeometryBuilder3->SetDragGeometry(dragobjects4);
    
    NXOpen::Point3d initialposition3(-191.93645800282059, 26.115884317372085, 0.0);
    sketchDragGeometryBuilder3->InitializeDrag(initialposition3);
    
    NXOpen::Point3d newposition3(-204.50222611745883, 24.91914449693035, 0.0);
    sketchDragGeometryBuilder3->DragToPoint(newposition3);
    
    NXOpen::NXObject *nXObject11;
    nXObject11 = sketchDragGeometryBuilder3->Commit();
    
    sketchDragGeometryBuilder3->Destroy();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder6;
    sketchFindMovableObjectsBuilder6 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject12;
    nXObject12 = sketchFindMovableObjectsBuilder6->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder6->Destroy();
    
    NXOpen::Session::UndoMarkId markId33;
    markId33 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\215\211\345\233\276\346\213\226\346\213\275", NXOpen::NXString::UTF8));
    
    NXOpen::SketchDragGeometryBuilder *sketchDragGeometryBuilder4;
    sketchDragGeometryBuilder4 = workPart->Sketches()->CreateDragGeometryBuilder();
    
    sketchDragGeometryBuilder4->SetSnapRadius(3.9492414074577251);
    
    sketchDragGeometryBuilder4->SetSplineLinearScale(false);
    
    NXOpen::Sketch::SketchGeometry snapgeometry4;
    snapgeometry4.Geometry = line8;
    snapgeometry4.PointType = NXOpen::Sketch::PointTypeNone;
    snapgeometry4.PointIndex = 0;
    sketchDragGeometryBuilder4->SetSnapGeometry(snapgeometry4);
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects5(1);
    dragobjects5[0].Geometry = line8;
    dragobjects5[0].PointType = NXOpen::Sketch::PointTypeNone;
    dragobjects5[0].PointIndex = 0;
    sketchDragGeometryBuilder4->SetDragGeometry(dragobjects5);
    
    NXOpen::Point3d initialposition4(-169.04880893687243, 7.5664171005251859, 0.0);
    sketchDragGeometryBuilder4->InitializeDrag(initialposition4);
    
    NXOpen::Point3d newposition4(-195.82586241925625, 6.0704923249730047, 0.0);
    sketchDragGeometryBuilder4->DragToPoint(newposition4);
    
    NXOpen::NXObject *nXObject13;
    nXObject13 = sketchDragGeometryBuilder4->Commit();
    
    sketchDragGeometryBuilder4->Destroy();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder7;
    sketchFindMovableObjectsBuilder7 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject14;
    nXObject14 = sketchFindMovableObjectsBuilder7->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder7->Destroy();
    
    NXOpen::Session::UndoMarkId markId34;
    markId34 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\215\211\345\233\276\346\213\226\346\213\275", NXOpen::NXString::UTF8));
    
    NXOpen::SketchDragGeometryBuilder *sketchDragGeometryBuilder5;
    sketchDragGeometryBuilder5 = workPart->Sketches()->CreateDragGeometryBuilder();
    
    sketchDragGeometryBuilder5->SetSnapRadius(3.9492414074577251);
    
    sketchDragGeometryBuilder5->SetSplineLinearScale(false);
    
    NXOpen::Sketch::SketchGeometry snapgeometry5;
    snapgeometry5.Geometry = line2;
    snapgeometry5.PointType = NXOpen::Sketch::PointTypeNone;
    snapgeometry5.PointIndex = 0;
    sketchDragGeometryBuilder5->SetSnapGeometry(snapgeometry5);
    
    std::vector<NXOpen::Sketch::SketchGeometry> dragobjects6(1);
    dragobjects6[0].Geometry = line2;
    dragobjects6[0].PointType = NXOpen::Sketch::PointTypeNone;
    dragobjects6[0].PointIndex = 0;
    sketchDragGeometryBuilder5->SetDragGeometry(dragobjects6);
    
    NXOpen::Point3d initialposition5(-251.92304150246258, 6.6688622351938811, 0.0);
    sketchDragGeometryBuilder5->InitializeDrag(initialposition5);
    
    NXOpen::Point3d newposition5(-258.20592555978169, 5.4721224147521461, 0.0);
    sketchDragGeometryBuilder5->DragToPoint(newposition5);
    
    NXOpen::NXObject *nXObject15;
    nXObject15 = sketchDragGeometryBuilder5->Commit();
    
    sketchDragGeometryBuilder5->Destroy();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder8;
    sketchFindMovableObjectsBuilder8 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject16;
    nXObject16 = sketchFindMovableObjectsBuilder8->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder8->Destroy();
    
    // ----------------------------------------------
    //   Menu: 任务(K)->完成草图(K)
    // ----------------------------------------------
    NXOpen::SketchWorkRegionBuilder *sketchWorkRegionBuilder2;
    sketchWorkRegionBuilder2 = workPart->Sketches()->CreateWorkRegionBuilder();
    
    sketchWorkRegionBuilder2->SetScope(NXOpen::SketchWorkRegionBuilder::ScopeTypeEntireSketch);
    
    NXOpen::NXObject *nXObject17;
    nXObject17 = sketchWorkRegionBuilder2->Commit();
    
    sketchWorkRegionBuilder2->Destroy();
    
    theSession->ActiveSketch()->CalculateStatus();
    
    section1->PrepareMappingData();
    
    std::vector<NXOpen::Section *> section2;
    section2 = revolve1->GetSections();
    
    section1->CleanMappingData();
    
    theSession->Preferences()->Sketch()->SetSectionView(false);
    
    NXOpen::Session::UndoMarkId markId35;
    markId35 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);
    
    theSession->DeleteUndoMarksSetInTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    theSession->EndTaskEnvironment();
    
    NXOpen::Matrix3x3 rotMatrix21;
    rotMatrix21.Xx = 0.99950946404486429;
    rotMatrix21.Xy = 0.025536752225565514;
    rotMatrix21.Xz = -0.018130239119182739;
    rotMatrix21.Yx = -0.027311729815928193;
    rotMatrix21.Yy = 0.99403775384163917;
    rotMatrix21.Yz = -0.10556047248820785;
    rotMatrix21.Zx = 0.015326470539899438;
    rotMatrix21.Zy = 0.10600385947333357;
    rotMatrix21.Zz = 0.99424759545977726;
    NXOpen::Point3d translation21(-91.29695830832884, 217.49056471956277, -109.30515924166032);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix21, translation21, 0.41233835587171597);
    
    NXOpen::Point3d scaleAboutPoint33(-418.68679578697947, 211.10797825887559, 0.0);
    NXOpen::Point3d viewCenter33(418.68679578697947, -211.10797825887539, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint33, viewCenter33);
    
    NXOpen::Point3d scaleAboutPoint34(-325.19611970090602, 179.15303200570835, 0.0);
    NXOpen::Point3d viewCenter34(325.19611970090602, -179.15303200570824, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint34, viewCenter34);
    
    NXOpen::Point3d scaleAboutPoint35(-398.1534969897636, 232.28294264350433, 0.0);
    NXOpen::Point3d viewCenter35(398.1534969897636, -232.28294264350427, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint35, viewCenter35);
    
    NXOpen::Point3d scaleAboutPoint36(-303.63615596382948, 190.95967881410746, 0.0);
    NXOpen::Point3d viewCenter36(303.63615596382948, -190.95967881410735, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint36, viewCenter36);
    
    NXOpen::Point3d scaleAboutPoint37(-206.35965291201938, 162.62372647394963, 0.0);
    NXOpen::Point3d viewCenter37(206.35965291201921, -162.62372647394949, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint37, viewCenter37);
    
    NXOpen::Point3d scaleAboutPoint38(-157.53146837224014, 131.74164508293691, 0.0);
    NXOpen::Point3d viewCenter38(157.53146837223994, -131.74164508293688, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint38, viewCenter38);
    
    NXOpen::Point3d scaleAboutPoint39(-95.274506419081703, 95.668745755988155, 0.0);
    NXOpen::Point3d viewCenter39(95.274506419081476, -95.668745755988098, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint39, viewCenter39);
    
    NXOpen::Point3d scaleAboutPoint40(-76.009344155581886, 78.006823462574957, 0.0);
    NXOpen::Point3d viewCenter40(76.009344155581701, -78.006823462574886, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint40, viewCenter40);
    
    NXOpen::Point3d scaleAboutPoint41(-59.63001383823795, 64.255755391274676, 0.0);
    NXOpen::Point3d viewCenter41(59.630013838237801, -64.255755391274633, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint41, viewCenter41);
    
    NXOpen::Point3d origin17(-120.04090950093769, -14.965609250580279, 113.38360339962342);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin17);
    
    NXOpen::Point3d origin18(-120.04090950093769, -14.965609250580279, 113.38360339962342);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin18);
    
    NXOpen::Matrix3x3 rotMatrix22;
    rotMatrix22.Xx = 0.99952105139670255;
    rotMatrix22.Xy = 0.025193018860269846;
    rotMatrix22.Xz = -0.017971633635740454;
    rotMatrix22.Yx = -0.030816585441627433;
    rotMatrix22.Yy = 0.86339030065677114;
    rotMatrix22.Yz = -0.50359460560408165;
    rotMatrix22.Zx = 0.0028294657711417925;
    rotMatrix22.Zy = 0.50390723405456217;
    rotMatrix22.Zz = 0.86375314389641056;
    NXOpen::Point3d translation22(122.42676909901603, 26.164065851651436, -117.28861137524763);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix22, translation22, 1.966182498320179);
    
    NXOpen::Point3d scaleAboutPoint42(-29.268328371941902, 38.8898708022584, 0.0);
    NXOpen::Point3d viewCenter42(29.268328371941841, -38.889870802258343, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint42, viewCenter42);
    
    NXOpen::Point3d scaleAboutPoint43(-36.24899289743378, 48.612338502823008, 0.0);
    NXOpen::Point3d viewCenter43(36.248992897433688, -48.612338502822951, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint43, viewCenter43);
    
    NXOpen::Matrix3x3 rotMatrix23;
    rotMatrix23.Xx = 0.99337154053227994;
    rotMatrix23.Xy = -0.025719523493983584;
    rotMatrix23.Xz = -0.11203342613599071;
    rotMatrix23.Yx = 0.0046968399762564346;
    rotMatrix23.Yy = 0.98291462361814452;
    rotMatrix23.Yz = -0.18400212599815396;
    rotMatrix23.Zx = 0.11485173988566098;
    rotMatrix23.Zy = 0.18225627228944985;
    rotMatrix23.Zz = 0.97652021436137826;
    NXOpen::Point3d translation23(107.04459609380376, 45.764862623685787, -110.51489588796852);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix23, translation23, 1.2583567989249147);
    
    NXOpen::Session::UndoMarkId markId36;
    markId36 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\256\276\344\270\272\346\234\200\346\226\260", NXOpen::NXString::UTF8));
    
    std::vector<NXOpen::NXObject *> objects1(1);
    NXOpen::Features::Shell *shell1(dynamic_cast<NXOpen::Features::Shell *>(nXObject5));
    objects1[0] = shell1;
    theSession->UpdateManager()->MakeUpToDate(objects1, markId36);
    
    NXOpen::Matrix3x3 rotMatrix24;
    rotMatrix24.Xx = 0.98022892443395948;
    rotMatrix24.Xy = 0.041883853460961629;
    rotMatrix24.Xz = 0.19338303576660684;
    rotMatrix24.Yx = -0.0079666233661587153;
    rotMatrix24.Yy = 0.9849013345984019;
    rotMatrix24.Yz = -0.17293320681243926;
    rotMatrix24.Zx = -0.19770631910788583;
    rotMatrix24.Zy = 0.16797352150131734;
    rotMatrix24.Zz = 0.96576244877260875;
    NXOpen::Point3d translation24(105.69488572872625, 45.725197676115819, -110.2297388788237);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix24, translation24, 1.2583567989249147);
    
    NXOpen::Matrix3x3 rotMatrix25;
    rotMatrix25.Xx = 0.90453706617900609;
    rotMatrix25.Xy = -0.18895969321986186;
    rotMatrix25.Xz = -0.38223936250278123;
    rotMatrix25.Yx = -0.026689226047921989;
    rotMatrix25.Yy = 0.86959611423932615;
    rotMatrix25.Yz = -0.49304186770783281;
    rotMatrix25.Zx = 0.42555890440835559;
    rotMatrix25.Zy = 0.45617631727011143;
    rotMatrix25.Zz = 0.78153872996841356;
    NXOpen::Point3d translation25(110.30370767964762, 48.027281655883755, -115.98374582662319);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix25, translation25, 1.2583567989249147);
    
    NXOpen::Matrix3x3 rotMatrix26;
    rotMatrix26.Xx = 0.66386019655551254;
    rotMatrix26.Xy = -0.074195828488009347;
    rotMatrix26.Xz = 0.74416706354437334;
    rotMatrix26.Yx = 0.4731792893096492;
    rotMatrix26.Yy = 0.81223723511542467;
    rotMatrix26.Yz = -0.34113345491239311;
    rotMatrix26.Zx = -0.57912951884504349;
    rotMatrix26.Zy = 0.57858936468537869;
    rotMatrix26.Zz = 0.57431989994712906;
    NXOpen::Point3d translation26(108.01243193660046, 49.172459266380272, -118.4277385139593);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix26, translation26, 1.2583567989249147);
    
    NXOpen::Point3d origin19(-106.9458797431521, 29.904437462895327, 68.236941061114919);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin19);
    
    NXOpen::Point3d origin20(-106.9458797431521, 29.904437462895327, 68.236941061114919);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin20);
    
    NXOpen::Matrix3x3 rotMatrix27;
    rotMatrix27.Xx = 0.61691580740027119;
    rotMatrix27.Xy = -0.036617095671851181;
    rotMatrix27.Xz = 0.78617687251930246;
    rotMatrix27.Yx = 0.38031312777089737;
    rotMatrix27.Yy = 0.88841722067817019;
    rotMatrix27.Yz = -0.25705401542787171;
    rotMatrix27.Zx = -0.689040500569298;
    rotMatrix27.Zy = 0.45757407084212637;
    rotMatrix27.Zz = 0.56200458918782625;
    NXOpen::Point3d translation27(21.685948832940884, 48.072037735098576, -116.01165216161631);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix27, translation27, 1.2583567989249147);
    
    NXOpen::Point3d scaleAboutPoint44(-52.039592471663966, 65.811686640932493, 0.0);
    NXOpen::Point3d viewCenter44(52.039592471663873, -65.81168664093245, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint44, viewCenter44);
    
    NXOpen::Point3d scaleAboutPoint45(-65.837969263392992, 83.315913199583079, 0.0);
    NXOpen::Point3d viewCenter45(65.837969263392878, -83.315913199583022, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint45, viewCenter45);
    
    NXOpen::Point3d scaleAboutPoint46(-84.268658263773858, 105.13048984174516, 0.0);
    NXOpen::Point3d viewCenter46(84.268658263773787, -105.13048984174512, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint46, viewCenter46);
    
    NXOpen::Point3d scaleAboutPoint47(-105.3358228297174, 131.41311230218147, 0.0);
    NXOpen::Point3d viewCenter47(105.33582282971722, -131.41311230218133, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint47, viewCenter47);
    
    NXOpen::Point3d scaleAboutPoint48(-117.80980184902607, 157.59306826863175, 0.0);
    NXOpen::Point3d viewCenter48(117.80980184902585, -157.59306826863153, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint48, viewCenter48);
    
    NXOpen::Matrix3x3 rotMatrix28;
    rotMatrix28.Xx = 0.68168048261592162;
    rotMatrix28.Xy = -0.11841519195126854;
    rotMatrix28.Xz = 0.72200385174573001;
    rotMatrix28.Yx = 0.42721091052639854;
    rotMatrix28.Yy = 0.86554240594424969;
    rotMatrix28.Yz = -0.26139468517826719;
    rotMatrix28.Zx = -0.59397184912058765;
    rotMatrix28.Zy = 0.48663557805341962;
    rotMatrix28.Zz = 0.6406116269822818;
    NXOpen::Point3d translation28(-83.003902522049074, 184.34480400095057, -116.5918689980326);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix28, translation28, 0.41233835587171613);
    
    NXOpen::Matrix3x3 rotMatrix29;
    rotMatrix29.Xx = 0.67063280295062999;
    rotMatrix29.Xy = -0.078736080202113826;
    rotMatrix29.Xz = 0.73759899219087188;
    rotMatrix29.Yx = 0.67045643897726559;
    rotMatrix29.Yy = 0.48979880783927032;
    rotMatrix29.Yz = -0.55730179550505143;
    rotMatrix29.Zx = -0.31739534817086901;
    rotMatrix29.Zy = 0.86827285890648342;
    rotMatrix29.Zz = 0.38126425933446528;
    NXOpen::Point3d translation29(-83.796101237811428, 191.84657464935785, -124.21130780226088);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix29, translation29, 0.41233835587171613);
    
    NXOpen::Matrix3x3 rotMatrix30;
    rotMatrix30.Xx = 0.032963273007168524;
    rotMatrix30.Xy = -0.12587055713976847;
    rotMatrix30.Xz = 0.99149887820308791;
    rotMatrix30.Yx = 0.25327797670776026;
    rotMatrix30.Yy = 0.96070738438100323;
    rotMatrix30.Yz = 0.11354112959908698;
    rotMatrix30.Zx = -0.96683177913610274;
    rotMatrix30.Zy = 0.24738214252677623;
    rotMatrix30.Zz = 0.063548299830793881;
    NXOpen::Point3d translation30(-82.855055169688811, 182.44482261578898, -111.81514250364556);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix30, translation30, 0.41233835587171613);
    
    NXOpen::Matrix3x3 rotMatrix31;
    rotMatrix31.Xx = 0.75954432941473726;
    rotMatrix31.Xy = -0.035207557791885447;
    rotMatrix31.Xz = 0.64950199347519388;
    rotMatrix31.Yx = 0.47797970987987359;
    rotMatrix31.Yy = 0.70745882056080589;
    rotMatrix31.Yz = -0.52061253745359148;
    rotMatrix31.Zx = -0.44116641825627656;
    rotMatrix31.Zy = 0.70587707505276598;
    rotMatrix31.Zz = 0.5541748337103436;
    NXOpen::Point3d translation31(-84.665153946713076, 187.50096369816308, -120.96905449207006);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix31, translation31, 0.41233835587171613);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图(S)
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId37;
    markId37 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Enter Sketch");
    
    NXOpen::Session::UndoMarkId markId38;
    markId38 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Update Model from Sketch");
    
    theSession->BeginTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId39;
    markId39 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder2;
    sketchInPlaceBuilder2 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    NXOpen::Point3d origin21(0.0, 0.0, 0.0);
    NXOpen::Vector3d normal2(0.0, 0.0, 1.0);
    NXOpen::Plane *plane2;
    plane2 = workPart->Planes()->CreatePlane(origin21, normal2, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    sketchInPlaceBuilder2->SetPlaneReference(plane2);
    
    NXOpen::Expression *expression8;
    expression8 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression9;
    expression9 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder2;
    sketchAlongPathBuilder2 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);
    
    NXOpen::SimpleSketchInPlaceBuilder *simpleSketchInPlaceBuilder2;
    simpleSketchInPlaceBuilder2 = workPart->Sketches()->CreateSimpleSketchInPlaceBuilder();
    
    sketchAlongPathBuilder2->PlaneLocation()->Expression()->SetFormula("0");
    
    theSession->SetUndoMarkName(markId39, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    simpleSketchInPlaceBuilder2->SetUseWorkPartOrigin(false);
    
    NXOpen::Matrix3x3 rotMatrix32;
    rotMatrix32.Xx = 0.91183556593660386;
    rotMatrix32.Xy = -0.017590652391069495;
    rotMatrix32.Xz = 0.410178582621684;
    rotMatrix32.Yx = 0.19303973530488092;
    rotMatrix32.Yy = 0.90012363898989411;
    rotMatrix32.Yz = -0.39052925002490396;
    rotMatrix32.Zx = -0.36234177413941515;
    rotMatrix32.Zy = 0.43527922472827796;
    rotMatrix32.Zz = 0.82416044265267829;
    NXOpen::Point3d translation32(-82.390180247675431, 182.22371258365609, -118.52611684734572);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix32, translation32, 0.41233835587171613);
    
    NXOpen::Direction *direction5;
    direction5 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Xform *xform2;
    xform2 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane1, direction5, point1, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem2;
    cartesianCoordinateSystem2 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform2, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    simpleSketchInPlaceBuilder2->SetCoordinateSystem(cartesianCoordinateSystem2);
    
    simpleSketchInPlaceBuilder2->HorizontalReference()->SetValue(datumAxis1);
    
    NXOpen::Point *point7;
    point7 = simpleSketchInPlaceBuilder2->SketchOrigin();
    
    simpleSketchInPlaceBuilder2->SetSketchOrigin(point7);
    
    NXOpen::Point *point8;
    point8 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Session::UndoMarkId markId40;
    markId40 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId40, NULL);
    
    NXOpen::Session::UndoMarkId markId41;
    markId41 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(false);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(false);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(false);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetDisplayShadedRegions(true);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    theSession->Preferences()->Sketch()->SetEditDimensionOnCreation(true);
    
    theSession->Preferences()->Sketch()->SetCreateDimensionForTypedValues(true);
    
    theSession->Preferences()->Sketch()->SetAddRemoteFindingAfterSnap(true);
    
    NXOpen::NXObject *nXObject18;
    nXObject18 = simpleSketchInPlaceBuilder2->Commit();
    
    NXOpen::Sketch *sketch2(dynamic_cast<NXOpen::Sketch *>(nXObject18));
    NXOpen::Features::Feature *feature3;
    feature3 = sketch2->Feature();
    
    NXOpen::Session::UndoMarkId markId42;
    markId42 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "update");
    
    int nErrs4;
    nErrs4 = theSession->UpdateManager()->DoUpdate(markId42);
    
    sketch2->Activate(NXOpen::Sketch::ViewReorientTrue);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder9;
    sketchFindMovableObjectsBuilder9 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject19;
    nXObject19 = sketchFindMovableObjectsBuilder9->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder9->Destroy();
    
    theSession->DeleteUndoMark(markId41, NULL);
    
    theSession->SetUndoMarkName(markId39, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    sketchInPlaceBuilder2->Destroy();
    
    sketchAlongPathBuilder2->Destroy();
    
    simpleSketchInPlaceBuilder2->Destroy();
    
    workPart->Points()->DeletePoint(point8);
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression9);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression8);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    plane2->DestroyPlane();
    
    theSession->DeleteUndoMarksUpToMark(markId38, NULL, true);
    
    NXOpen::Session::UndoMarkId markId43;
    markId43 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Open Sketch");
    
    theSession->ActiveSketch()->SetName("SKETCH_001");
    
    NXOpen::Point3d scaleAboutPoint49(-171.00387904556342, 19.249967622389988, 0.0);
    NXOpen::Point3d viewCenter49(171.00387904556314, -19.249967622389775, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint49, viewCenter49);
    
    NXOpen::Point3d scaleAboutPoint50(-148.6097500448499, 9.7533169286776342, 0.0);
    NXOpen::Point3d viewCenter50(148.60975004484968, -9.7533169286774068, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint50, viewCenter50);
    
    NXOpen::Point3d scaleAboutPoint51(-120.11979796371291, 7.8026535429421537, 0.0);
    NXOpen::Point3d viewCenter51(120.11979796371264, -7.8026535429419264, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint51, viewCenter51);
    
    NXOpen::Point3d scaleAboutPoint52(-95.767305590214846, 6.2421228343537605, 0.0);
    NXOpen::Point3d viewCenter52(95.767305590214661, -6.2421228343534692, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint52, viewCenter52);
    
    NXOpen::Point3d scaleAboutPoint53(-119.29846601182423, 7.8026535429421564, 0.0);
    NXOpen::Point3d viewCenter53(119.29846601182406, -7.8026535429419281, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint53, viewCenter53);
    
    NXOpen::Point3d scaleAboutPoint54(-104.96622345136755, -31.210614171768, 0.0);
    NXOpen::Point3d viewCenter54(104.9662234513674, 31.210614171768217, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint54, viewCenter54);
    
    NXOpen::Point3d scaleAboutPoint55(-135.31443907365261, -36.138605883099764, 0.0);
    NXOpen::Point3d viewCenter55(135.31443907365244, 36.138605883099991, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint55, viewCenter55);
    
    NXOpen::Point3d scaleAboutPoint56(-112.52247740874289, -28.253819144968872, 0.0);
    NXOpen::Point3d viewCenter56(112.52247740874282, 28.253819144969164, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint56, viewCenter56);
    
    NXOpen::Point3d scaleAboutPoint57(-91.069286825411766, -22.603055315975066, 0.0);
    NXOpen::Point3d viewCenter57(91.069286825411766, 22.603055315975357, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint57, viewCenter57);
    
    NXOpen::Point3d scaleAboutPoint58(-116.13633799705288, -28.253819144968872, 0.0);
    NXOpen::Point3d viewCenter58(116.13633799705281, 28.253819144969164, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint58, viewCenter58);
    
    NXOpen::Point3d scaleAboutPoint59(-95.537332643685971, -24.180012663601282, 0.0);
    NXOpen::Point3d viewCenter59(95.537332643685971, 24.180012663601516, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint59, viewCenter59);
    
    NXOpen::Point3d scaleAboutPoint60(-76.429866114948766, -19.344010130881024, 0.0);
    NXOpen::Point3d viewCenter60(76.429866114948766, 19.344010130881237, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint60, viewCenter60);
    
    NXOpen::Point3d scaleAboutPoint61(-61.648519243199388, -15.475208104704802, 0.0);
    NXOpen::Point3d viewCenter61(61.648519243199388, 15.475208104705006, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint61, viewCenter61);
    
    NXOpen::Point3d scaleAboutPoint62(-49.453382421556917, -11.976465402771522, 0.0);
    NXOpen::Point3d viewCenter62(49.453382421556945, 11.976465402771701, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint62, viewCenter62);
    
    NXOpen::Point3d scaleAboutPoint63(-39.778013180441413, -9.2582114574233518, 0.0);
    NXOpen::Point3d viewCenter63(39.778013180441484, 9.2582114574235543, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint63, viewCenter63);
    
    NXOpen::Point3d scaleAboutPoint64(-33.028131106250129, -3.7894074802476401, 0.0);
    NXOpen::Point3d viewCenter64(33.028131106250207, 3.7894074802478408, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint64, viewCenter64);
    
    NXOpen::Point3d scaleAboutPoint65(-41.177510261214692, -4.1984912423198404, 0.0);
    NXOpen::Point3d viewCenter65(41.177510261214813, 4.1984912423200313, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint65, viewCenter65);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->曲线(C)->直线(L)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId44;
    markId44 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId45;
    markId45 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId45, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint9(-206.0, 32.0, 0.0);
    NXOpen::Point3d endPoint9(-206.00000000000011, 4.0, 0.0);
    NXOpen::Line *line9;
    line9 = workPart->Curves()->CreateLine(startPoint9, endPoint9);
    
    theSession->ActiveSketch()->AddGeometry(line9, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId46;
    markId46 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId46, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint10(-206.00000000000011, 4.0, 0.0);
    NXOpen::Point3d endPoint10(-256.00000000000011, 4.0000000000001172, 0.0);
    NXOpen::Line *line10;
    line10 = workPart->Curves()->CreateLine(startPoint10, endPoint10);
    
    theSession->ActiveSketch()->AddGeometry(line10, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId47;
    markId47 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId47, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint11(-256.00000000000011, 4.0000000000001172, 0.0);
    NXOpen::Point3d endPoint11(-256.00000000000011, 13.000000000000117, 0.0);
    NXOpen::Line *line11;
    line11 = workPart->Curves()->CreateLine(startPoint11, endPoint11);
    
    theSession->ActiveSketch()->AddGeometry(line11, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId48;
    markId48 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId48, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::Point3d startPoint12(-256.00000000000011, 13.000000000000117, 0.0);
    NXOpen::Point3d endPoint12(-206.0, 31.999999999999996, 0.0);
    NXOpen::Line *line12;
    line12 = workPart->Curves()->CreateLine(startPoint12, endPoint12);
    
    theSession->ActiveSketch()->AddGeometry(line12, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Line
    // ----------------------------------------------
    // ----------------------------------------------
    //   Menu: 任务(K)->完成草图(K)
    // ----------------------------------------------
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder10;
    sketchFindMovableObjectsBuilder10 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject20;
    nXObject20 = sketchFindMovableObjectsBuilder10->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder10->Destroy();
    
    NXOpen::SketchWorkRegionBuilder *sketchWorkRegionBuilder3;
    sketchWorkRegionBuilder3 = workPart->Sketches()->CreateWorkRegionBuilder();
    
    sketchWorkRegionBuilder3->SetScope(NXOpen::SketchWorkRegionBuilder::ScopeTypeEntireSketch);
    
    NXOpen::NXObject *nXObject21;
    nXObject21 = sketchWorkRegionBuilder3->Commit();
    
    sketchWorkRegionBuilder3->Destroy();
    
    theSession->ActiveSketch()->CalculateStatus();
    
    theSession->Preferences()->Sketch()->SetSectionView(false);
    
    NXOpen::Session::UndoMarkId markId49;
    markId49 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);
    
    theSession->DeleteUndoMarksSetInTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    theSession->EndTaskEnvironment();
    
    NXOpen::Point3d scaleAboutPoint66(-266.61205157009971, 45.55825670632278, 0.0);
    NXOpen::Point3d viewCenter66(266.61205157009942, -45.558256706322567, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint66, viewCenter66);
    
    NXOpen::Point3d scaleAboutPoint67(-347.70254017941704, 70.58321461542954, 0.0);
    NXOpen::Point3d viewCenter67(347.7025401794167, -70.58321461542937, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint67, viewCenter67);
    
    NXOpen::Point3d scaleAboutPoint68(-280.08702890577257, 57.108237279756729, 0.0);
    NXOpen::Point3d viewCenter68(280.08702890577229, -57.108237279756516, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint68, viewCenter68);
    
    NXOpen::Point3d scaleAboutPoint69(-358.93168795914414, 79.406116442358211, 0.0);
    NXOpen::Point3d viewCenter69(358.93168795914397, -79.406116442358027, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint69, viewCenter69);
    
    NXOpen::Point3d scaleAboutPoint70(-293.56200624144549, 74.433208139907563, 0.0);
    NXOpen::Point3d viewCenter70(293.5620062414452, -74.43320813990735, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint70, viewCenter70);
    
    NXOpen::Point3d scaleAboutPoint71(-248.70958168127709, 80.593197779072298, 0.0);
    NXOpen::Point3d viewCenter71(248.70958168127686, -80.593197779072071, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint71, viewCenter71);
    
    NXOpen::Point3d scaleAboutPoint72(-204.71698900824211, 73.919875669977145, 0.0);
    NXOpen::Point3d viewCenter72(204.71698900824188, -73.919875669976918, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint72, viewCenter72);
    
    NXOpen::Point3d scaleAboutPoint73(-166.07332067188179, 62.749761124291744, 0.0);
    NXOpen::Point3d viewCenter73(166.07332067188173, -62.749761124291531, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint73, viewCenter73);
    
    NXOpen::Point3d scaleAboutPoint74(-133.38430898671427, 50.725461348642149, 0.0);
    NXOpen::Point3d viewCenter74(133.38430898671413, -50.725461348641915, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint74, viewCenter74);
    
    NXOpen::Point3d scaleAboutPoint75(-106.91770816905488, 41.841934957014686, 0.0);
    NXOpen::Point3d viewCenter75(106.91770816905478, -41.841934957014452, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint75, viewCenter75);
    
    NXOpen::Point3d scaleAboutPoint76(-134.43561388513163, 54.142202268498878, 0.0);
    NXOpen::Point3d viewCenter76(134.43561388513163, -54.142202268498643, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint76, viewCenter76);
    
    NXOpen::Point3d scaleAboutPoint77(-108.17927404715577, 46.888198469418455, 0.0);
    NXOpen::Point3d viewCenter77(108.17927404715577, -46.888198469418221, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint77, viewCenter77);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->拉伸(X)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId50;
    markId50 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder1;
    extrudeBuilder1 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section3;
    section3 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    extrudeBuilder1->SetSection(section3);
    
    extrudeBuilder1->AllowSelfIntersectingSection(true);
    
    NXOpen::Unit *unit2;
    unit2 = expression5->Units();
    
    NXOpen::Expression *expression10;
    expression10 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    extrudeBuilder1->SetDistanceTolerance(0.001);
    
    extrudeBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies2(1);
    targetBodies2[0] = nullNXOpen_Body;
    extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies2);
    
    extrudeBuilder1->Limits()->StartExtend()->Value()->SetFormula("0");
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetFormula("25");
    
    extrudeBuilder1->Offset()->StartOffset()->SetFormula("0");
    
    extrudeBuilder1->Offset()->EndOffset()->SetFormula("5");
    
    extrudeBuilder1->Limits()->StartExtend()->Value()->SetFormula("10");
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetFormula("10");
    
    extrudeBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies3(1);
    targetBodies3[0] = nullNXOpen_Body;
    extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies3);
    
    extrudeBuilder1->Draft()->FrontDraftAngle()->SetFormula("2");
    
    extrudeBuilder1->Draft()->BackDraftAngle()->SetFormula("2");
    
    extrudeBuilder1->Offset()->StartOffset()->SetFormula("0");
    
    extrudeBuilder1->Offset()->EndOffset()->SetFormula("5");
    
    extrudeBuilder1->Limits()->StartExtend()->Value()->SetFormula("0");
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetFormula("10");
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder2;
    smartVolumeProfileBuilder2 = extrudeBuilder1->SmartVolumeProfile();
    
    smartVolumeProfileBuilder2->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder2->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId50, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section3->SetDistanceTolerance(0.001);
    
    section3->SetChainingTolerance(0.00095);
    
    section3->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId51;
    markId51 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions8;
    selectionIntentRuleOptions8 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions8->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::ICurve *> curves2(4);
    curves2[0] = line9;
    curves2[1] = line10;
    curves2[2] = line11;
    curves2[3] = line12;
    NXOpen::Point3d seedPoint2(-227.32135000000002, 9.1621570000001178, 0.0);
    NXOpen::RegionBoundaryRule *regionBoundaryRule2;
    regionBoundaryRule2 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(sketch2, curves2, seedPoint2, 0.001, selectionIntentRuleOptions8);
    
    delete selectionIntentRuleOptions8;
    section3->AllowSelfIntersection(true);
    
    section3->AllowDegenerateCurves(false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules5(1);
    rules5[0] = regionBoundaryRule2;
    NXOpen::Point3d helpPoint2(0.0, 0.0, 0.0);
    section3->AddToSection(rules5, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint2, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId51, NULL);
    
    NXOpen::Session::UndoMarkId markId52;
    markId52 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId53;
    markId53 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    theSession->DeleteUndoMark(markId53, NULL);
    
    NXOpen::Direction *direction6;
    direction6 = workPart->Directions()->CreateDirection(sketch2, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    extrudeBuilder1->SetDirection(direction6);
    
    theSession->DeleteUndoMark(markId52, NULL);
    
    NXOpen::Matrix3x3 rotMatrix33;
    rotMatrix33.Xx = 0.88033972361795554;
    rotMatrix33.Xy = 0.047593567724686175;
    rotMatrix33.Xz = 0.47195002206960546;
    rotMatrix33.Yx = 0.32461489671498617;
    rotMatrix33.Yy = 0.66503067676412442;
    rotMatrix33.Yz = -0.67257666313467335;
    rotMatrix33.Zx = -0.34587156554273862;
    rotMatrix33.Zy = 0.74529796140462556;
    rotMatrix33.Zz = 0.57000334110874606;
    NXOpen::Point3d translation33(137.76482781166217, 166.84684002533797, -90.973682308853768);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix33, translation33, 1.5729459986561434);
    
    NXOpen::Point3d scaleAboutPoint78(-60.639266540718609, 11.606406078528774, 0.0);
    NXOpen::Point3d viewCenter78(60.639266540718651, -11.606406078528551, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint78, viewCenter78);
    
    NXOpen::Point3d scaleAboutPoint79(-75.378561216531281, 14.508007598160965, 0.0);
    NXOpen::Point3d viewCenter79(75.378561216531324, -14.508007598160686, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint79, viewCenter79);
    
    NXOpen::Matrix3x3 rotMatrix34;
    rotMatrix34.Xx = 0.88688608360529098;
    rotMatrix34.Xy = 0.012964366234808693;
    rotMatrix34.Xz = 0.46180623633229828;
    rotMatrix34.Yx = 0.43691014592107713;
    rotMatrix34.Yy = 0.30132594712051447;
    rotMatrix34.Yz = -0.84753300701692635;
    rotMatrix34.Zx = -0.15014192984804892;
    rotMatrix34.Zy = 0.95343305942266299;
    rotMatrix34.Zz = 0.26157752598694578;
    NXOpen::Point3d translation34(106.91572967646739, 223.02581207769725, -20.798829341021417);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix34, translation34, 1.0066854391399318);
    
    NXOpen::Point3d scaleAboutPoint80(-137.58952858038398, 77.533736258287192, 0.0);
    NXOpen::Point3d viewCenter80(137.58952858038398, -77.533736258286893, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint80, viewCenter80);
    
    NXOpen::Point3d scaleAboutPoint81(-173.30104184850171, 96.917170322858908, 0.0);
    NXOpen::Point3d viewCenter81(173.3010418485018, -96.917170322858695, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint81, viewCenter81);
    
    NXOpen::Point3d scaleAboutPoint82(-159.40410522254604, 80.950477178143871, 0.0);
    NXOpen::Point3d viewCenter82(159.40410522254609, -80.950477178143643, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint82, viewCenter82);
    
    extrudeBuilder1->Limits()->StartExtend()->Value()->SetFormula("3");
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetFormula("3");
    
    NXOpen::Session::UndoMarkId markId54;
    markId54 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId54, NULL);
    
    NXOpen::Session::UndoMarkId markId55;
    markId55 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    extrudeBuilder1->SetParentFeatureInternal(false);
    
    NXOpen::Features::Feature *feature4;
    feature4 = extrudeBuilder1->CommitFeature();
    
    theSession->DeleteUndoMark(markId55, NULL);
    
    theSession->SetUndoMarkName(markId50, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression11(extrudeBuilder1->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression12(extrudeBuilder1->Limits()->EndExtend()->Value());
    extrudeBuilder1->Destroy();
    
    workPart->Expressions()->Delete(expression10);
    
    NXOpen::Point3d scaleAboutPoint83(-61.921858516787829, 59.503857250427849, 0.0);
    NXOpen::Point3d viewCenter83(61.92185851678795, -59.503857250427622, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint83, viewCenter83);
    
    NXOpen::Point3d scaleAboutPoint84(-49.201069245936665, 50.630843907784538, 0.0);
    NXOpen::Point3d viewCenter84(49.201069245936758, -50.630843907784374, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint84, viewCenter84);
    
    NXOpen::Point3d scaleAboutPoint85(-37.746051072780119, 43.061448639178877, 0.0);
    NXOpen::Point3d viewCenter85(37.74605107278024, -43.061448639178714, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint85, viewCenter85);
    
    NXOpen::Point3d origin22(-207.79791242734927, -23.793673340265762, 46.966284554241113);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin22);
    
    NXOpen::Point3d origin23(-207.79791242734927, -23.793673340265762, 46.966284554241113);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin23);
    
    NXOpen::Matrix3x3 rotMatrix35;
    rotMatrix35.Xx = 0.85230208576062982;
    rotMatrix35.Xy = 0.19153151545108396;
    rotMatrix35.Xz = 0.48672048775153437;
    rotMatrix35.Yx = 0.39670036863495428;
    rotMatrix35.Yy = 0.36977161400549541;
    rotMatrix35.Yz = -0.84017722594739652;
    rotMatrix35.Zx = -0.34089583765861953;
    rotMatrix35.Zy = 0.90916699899676434;
    rotMatrix35.Zz = 0.23917649508730179;
    NXOpen::Point3d translation35(150.45307390739501, 127.33124420758682, -59.546759517337009);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix35, translation35, 2.4577281229002241);
    
    NXOpen::Session::UndoMarkId markId56;
    markId56 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Redefine Feature");
    
    NXOpen::Features::Extrude *extrude1(dynamic_cast<NXOpen::Features::Extrude *>(feature4));
    NXOpen::Features::EditWithRollbackManager *editWithRollbackManager1;
    editWithRollbackManager1 = workPart->Features()->StartEditWithRollbackManager(extrude1, markId56);
    
    NXOpen::Session::UndoMarkId markId57;
    markId57 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder2;
    extrudeBuilder2 = workPart->Features()->CreateExtrudeBuilder(extrude1);
    
    section3->PrepareMappingData();
    
    std::vector<NXOpen::NXObject *> refs1;
    section3->EvaluateAndAskOutputEntities(refs1);
    
    extrudeBuilder2->AllowSelfIntersectingSection(true);
    
    NXOpen::Expression *expression13;
    expression13 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    theSession->SetUndoMarkName(markId57, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section3->SetDistanceTolerance(0.001);
    
    section3->SetChainingTolerance(0.00095);
    
    // ----------------------------------------------
    //   Dialog Begin Extrude
    // ----------------------------------------------
    extrudeBuilder2->Limits()->StartExtend()->Value()->SetFormula("-3");
    
    NXOpen::Session::UndoMarkId markId58;
    markId58 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId58, NULL);
    
    NXOpen::Session::UndoMarkId markId59;
    markId59 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Features::Feature *feature5;
    feature5 = extrudeBuilder2->CommitFeature();
    
    theSession->DeleteUndoMark(markId59, NULL);
    
    theSession->SetUndoMarkName(markId57, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    section3->CleanMappingData();
    
    NXOpen::Expression *expression14(extrudeBuilder2->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression15(extrudeBuilder2->Limits()->EndExtend()->Value());
    extrudeBuilder2->Destroy();
    
    workPart->Expressions()->Delete(expression13);
    
    theSession->DeleteUndoMark(markId57, NULL);
    
    editWithRollbackManager1->UpdateFeature(false);
    
    editWithRollbackManager1->Stop();
    
    editWithRollbackManager1->Destroy();
    
    NXOpen::Point3d scaleAboutPoint86(-14.156451240130018, 15.609775131702396, 0.0);
    NXOpen::Point3d viewCenter86(14.156451240130066, -15.609775131702229, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint86, viewCenter86);
    
    NXOpen::Point3d scaleAboutPoint87(-17.96469810415741, 19.781352968622816, 0.0);
    NXOpen::Point3d viewCenter87(17.964698104157439, -19.781352968622681, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint87, viewCenter87);
    
    NXOpen::Point3d scaleAboutPoint88(-22.792290197690338, 24.726691210778498, 0.0);
    NXOpen::Point3d viewCenter88(22.792290197690338, -24.726691210778387, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint88, viewCenter88);
    
    NXOpen::Matrix3x3 rotMatrix36;
    rotMatrix36.Xx = 0.41096528864687248;
    rotMatrix36.Xy = 0.13439225338833485;
    rotMatrix36.Xz = 0.90169077502024031;
    rotMatrix36.Yx = 0.67172259277859181;
    rotMatrix36.Yy = 0.62406372200667037;
    rotMatrix36.Yz = -0.39916566639177237;
    rotMatrix36.Zx = -0.61635727453985656;
    rotMatrix36.Zy = 0.76972929858774852;
    rotMatrix36.Zz = 0.1661942147531438;
    NXOpen::Point3d translation36(12.603874796244867, 159.7081072137552, -108.54520821477236);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix36, translation36, 1.2583567989249149);
    
    NXOpen::Point3d scaleAboutPoint89(74.537517297797223, 57.190986473909362, 0.0);
    NXOpen::Point3d viewCenter89(-74.537517297797223, -57.190986473909241, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint89, viewCenter89);
    
    NXOpen::Point3d scaleAboutPoint90(93.171896622246535, 71.751559316991077, 0.0);
    NXOpen::Point3d viewCenter90(-93.171896622246535, -71.751559316990964, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint90, viewCenter90);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->关联复制(A)->阵列特征(A)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId60;
    markId60 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::PatternFeatureBuilder *patternFeatureBuilder1;
    patternFeatureBuilder1 = workPart->Features()->CreatePatternFeatureBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section4;
    section4 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    NXOpen::Expression *expression16;
    expression16 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression17;
    expression17 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point3d origin24(0.0, 0.0, 0.0);
    NXOpen::Vector3d normal3(0.0, 0.0, 1.0);
    NXOpen::Plane *plane3;
    plane3 = workPart->Planes()->CreatePlane(origin24, normal3, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder1->PatternService()->MirrorDefinition()->SetNewPlane(plane3);
    
    NXOpen::Expression *expression18;
    expression18 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression19;
    expression19 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression20;
    expression20 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Section *section5;
    section5 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    patternFeatureBuilder1->SetPatternMethod(NXOpen::Features::PatternFeatureBuilder::PatternMethodOptionsSimple);
    
    patternFeatureBuilder1->PatternService()->SetPatternType(NXOpen::GeometricUtilities::PatternDefinition::PatternEnumCircular);
    
    patternFeatureBuilder1->PatternService()->PatternFill()->FillMargin()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetCircularOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetAlongOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumNormalToPath);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetPolygonOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetSpiralOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetMirrorOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->SetHelixOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder1->PatternService()->PatternOrientation()->AlongPathRotationAngle()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->RectangularDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->NCopies()->SetFormula("12");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle()->SetFormula("30");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle()->SetFormula("360");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetXPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetYDirectionOption(NXOpen::GeometricUtilities::AlongPathPattern::YDirectionOptionsSection);
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetYPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->NumberOfTurns()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->TotalAngle()->SetFormula("360");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->RadialPitch()->SetFormula("50");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->SpiralDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->NCopies()->SetFormula("4");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->PitchDistance()->SetFormula("25");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->SpanAngle()->SetFormula("360");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->NumberOfSides()->SetFormula("6");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder1->PatternService()->PolygonDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->CountOfInstances()->SetFormula("6");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->NumberOfTurns()->SetFormula("2");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->AnglePitch()->SetFormula("30");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->DistancePitch()->SetFormula("10");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->HelixPitch()->SetFormula("50");
    
    patternFeatureBuilder1->PatternService()->HelixDefinition()->HelixSpan()->SetFormula("100");
    
    theSession->SetUndoMarkName(markId60, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d origin25(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector3(0.0, 0.0, 1.0);
    NXOpen::Direction *direction7;
    direction7 = workPart->Directions()->CreateDirection(origin25, vector3, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Axis *axis2;
    axis2 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction7, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->SetRotationAxis(axis2);
    
    NXOpen::Point3d origin26(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector4(1.0, 0.0, 0.0);
    NXOpen::Direction *direction8;
    direction8 = workPart->Directions()->CreateDirection(origin26, vector4, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->SetHorizontalRefVector(direction8);
    
    NXOpen::Expression *expression21;
    expression21 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Matrix3x3 rotMatrix37;
    rotMatrix37.Xx = 0.76702785732868484;
    rotMatrix37.Xy = 0.072899564859062668;
    rotMatrix37.Xz = 0.63745895516898121;
    rotMatrix37.Yx = 0.32286026984770427;
    rotMatrix37.Yy = 0.8147203642588402;
    rotMatrix37.Yz = -0.48165545176589847;
    rotMatrix37.Zx = -0.55446326500106058;
    rotMatrix37.Zy = 0.57525331942136804;
    rotMatrix37.Zz = 0.60137684213732767;
    NXOpen::Point3d translation37(55.758937938448511, 188.1372585743502, -104.66246956083791);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix37, translation37, 0.80534835131194571);
    
    NXOpen::Point3d origin27(-74.319278760667927, -35.527496065511976, 139.50066542458018);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin27);
    
    NXOpen::Point3d origin28(-74.319278760667927, -35.527496065511976, 139.50066542458018);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin28);
    
    NXOpen::Point3d scaleAboutPoint91(-49.115650722940288, -62.421228343536043, 0.0);
    NXOpen::Point3d viewCenter91(49.115650722940288, 62.421228343536157, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint91, viewCenter91);
    
    NXOpen::Point3d scaleAboutPoint92(-120.94112991560125, -41.88792954632023, 0.0);
    NXOpen::Point3d viewCenter92(120.94112991560125, 41.887929546320322, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint92, viewCenter92);
    
    NXOpen::Point3d scaleAboutPoint93(-97.409969493991909, -33.510343637056152, 0.0);
    NXOpen::Point3d viewCenter93(97.409969493991909, 33.510343637056224, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint93, viewCenter93);
    
    NXOpen::Point3d scaleAboutPoint94(-82.396021413467707, -24.18001266360131, 0.0);
    NXOpen::Point3d viewCenter94(82.396021413467707, 24.180012663601399, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint94, viewCenter94);
    
    NXOpen::Point3d origin29(-121.26147602727575, -5.2876101170045544, 67.29416246174425);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin29);
    
    NXOpen::Point3d origin30(-121.26147602727575, -5.2876101170045544, 67.29416246174425);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin30);
    
    NXOpen::Matrix3x3 rotMatrix38;
    rotMatrix38.Xx = 0.81816996841886958;
    rotMatrix38.Xy = -0.011572696800586393;
    rotMatrix38.Xz = 0.57485996161346198;
    rotMatrix38.Yx = 0.47839624259158359;
    rotMatrix38.Yy = 0.56832334548585606;
    rotMatrix38.Yz = -0.66943678570125098;
    rotMatrix38.Zx = -0.31895914762195315;
    rotMatrix38.Zy = 0.82272391946784151;
    rotMatrix38.Zz = 0.47052142829392213;
    NXOpen::Point3d translation38(52.185627998575484, 80.790385813623104, -109.603252832024);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix38, translation38, 1.2583567989249154);
    
    NXOpen::Point3d scaleAboutPoint95(-24.495404133126581, 9.8822660451241262, 0.0);
    NXOpen::Point3d viewCenter95(24.495404133126605, -9.8822660451239859, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint95, viewCenter95);
    
    NXOpen::Matrix3x3 rotMatrix39;
    rotMatrix39.Xx = 0.84070151538437943;
    rotMatrix39.Xy = -0.065817805086879733;
    rotMatrix39.Xz = 0.53748393330773825;
    rotMatrix39.Yx = 0.41733142200927775;
    rotMatrix39.Yy = 0.71123129699816157;
    rotMatrix39.Yz = -0.56567174790158148;
    rotMatrix39.Zx = -0.34504412215559438;
    rotMatrix39.Zy = 0.69987002986544622;
    rotMatrix39.Zz = 0.62540106736558965;
    NXOpen::Point3d translation39(47.144787729054329, 80.407776165720492, -107.15045867209685);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix39, translation39, 1.0066854391399322);
    
    std::vector<NXOpen::Features::Feature *> objects2(1);
    NXOpen::Features::Extrude *extrude2(dynamic_cast<NXOpen::Features::Extrude *>(feature5));
    objects2[0] = extrude2;
    bool added1;
    added1 = patternFeatureBuilder1->FeatureList()->Add(objects2);
    
    // 参考点 (-227.001876, 14.081536, 0.000000) 从选定特征自动判断。
    NXOpen::Point3d coordinates1(-227.00187636851814, 14.081536027841659, 1.5726977289757828e-16);
    NXOpen::Point *point9;
    point9 = workPart->Points()->CreatePoint(coordinates1);
    
    patternFeatureBuilder1->ReferencePointService()->SetPoint(point9);
    
    NXOpen::Point3d origin31(-26.869464530738576, 43.516949981940385, 107.80777696909601);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin31);
    
    NXOpen::Point3d origin32(-26.869464530738576, 43.516949981940385, 107.80777696909601);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin32);
    
    NXOpen::Matrix3x3 rotMatrix40;
    rotMatrix40.Xx = 0.84070151538437943;
    rotMatrix40.Xy = -0.065817805086879733;
    rotMatrix40.Xz = 0.53748393330773825;
    rotMatrix40.Yx = 0.41733142200927775;
    rotMatrix40.Yy = 0.71123129699816157;
    rotMatrix40.Yz = -0.56567174790158148;
    rotMatrix40.Zx = -0.34504412215559438;
    rotMatrix40.Zy = 0.69987002986544622;
    rotMatrix40.Zz = 0.62540106736558965;
    NXOpen::Point3d translation40(-32.491558326067228, 41.246668699673528, -107.15045867209685);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix40, translation40, 1.0066854391399322);
    
    NXOpen::Expression *expression22;
    expression22 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point *point10;
    point10 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Point *point11;
    point11 = axis2->Point();
    
    axis2->SetPoint(point10);
    
    int nErrs5;
    nErrs5 = theSession->UpdateManager()->AddToDeleteList(direction7);
    
    NXOpen::Point3d origin33(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector5(0.0, 1.0, 0.0);
    NXOpen::Direction *direction9;
    direction9 = workPart->Directions()->CreateDirection(origin33, vector5, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Direction *direction10;
    direction10 = axis2->Direction();
    
    axis2->SetDirection(direction9);
    
    int nErrs6;
    nErrs6 = theSession->UpdateManager()->AddToDeleteList(direction10);
    
    NXOpen::Point3d scaleAboutPoint96(-111.8325585691563, 38.372628792237023, 0.0);
    NXOpen::Point3d viewCenter96(111.8325585691563, -38.372628792236846, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint96, viewCenter96);
    
    NXOpen::Point3d scaleAboutPoint97(-136.50537040389085, 44.351925401986293, 0.0);
    NXOpen::Point3d viewCenter97(136.50537040389085, -44.351925401986108, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint97, viewCenter97);
    
    NXOpen::Matrix3x3 rotMatrix41;
    rotMatrix41.Xx = 0.81557648732867261;
    rotMatrix41.Xy = -0.031508754580112472;
    rotMatrix41.Xz = 0.57779078540717377;
    rotMatrix41.Yx = 0.521611331386023;
    rotMatrix41.Yy = 0.47231679940765986;
    rotMatrix41.Yz = -0.71051985191619338;
    rotMatrix41.Zx = -0.25051269885242866;
    rotMatrix41.Zy = 0.88086550584190637;
    rotMatrix41.Zz = 0.40164579959406921;
    NXOpen::Point3d translation41(-95.261025301908475, 66.697766801878586, -110.76405729632501);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix41, translation41, 0.64427868104955666);
    
    NXOpen::Session::UndoMarkId markId61;
    markId61 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId61, NULL);
    
    NXOpen::Session::UndoMarkId markId62;
    markId62 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    patternFeatureBuilder1->SetParentFeatureInternal(false);
    
    NXOpen::NXObject *nXObject22;
    nXObject22 = patternFeatureBuilder1->Commit();
    
    std::vector<NXOpen::NXObject *> objects3;
    objects3 = patternFeatureBuilder1->GetCommittedObjects();
    
    theSession->DeleteUndoMark(markId62, NULL);
    
    theSession->SetUndoMarkName(markId60, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression23(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->NCopies());
    NXOpen::Expression *expression24(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance());
    NXOpen::Expression *expression25(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance());
    NXOpen::Expression *expression26(patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle());
    NXOpen::Expression *expression27(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->NCopies());
    NXOpen::Expression *expression28(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle());
    NXOpen::Expression *expression29(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance());
    NXOpen::Expression *expression30(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle());
    patternFeatureBuilder1->Destroy();
    
    section4->Destroy();
    
    section5->Destroy();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression19);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression22);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression16);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression17);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression18);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression20);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression21);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    NXOpen::Matrix3x3 rotMatrix42;
    rotMatrix42.Xx = 0.90775175357414595;
    rotMatrix42.Xy = -0.24014862884774701;
    rotMatrix42.Xz = 0.34397004222113636;
    rotMatrix42.Yx = 0.39159600705420577;
    rotMatrix42.Yy = 0.77915582893423385;
    rotMatrix42.Yz = -0.48945761971493496;
    rotMatrix42.Zx = -0.15046368712172939;
    rotMatrix42.Zy = 0.57900330767652308;
    rotMatrix42.Zz = 0.80132131417888786;
    NXOpen::Point3d translation42(-91.09550260834277, 60.571684981463648, -104.73733857248911);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix42, translation42, 0.64427868104955666);
    
    NXOpen::Point3d scaleAboutPoint98(-8.4186525068584839, 120.32513095168483, 0.0);
    NXOpen::Point3d viewCenter98(8.4186525068585745, -120.3251309516846, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint98, viewCenter98);
    
    NXOpen::Point3d scaleAboutPoint99(-69.043217205638285, 15.913306567842335, 0.0);
    NXOpen::Point3d viewCenter99(69.043217205638285, -15.91330656784222, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint99, viewCenter99);
    
    NXOpen::Point3d scaleAboutPoint100(-55.234573764510714, 13.96264318210682, 0.0);
    NXOpen::Point3d viewCenter100(55.234573764510529, -13.962643182106683, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint100, viewCenter100);
    
    NXOpen::Matrix3x3 rotMatrix43;
    rotMatrix43.Xx = 0.94394528174979964;
    rotMatrix43.Xy = 0.033217382734589553;
    rotMatrix43.Xz = 0.32842641572589182;
    rotMatrix43.Yx = 0.32269038757349894;
    rotMatrix43.Yy = 0.11679074945027562;
    rotMatrix43.Yz = -0.93927143819585435;
    rotMatrix43.Zx = -0.069557306086114282;
    rotMatrix43.Zy = 0.99260088974728866;
    rotMatrix43.Zz = 0.099525146786808072;
    NXOpen::Point3d translation43(-73.802396129584025, 97.901984214595402, -112.99486901899266);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix43, translation43, 0.80534835131194582);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图(S)
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId63;
    markId63 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Enter Sketch");
    
    NXOpen::Session::UndoMarkId markId64;
    markId64 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Update Model from Sketch");
    
    theSession->BeginTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId65;
    markId65 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder3;
    sketchInPlaceBuilder3 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    NXOpen::Point3d origin34(0.0, 0.0, 0.0);
    NXOpen::Vector3d normal4(0.0, 0.0, 1.0);
    NXOpen::Plane *plane4;
    plane4 = workPart->Planes()->CreatePlane(origin34, normal4, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    sketchInPlaceBuilder3->SetPlaneReference(plane4);
    
    NXOpen::Expression *expression31;
    expression31 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression32;
    expression32 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder3;
    sketchAlongPathBuilder3 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);
    
    NXOpen::SimpleSketchInPlaceBuilder *simpleSketchInPlaceBuilder3;
    simpleSketchInPlaceBuilder3 = workPart->Sketches()->CreateSimpleSketchInPlaceBuilder();
    
    sketchAlongPathBuilder3->PlaneLocation()->Expression()->SetFormula("0");
    
    theSession->SetUndoMarkName(markId65, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    simpleSketchInPlaceBuilder3->SetUseWorkPartOrigin(false);
    
    NXOpen::Direction *direction11;
    direction11 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::DatumPlane *datumPlane2(dynamic_cast<NXOpen::DatumPlane *>(workPart->Datums()->FindObject("DATUM_CSYS(0) XY plane")));
    NXOpen::Xform *xform3;
    xform3 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane2, direction11, point1, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, true);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem3;
    cartesianCoordinateSystem3 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform3, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    simpleSketchInPlaceBuilder3->SetCoordinateSystem(cartesianCoordinateSystem3);
    
    simpleSketchInPlaceBuilder3->HorizontalReference()->SetValue(datumAxis1);
    
    NXOpen::Point *point12;
    point12 = simpleSketchInPlaceBuilder3->SketchOrigin();
    
    simpleSketchInPlaceBuilder3->SetSketchOrigin(point12);
    
    NXOpen::Point *point13;
    point13 = workPart->Points()->CreatePoint(point1, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Session::UndoMarkId markId66;
    markId66 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId66, NULL);
    
    NXOpen::Session::UndoMarkId markId67;
    markId67 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(false);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(false);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(false);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetDisplayShadedRegions(true);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    theSession->Preferences()->Sketch()->SetEditDimensionOnCreation(true);
    
    theSession->Preferences()->Sketch()->SetCreateDimensionForTypedValues(true);
    
    theSession->Preferences()->Sketch()->SetAddRemoteFindingAfterSnap(true);
    
    NXOpen::NXObject *nXObject23;
    nXObject23 = simpleSketchInPlaceBuilder3->Commit();
    
    NXOpen::Sketch *sketch3(dynamic_cast<NXOpen::Sketch *>(nXObject23));
    NXOpen::Features::Feature *feature6;
    feature6 = sketch3->Feature();
    
    NXOpen::Session::UndoMarkId markId68;
    markId68 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "update");
    
    int nErrs7;
    nErrs7 = theSession->UpdateManager()->DoUpdate(markId68);
    
    sketch3->Activate(NXOpen::Sketch::ViewReorientTrue);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder11;
    sketchFindMovableObjectsBuilder11 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject24;
    nXObject24 = sketchFindMovableObjectsBuilder11->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder11->Destroy();
    
    theSession->DeleteUndoMark(markId67, NULL);
    
    theSession->SetUndoMarkName(markId65, NXOpen::NXString("\345\210\233\345\273\272\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    sketchInPlaceBuilder3->Destroy();
    
    sketchAlongPathBuilder3->Destroy();
    
    simpleSketchInPlaceBuilder3->Destroy();
    
    workPart->Points()->DeletePoint(point13);
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression32);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression31);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    plane4->DestroyPlane();
    
    theSession->DeleteUndoMarksUpToMark(markId64, NULL, true);
    
    NXOpen::Session::UndoMarkId markId69;
    markId69 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Open Sketch");
    
    theSession->ActiveSketch()->SetName("SKETCH_002");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->曲线(C)->圆角(F)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId70;
    markId70 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->曲线(C)->圆弧(A)...
    // ----------------------------------------------
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder12;
    sketchFindMovableObjectsBuilder12 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject25;
    nXObject25 = sketchFindMovableObjectsBuilder12->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder12->Destroy();
    
    NXOpen::Session::UndoMarkId markId71;
    markId71 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId72;
    markId72 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId72, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix1;
    nXMatrix1 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center1(-1.1498647326443461, 0.0, 0.0);
    NXOpen::Arc *arc1;
    arc1 = workPart->Curves()->CreateArc(center1, nXMatrix1, 234.7963818131536, ( 161.81857067084994 * DEGRA ), ( 176.07639308523341 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc1, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Arc
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId73;
    markId73 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->SetUndoMarkVisibility(markId73, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix2;
    nXMatrix2 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center2(0.0, 0.0, 0.0);
    NXOpen::Arc *arc2;
    arc2 = workPart->Curves()->CreateArc(center2, nXMatrix2, 224.98745423495012, ( 160.99621313243938 * DEGRA ), ( 175.88959501393751 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc2, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    theSession->ActiveSketch()->Update();
    
    // ----------------------------------------------
    //   Dialog Begin Arc
    // ----------------------------------------------
    // ----------------------------------------------
    //   Menu: 任务(K)->完成草图(K)
    // ----------------------------------------------
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder13;
    sketchFindMovableObjectsBuilder13 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject26;
    nXObject26 = sketchFindMovableObjectsBuilder13->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder13->Destroy();
    
    NXOpen::SketchWorkRegionBuilder *sketchWorkRegionBuilder4;
    sketchWorkRegionBuilder4 = workPart->Sketches()->CreateWorkRegionBuilder();
    
    sketchWorkRegionBuilder4->SetScope(NXOpen::SketchWorkRegionBuilder::ScopeTypeEntireSketch);
    
    NXOpen::NXObject *nXObject27;
    nXObject27 = sketchWorkRegionBuilder4->Commit();
    
    sketchWorkRegionBuilder4->Destroy();
    
    theSession->ActiveSketch()->CalculateStatus();
    
    theSession->Preferences()->Sketch()->SetSectionView(false);
    
    NXOpen::Session::UndoMarkId markId74;
    markId74 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);
    
    theSession->DeleteUndoMarksSetInTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    theSession->EndTaskEnvironment();
    
    NXOpen::Matrix3x3 rotMatrix44;
    rotMatrix44.Xx = 0.95313747240101188;
    rotMatrix44.Xy = 0.077992416950453572;
    rotMatrix44.Xz = 0.29231171992111166;
    rotMatrix44.Yx = -0.28044926551688248;
    rotMatrix44.Yy = 0.59018186481316881;
    rotMatrix44.Yz = 0.75698981229385931;
    rotMatrix44.Zx = -0.11347761090211807;
    rotMatrix44.Zy = -0.80349396347693913;
    rotMatrix44.Zz = 0.58439736693457989;
    NXOpen::Point3d translation44(-74.696335611603246, 88.45066796501311, -77.135597644505239);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix44, translation44, 0.80534835131194615);
    
    NXOpen::Point3d origin35(56.568372667756215, -50.636117474249396, 73.355954575670651);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin35);
    
    NXOpen::Point3d origin36(56.568372667756215, -50.636117474249396, 73.355954575670651);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin36);
    
    NXOpen::Matrix3x3 rotMatrix45;
    rotMatrix45.Xx = 0.95067516090111481;
    rotMatrix45.Xy = 0.059746923010140687;
    rotMatrix45.Xz = 0.30437976876997169;
    rotMatrix45.Yx = -0.28101558313665626;
    rotMatrix45.Yy = 0.58134556903176782;
    rotMatrix45.Yz = 0.76358861398104683;
    rotMatrix45.Zx = -0.13132775974639141;
    rotMatrix45.Zy = -0.81146018667458664;
    rotMatrix45.Zz = 0.56946060878874072;
    NXOpen::Point3d translation45(-71.046734103585663, -9.6042156665153993, -76.976550944404025);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix45, translation45, 0.80534835131194615);
    
    NXOpen::Session::UndoMarkId markId75;
    markId75 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\347\274\226\350\276\221\350\215\211\345\233\276", NXOpen::NXString::UTF8));
    
    theSession->BeginTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId76;
    markId76 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Enter Sketch");
    
    sketch3->Activate(NXOpen::Sketch::ViewReorientTrue);
    
    theSession->Preferences()->Sketch()->SetFindMovableObjects(true);
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder14;
    sketchFindMovableObjectsBuilder14 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject28;
    nXObject28 = sketchFindMovableObjectsBuilder14->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder14->Destroy();
    
    theSession->DeleteUndoMarksUpToMark(markId76, NULL, true);
    
    NXOpen::Session::UndoMarkId markId77;
    markId77 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Open Sketch");
    
    NXOpen::Point3d scaleAboutPoint101(-20.799124668962989, 13.127964619953815, 0.0);
    NXOpen::Point3d viewCenter101(20.799124668962968, -13.12796461995381, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint101, viewCenter101);
    
    NXOpen::Point3d scaleAboutPoint102(-4.2507716766416808, 13.246590806278716, 0.0);
    NXOpen::Point3d viewCenter102(4.2507716766416808, -13.246590806278709, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint102, viewCenter102);
    
    NXOpen::Point3d scaleAboutPoint103(-5.3134645958021363, 16.558238507848383, 0.0);
    NXOpen::Point3d viewCenter103(5.3134645958020634, -16.558238507848383, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint103, viewCenter103);
    
    NXOpen::Point3d scaleAboutPoint104(-7.0537272250473988, 20.697798134810476, 0.0);
    NXOpen::Point3d viewCenter104(7.0537272250472967, -20.697798134810476, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint104, viewCenter104);
    
    NXOpen::Point3d scaleAboutPoint105(-5.6429817800379203, 16.558238507848383, 0.0);
    NXOpen::Point3d viewCenter105(5.6429817800378466, -16.558238507848383, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint105, viewCenter105);
    
    NXOpen::Point3d scaleAboutPoint106(-4.5143854240303076, 13.246590806278716, 0.0);
    NXOpen::Point3d viewCenter106(4.5143854240303076, -13.246590806278709, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint106, viewCenter106);
    
    NXOpen::Point3d scaleAboutPoint107(-6.4667747406273612, 17.711548652673642, 0.0);
    NXOpen::Point3d viewCenter107(6.4667747406273612, -17.711548652673635, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint107, viewCenter107);
    
    NXOpen::Point3d scaleAboutPoint108(-9.0102355064473247, 24.610814697610461, 0.0);
    NXOpen::Point3d viewCenter108(9.0102355064473816, -24.610814697610461, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint108, viewCenter108);
    
    NXOpen::Point3d scaleAboutPoint109(-65.203212830656668, 41.354406621591473, 0.0);
    NXOpen::Point3d viewCenter109(65.203212830656724, -41.354406621591473, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint109, viewCenter109);
    
    NXOpen::Point3d scaleAboutPoint110(-81.504016038320785, 51.693008276989339, 0.0);
    NXOpen::Point3d viewCenter110(81.504016038320898, -51.693008276989339, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint110, viewCenter110);
    
    NXOpen::Point3d scaleAboutPoint111(-101.880020047901, 64.616260346236672, 0.0);
    NXOpen::Point3d viewCenter111(101.88002004790108, -64.616260346236643, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint111, viewCenter111);
    
    NXOpen::Point3d scaleAboutPoint112(-127.83271624772165, 80.770325432795829, 0.0);
    NXOpen::Point3d viewCenter112(127.83271624772175, -80.770325432795829, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint112, viewCenter112);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->曲线(C)->圆角(F)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId78;
    markId78 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId79;
    markId79 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "##40Fillet");
    
    NXOpen::Point3d helpPoint1_1(-235.25847167300563, 0.0, 17.958314759234884);
    NXOpen::Point3d helpPoint2_1(-224.33496244211463, 0.0, 17.122476141577682);
    NXOpen::Point3d pointonarc1(-211.75017683548509, 0.0, 16.16411713489358);
    std::vector<NXOpen::Arc *> fillets1;
    std::vector<NXOpen::SketchConstraint *> constraints1;
    fillets1 = theSession->ActiveSketch()->Fillet(arc1, arc2, helpPoint1_1, helpPoint2_1, pointonarc1, 5.4777204310191898, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionFalse, NXOpen::Sketch::AlternateSolutionOptionFalse, constraints1);
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder15;
    sketchFindMovableObjectsBuilder15 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject29;
    nXObject29 = sketchFindMovableObjectsBuilder15->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder15->Destroy();
    
    NXOpen::Session::UndoMarkId markId80;
    markId80 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "##40Fillet");
    
    NXOpen::Point3d helpPoint1_2(-224.83260308413762, 0.0, 71.381884789669172);
    NXOpen::Point3d helpPoint2_2(-214.44161381433099, 0.0, 68.07458283257489);
    NXOpen::Point3d pointonarc2(-209.94008488106488, 0.0, 66.645570530390955);
    std::vector<NXOpen::Arc *> fillets2;
    std::vector<NXOpen::SketchConstraint *> constraints2;
    fillets2 = theSession->ActiveSketch()->Fillet(arc1, arc2, helpPoint1_2, helpPoint2_2, pointonarc2, 5.4523153946950575, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionFalse, NXOpen::Sketch::AlternateSolutionOptionTrue, constraints2);
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder16;
    sketchFindMovableObjectsBuilder16 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject30;
    nXObject30 = sketchFindMovableObjectsBuilder16->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder16->Destroy();
    
    // ----------------------------------------------
    //   Menu: 任务(K)->完成草图(K)
    // ----------------------------------------------
    NXOpen::SketchFindMovableObjectsBuilder *sketchFindMovableObjectsBuilder17;
    sketchFindMovableObjectsBuilder17 = workPart->Sketches()->CreateFindMovableObjectsBuilder();
    
    NXOpen::NXObject *nXObject31;
    nXObject31 = sketchFindMovableObjectsBuilder17->Commit();
    
    theSession->ActiveSketch()->UpdateConstraintDisplay();
    
    sketchFindMovableObjectsBuilder17->Destroy();
    
    NXOpen::SketchWorkRegionBuilder *sketchWorkRegionBuilder5;
    sketchWorkRegionBuilder5 = workPart->Sketches()->CreateWorkRegionBuilder();
    
    sketchWorkRegionBuilder5->SetScope(NXOpen::SketchWorkRegionBuilder::ScopeTypeEntireSketch);
    
    NXOpen::NXObject *nXObject32;
    nXObject32 = sketchWorkRegionBuilder5->Commit();
    
    sketchWorkRegionBuilder5->Destroy();
    
    theSession->ActiveSketch()->CalculateStatus();
    
    theSession->Preferences()->Sketch()->SetSectionView(false);
    
    NXOpen::Session::UndoMarkId markId81;
    markId81 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);
    
    theSession->DeleteUndoMarksSetInTaskEnvironment();
    
    // ----------------------------------------------
    //   Menu: 应用模块(N)->文档(E)->PMI
    // ----------------------------------------------
    theSession->EndTaskEnvironment();
    
    NXOpen::Matrix3x3 rotMatrix46;
    rotMatrix46.Xx = 0.71015800714074151;
    rotMatrix46.Xy = -0.121262723407741;
    rotMatrix46.Xz = 0.6935206967392038;
    rotMatrix46.Yx = -0.50068285375180521;
    rotMatrix46.Yy = 0.6055435690703237;
    rotMatrix46.Yz = 0.6185738968922988;
    rotMatrix46.Zx = -0.4949669532936935;
    rotMatrix46.Zy = -0.78651912746564423;
    rotMatrix46.Zz = 0.36931744783836895;
    NXOpen::Point3d translation46(-67.432852564619694, -10.087331938768369, -77.474502491303227);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix46, translation46, 0.80534835131194615);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->旋转(V)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId82;
    markId82 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::RevolveBuilder *revolveBuilder2;
    revolveBuilder2 = workPart->Features()->CreateRevolveBuilder(nullNXOpen_Features_Feature);
    
    revolveBuilder2->Limits()->StartExtend()->Value()->SetFormula("0");
    
    revolveBuilder2->Limits()->EndExtend()->Value()->SetFormula("360");
    
    revolveBuilder2->Limits()->StartExtend()->Value()->SetFormula("0");
    
    revolveBuilder2->Limits()->EndExtend()->Value()->SetFormula("360");
    
    revolveBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies4(1);
    targetBodies4[0] = nullNXOpen_Body;
    revolveBuilder2->BooleanOperation()->SetTargetBodies(targetBodies4);
    
    revolveBuilder2->Offset()->StartOffset()->SetFormula("0");
    
    revolveBuilder2->Offset()->EndOffset()->SetFormula("5");
    
    revolveBuilder2->SetTolerance(0.001);
    
    NXOpen::Section *section6;
    section6 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    revolveBuilder2->SetSection(section6);
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder3;
    smartVolumeProfileBuilder3 = revolveBuilder2->SmartVolumeProfile();
    
    smartVolumeProfileBuilder3->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder3->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId82, NXOpen::NXString("\346\227\213\350\275\254 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d origin37(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector6(0.0, 1.0, 0.0);
    NXOpen::Direction *direction12;
    direction12 = workPart->Directions()->CreateDirection(origin37, vector6, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Axis *axis3;
    axis3 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction12, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    revolveBuilder2->SetAxis(axis3);
    
    section6->SetDistanceTolerance(0.001);
    
    section6->SetChainingTolerance(0.00095);
    
    std::vector<double> starthelperpoint2(3);
    const double starthelperpoint2_initial_values [] = {
        0.0, 0.0, 0.0
    };
    starthelperpoint2.assign(starthelperpoint2_initial_values, starthelperpoint2_initial_values + 3);
    revolveBuilder2->SetStartLimitHelperPoint(starthelperpoint2);
    
    std::vector<double> endhelperpoint2(3);
    const double endhelperpoint2_initial_values [] = {
        0.0, 0.0, 0.0
    };
    endhelperpoint2.assign(endhelperpoint2_initial_values, endhelperpoint2_initial_values + 3);
    revolveBuilder2->SetEndLimitHelperPoint(endhelperpoint2);
    
    section6->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    revolveBuilder2->Destroy();
    
    section6->Destroy();
    
    theSession->UndoToMark(markId82, NULL);
    
    theSession->DeleteUndoMark(markId82, NULL);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->拉伸(X)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId83;
    markId83 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder3;
    extrudeBuilder3 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section7;
    section7 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    extrudeBuilder3->SetSection(section7);
    
    extrudeBuilder3->AllowSelfIntersectingSection(true);
    
    NXOpen::Expression *expression33;
    expression33 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    extrudeBuilder3->SetDistanceTolerance(0.001);
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies5(1);
    targetBodies5[0] = nullNXOpen_Body;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies5);
    
    extrudeBuilder3->Limits()->StartExtend()->Value()->SetFormula("3");
    
    extrudeBuilder3->Limits()->EndExtend()->Value()->SetFormula("3");
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies6(1);
    targetBodies6[0] = nullNXOpen_Body;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies6);
    
    extrudeBuilder3->Draft()->FrontDraftAngle()->SetFormula("2");
    
    extrudeBuilder3->Draft()->BackDraftAngle()->SetFormula("2");
    
    extrudeBuilder3->Offset()->StartOffset()->SetFormula("0");
    
    extrudeBuilder3->Offset()->EndOffset()->SetFormula("5");
    
    extrudeBuilder3->Limits()->StartExtend()->Value()->SetFormula("0");
    
    extrudeBuilder3->Limits()->EndExtend()->Value()->SetFormula("3");
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder4;
    smartVolumeProfileBuilder4 = extrudeBuilder3->SmartVolumeProfile();
    
    smartVolumeProfileBuilder4->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder4->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId83, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section7->SetDistanceTolerance(0.001);
    
    section7->SetChainingTolerance(0.00095);
    
    section7->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId84;
    markId84 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId85;
    markId85 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions9;
    selectionIntentRuleOptions9 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions9->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Features::Feature *> features1(1);
    NXOpen::Features::SketchFeature *sketchFeature1(dynamic_cast<NXOpen::Features::SketchFeature *>(feature6));
    features1[0] = sketchFeature1;
    NXOpen::DisplayableObject *nullNXOpen_DisplayableObject(NULL);
    NXOpen::CurveFeatureRule *curveFeatureRule1;
    curveFeatureRule1 = workPart->ScRuleFactory()->CreateRuleCurveFeature(features1, nullNXOpen_DisplayableObject, selectionIntentRuleOptions9);
    
    delete selectionIntentRuleOptions9;
    section7->AllowSelfIntersection(true);
    
    section7->AllowDegenerateCurves(false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules6(1);
    rules6[0] = curveFeatureRule1;
    NXOpen::Point3d helpPoint3(-230.8210911558823, 0.0, 48.71224604162294);
    section7->AddToSection(rules6, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint3, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId85, NULL);
    
    NXOpen::Direction *direction13;
    direction13 = workPart->Directions()->CreateDirection(sketch3, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    extrudeBuilder3->SetDirection(direction13);
    
    theSession->DeleteUndoMark(markId84, NULL);
    
    NXOpen::Matrix3x3 rotMatrix47;
    rotMatrix47.Xx = 0.63099621060559385;
    rotMatrix47.Xy = -0.15327966481313182;
    rotMatrix47.Xz = 0.76049268672102144;
    rotMatrix47.Yx = 0.074803330689548489;
    rotMatrix47.Yy = 0.98774034859738957;
    rotMatrix47.Yz = 0.1370162963682188;
    rotMatrix47.Zx = -0.77217112346884209;
    rotMatrix47.Zy = -0.029569377867784987;
    rotMatrix47.Zz = 0.63472624648219866;
    NXOpen::Point3d translation47(-66.841655505611627, -17.144646038756271, -91.451679764825954);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix47, translation47, 0.80534835131194615);
    
    extrudeBuilder3->Limits()->StartExtend()->Value()->SetFormula("-10");
    
    NXOpen::Point3d scaleAboutPoint113(-84.925723825284777, -86.732654119439601, 0.0);
    NXOpen::Point3d viewCenter113(84.925723825284621, 86.732654119439715, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint113, viewCenter113);
    
    NXOpen::Point3d scaleAboutPoint114(-67.940579060227805, -69.38612329555167, 0.0);
    NXOpen::Point3d viewCenter114(67.940579060227691, 69.386123295551783, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint114, viewCenter114);
    
    NXOpen::Point3d scaleAboutPoint115(-55.193507166916191, -54.457593738023867, 0.0);
    NXOpen::Point3d viewCenter115(55.193507166916099, 54.457593738023981, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint115, viewCenter115);
    
    NXOpen::Point3d scaleAboutPoint116(-45.164058436013718, -43.397866206672305, 0.0);
    NXOpen::Point3d viewCenter116(45.164058436013647, 43.397866206672418, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint116, viewCenter116);
    
    NXOpen::Matrix3x3 rotMatrix48;
    rotMatrix48.Xx = 0.052743740380218521;
    rotMatrix48.Xy = -0.16851116336349675;
    rotMatrix48.Xz = 0.98428760312857189;
    rotMatrix48.Yx = -0.030863946802448063;
    rotMatrix48.Yy = 0.98491359748970075;
    rotMatrix48.Yz = 0.17027220051340952;
    rotMatrix48.Zx = -0.99813101075885169;
    rotMatrix48.Zy = -0.039359792959118102;
    rotMatrix48.Zz = 0.046747107501274497;
    NXOpen::Point3d translation48(-15.915630172008079, 33.70239776637419, -91.270898454857118);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix48, translation48, 1.966182498320181);
    
    extrudeBuilder3->Limits()->EndExtend()->Value()->SetFormula("10");
    
    NXOpen::Session::UndoMarkId markId86;
    markId86 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId86, NULL);
    
    NXOpen::Session::UndoMarkId markId87;
    markId87 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    extrudeBuilder3->SetParentFeatureInternal(false);
    
    NXOpen::Features::Feature *feature7;
    feature7 = extrudeBuilder3->CommitFeature();
    
    theSession->DeleteUndoMark(markId87, NULL);
    
    theSession->SetUndoMarkName(markId83, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression34(extrudeBuilder3->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression35(extrudeBuilder3->Limits()->EndExtend()->Value());
    extrudeBuilder3->Destroy();
    
    workPart->Expressions()->Delete(expression33);
    
    NXOpen::Matrix3x3 rotMatrix49;
    rotMatrix49.Xx = 0.41953152936783034;
    rotMatrix49.Xy = -0.29308123946503695;
    rotMatrix49.Xz = 0.8591255338656465;
    rotMatrix49.Yx = 0.44652140409204155;
    rotMatrix49.Yy = 0.89065085058072613;
    rotMatrix49.Yz = 0.085788682514129355;
    rotMatrix49.Zx = -0.79032394089637081;
    rotMatrix49.Zy = 0.34762688249540763;
    rotMatrix49.Zz = 0.50452316003585207;
    NXOpen::Point3d translation49(-14.051422502075493, 35.113052245170401, -97.062205252775328);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix49, translation49, 1.966182498320181);
    
    NXOpen::Point3d scaleAboutPoint117(-32.094235938887991, -36.467664316304457, 0.0);
    NXOpen::Point3d viewCenter117(32.094235938887877, 36.467664316304578, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint117, viewCenter117);
    
    NXOpen::Point3d scaleAboutPoint118(-40.117794923609992, -45.584580395380605, 0.0);
    NXOpen::Point3d viewCenter118(40.117794923609843, 45.584580395380662, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint118, viewCenter118);
    
    NXOpen::Point3d scaleAboutPoint119(-50.147243654512437, -57.401247453592752, 0.0);
    NXOpen::Point3d viewCenter119(50.147243654512323, 57.401247453592802, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint119, viewCenter119);
    
    NXOpen::Point3d scaleAboutPoint120(-62.684054568140482, -71.751559316990921, 0.0);
    NXOpen::Point3d viewCenter120(62.684054568140418, 71.751559316990992, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint120, viewCenter120);
    
    NXOpen::Point3d scaleAboutPoint121(-75.069740402621079, -90.675047488505015, 0.0);
    NXOpen::Point3d viewCenter121(75.069740402621079, 90.675047488505058, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint121, viewCenter121);
    
    NXOpen::Matrix3x3 rotMatrix50;
    rotMatrix50.Xx = 0.26938676753993318;
    rotMatrix50.Xy = -0.1601434205375003;
    rotMatrix50.Xz = 0.94962353295026125;
    rotMatrix50.Yx = 0.63652333784844561;
    rotMatrix50.Yy = 0.76958356345589773;
    rotMatrix50.Yz = -0.05078562033485505;
    rotMatrix50.Zx = -0.72268167947489881;
    rotMatrix50.Zy = 0.61813851499245076;
    rotMatrix50.Zz = 0.30925065308624428;
    NXOpen::Point3d translation50(-81.069121922424742, -38.545184528058634, -101.110447622764);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix50, translation50, 0.6442786810495571);
    
    NXOpen::Point3d origin38(-64.537959051791731, 26.24707395002633, 123.67223573914548);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin38);
    
    NXOpen::Point3d origin39(-64.537959051791731, 26.24707395002633, 123.67223573914548);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin39);
    
    NXOpen::Point3d scaleAboutPoint122(-109.85314856510466, -136.34110401351305, 0.0);
    NXOpen::Point3d viewCenter122(109.85314856510466, 136.34110401351305, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint122, viewCenter122);
    
    NXOpen::Point3d scaleAboutPoint123(-87.88251885208372, -107.75875208778861, 0.0);
    NXOpen::Point3d viewCenter123(87.88251885208372, 107.75875208778865, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint123, viewCenter123);
    
    NXOpen::Point3d scaleAboutPoint124(-70.30601508166697, -86.207001670230923, 0.0);
    NXOpen::Point3d viewCenter124(70.30601508166697, 86.207001670230952, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint124, viewCenter124);
    
    NXOpen::Point3d scaleAboutPoint125(-54.983246187232623, -68.75534035650125, 0.0);
    NXOpen::Point3d viewCenter125(54.983246187232673, 68.75534035650125, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint125, viewCenter125);
    
    NXOpen::Matrix3x3 rotMatrix51;
    rotMatrix51.Xx = 0.10688459345129127;
    rotMatrix51.Xy = 0.013446355958648449;
    rotMatrix51.Xz = 0.99418050634388722;
    rotMatrix51.Yx = 0.81395200539167745;
    rotMatrix51.Yy = 0.57306880959129458;
    rotMatrix51.Yz = -0.09525897539069017;
    rotMatrix51.Zx = -0.5710147253807214;
    rotMatrix51.Zy = 0.81939693371714106;
    rotMatrix51.Zz = 0.05030753833502883;
    NXOpen::Point3d translation51(-62.742612223012266, 141.13291089225413, -59.834088655820494);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix51, translation51, 1.5729459986561452);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->关联复制(A)->阵列特征(A)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId88;
    markId88 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::PatternFeatureBuilder *patternFeatureBuilder2;
    patternFeatureBuilder2 = workPart->Features()->CreatePatternFeatureBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section8;
    section8 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    NXOpen::Expression *expression36;
    expression36 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression37;
    expression37 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point3d origin40(0.0, 0.0, 0.0);
    NXOpen::Vector3d normal5(0.0, 0.0, 1.0);
    NXOpen::Plane *plane5;
    plane5 = workPart->Planes()->CreatePlane(origin40, normal5, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder2->PatternService()->MirrorDefinition()->SetNewPlane(plane5);
    
    NXOpen::Expression *expression38;
    expression38 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression39;
    expression39 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression40;
    expression40 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Section *section9;
    section9 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    patternFeatureBuilder2->SetPatternMethod(NXOpen::Features::PatternFeatureBuilder::PatternMethodOptionsSimple);
    
    patternFeatureBuilder2->PatternService()->SetPatternType(NXOpen::GeometricUtilities::PatternDefinition::PatternEnumCircular);
    
    patternFeatureBuilder2->PatternService()->PatternFill()->FillMargin()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetCircularOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetAlongOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumNormalToPath);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetPolygonOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetSpiralOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetMirrorOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->SetHelixOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);
    
    patternFeatureBuilder2->PatternService()->PatternOrientation()->AlongPathRotationAngle()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->RectangularDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->NCopies()->SetFormula("12");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle()->SetFormula("30");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle()->SetFormula("360");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetXPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetYDirectionOption(NXOpen::GeometricUtilities::AlongPathPattern::YDirectionOptionsSection);
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetYPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->NumberOfTurns()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->TotalAngle()->SetFormula("360");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->RadialPitch()->SetFormula("50");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->NCopies()->SetFormula("2");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathPitchDistance()->Expression()->SetFormula("50");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathSpanDistance()->Expression()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->SpiralDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->NCopies()->SetFormula("4");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->PitchDistance()->SetFormula("25");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->SpanAngle()->SetFormula("360");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->NumberOfSides()->SetFormula("6");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->NCopies()->SetFormula("1");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->PitchDistance()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->SpanDistance()->SetFormula("100");
    
    patternFeatureBuilder2->PatternService()->PolygonDefinition()->HorizontalRef()->RotationAngle()->SetFormula("0");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->CountOfInstances()->SetFormula("6");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->NumberOfTurns()->SetFormula("2");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->AnglePitch()->SetFormula("30");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->DistancePitch()->SetFormula("10");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->HelixPitch()->SetFormula("50");
    
    patternFeatureBuilder2->PatternService()->HelixDefinition()->HelixSpan()->SetFormula("100");
    
    theSession->SetUndoMarkName(markId88, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d origin41(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector7(0.0, 1.0, 0.0);
    NXOpen::Direction *direction14;
    direction14 = workPart->Directions()->CreateDirection(origin41, vector7, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Axis *axis4;
    axis4 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction14, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->SetRotationAxis(axis4);
    
    NXOpen::Point3d origin42(0.0, 0.0, 0.0);
    NXOpen::Vector3d vector8(1.0, 0.0, 0.0);
    NXOpen::Direction *direction15;
    direction15 = workPart->Directions()->CreateDirection(origin42, vector8, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->SetHorizontalRefVector(direction15);
    
    NXOpen::Expression *expression41;
    expression41 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point3d scaleAboutPoint126(14.213642226603945, 39.192646613002545, 0.0);
    NXOpen::Point3d viewCenter126(-14.21364222660387, -39.192646613002545, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint126, viewCenter126);
    
    NXOpen::Point3d scaleAboutPoint127(15.874703966103493, 49.621591205303638, 0.0);
    NXOpen::Point3d viewCenter127(-15.874703966103445, -49.621591205303638, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint127, viewCenter127);
    
    NXOpen::Point3d scaleAboutPoint128(74.774060899941162, 48.360025327202692, 0.0);
    NXOpen::Point3d viewCenter128(-74.774060899941034, -48.360025327202692, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint128, viewCenter128);
    
    NXOpen::Point3d scaleAboutPoint129(118.43606746234087, 63.406826685802471, 0.0);
    NXOpen::Point3d viewCenter129(-118.43606746234072, -63.406826685802436, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint129, viewCenter129);
    
    NXOpen::Point3d scaleAboutPoint130(170.63171300486346, 79.258533357253128, 0.0);
    NXOpen::Point3d viewCenter130(-170.63171300486343, -79.258533357253, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint130, viewCenter130);
    
    NXOpen::Point3d scaleAboutPoint131(199.94299703788911, 94.453174467192852, 0.0);
    NXOpen::Point3d viewCenter131(-199.94299703788889, -94.453174467192625, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint131, viewCenter131);
    
    NXOpen::Point3d scaleAboutPoint132(197.9538337169088, 110.36648103503514, 0.0);
    NXOpen::Point3d viewCenter132(-197.95383371690852, -110.36648103503492, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint132, viewCenter132);
    
    NXOpen::Point3d scaleAboutPoint133(79.807157434491089, 51.333246993039623, 0.0);
    NXOpen::Point3d viewCenter133(-79.807157434490904, -51.333246993039538, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint133, viewCenter133);
    
    NXOpen::Point3d scaleAboutPoint134(41.387430388138249, 49.408250230800604, 0.0);
    NXOpen::Point3d viewCenter134(-41.387430388137965, -49.408250230800533, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint134, viewCenter134);
    
    std::vector<NXOpen::Features::Feature *> objects4(1);
    NXOpen::Features::Extrude *extrude3(dynamic_cast<NXOpen::Features::Extrude *>(feature7));
    objects4[0] = extrude3;
    bool added2;
    added2 = patternFeatureBuilder2->FeatureList()->Add(objects4);
    
    // 参考点 (-227.001876, 14.081536, 0.000000) 从选定特征自动判断。
    NXOpen::Point3d coordinates2(-225.5197922139852, -1.2184364943326337e-15, 43.762640704936665);
    NXOpen::Point *point14;
    point14 = workPart->Points()->CreatePoint(coordinates2);
    
    patternFeatureBuilder2->ReferencePointService()->SetPoint(point14);
    
    NXOpen::Expression *expression42;
    expression42 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point *point15;
    point15 = workPart->Points()->CreatePoint(arc1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Point *point16;
    point16 = workPart->Points()->CreatePoint(arc1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    point16->RemoveViewDependency();
    
    point16->RemoveViewDependency();
    
    NXOpen::Point *point17;
    point17 = axis4->Point();
    
    axis4->SetPoint(point16);
    
    NXOpen::Session::UndoMarkId markId89;
    markId89 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId89, NULL);
    
    NXOpen::Session::UndoMarkId markId90;
    markId90 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    patternFeatureBuilder2->SetParentFeatureInternal(false);
    
    NXOpen::NXObject *nXObject33;
    nXObject33 = patternFeatureBuilder2->Commit();
    
    std::vector<NXOpen::NXObject *> objects5;
    objects5 = patternFeatureBuilder2->GetCommittedObjects();
    
    theSession->DeleteUndoMark(markId90, NULL);
    
    theSession->SetUndoMarkName(markId88, NXOpen::NXString("\351\230\265\345\210\227\347\211\271\345\276\201", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression43(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->NCopies());
    NXOpen::Expression *expression44(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance());
    NXOpen::Expression *expression45(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance());
    NXOpen::Expression *expression46(patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle());
    NXOpen::Expression *expression47(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->NCopies());
    NXOpen::Expression *expression48(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle());
    NXOpen::Expression *expression49(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance());
    NXOpen::Expression *expression50(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle());
    patternFeatureBuilder2->Destroy();
    
    section8->Destroy();
    
    section9->Destroy();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression39);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression42);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression36);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression37);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression38);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression40);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    workPart->Points()->DeletePoint(point15);
    
    workPart->MeasureManager()->SetPartTransientModification();
    
    workPart->Expressions()->Delete(expression41);
    
    workPart->MeasureManager()->ClearPartTransientModification();
    
    NXOpen::Matrix3x3 rotMatrix52;
    rotMatrix52.Xx = 0.37753495199363907;
    rotMatrix52.Xy = -0.34498184136285592;
    rotMatrix52.Xz = 0.85933397998278716;
    rotMatrix52.Yx = 0.76896708660401536;
    rotMatrix52.Yy = 0.63382730373149332;
    rotMatrix52.Yz = -0.083382065003209035;
    rotMatrix52.Zx = -0.51590404121589839;
    rotMatrix52.Zy = 0.69227919091531454;
    rotMatrix52.Zz = 0.50457164217061046;
    NXOpen::Point3d translation52(116.33915018539167, 241.24017221680685, -57.931754816652571);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix52, translation52, 0.5154229448396459);
    
    NXOpen::Point3d origin43(-77.916167470485291, -33.289443328262074, 80.821184996552418);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin43);
    
    NXOpen::Point3d origin44(-77.916167470485291, -33.289443328262074, 80.821184996552418);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin44);
    
    NXOpen::Matrix3x3 rotMatrix53;
    rotMatrix53.Xx = 0.33228156283240029;
    rotMatrix53.Xy = -0.28573022640425794;
    rotMatrix53.Xz = 0.89885883247628617;
    rotMatrix53.Yx = 0.74009930052948592;
    rotMatrix53.Yy = 0.66975341678636147;
    rotMatrix53.Yz = -0.060690905898341953;
    rotMatrix53.Zx = -0.5846725479765793;
    rotMatrix53.Zy = 0.68541126225206561;
    rotMatrix53.Zz = 0.43401545274403491;
    NXOpen::Point3d translation53(-52.407275738901575, 87.216124672602007, -57.828975355555166);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix53, translation53, 0.5154229448396459);
    
    NXOpen::Matrix3x3 rotMatrix54;
    rotMatrix54.Xx = 0.22097730682776123;
    rotMatrix54.Xy = -0.13678611804095575;
    rotMatrix54.Xz = 0.96563895311779879;
    rotMatrix54.Yx = 0.86689974310853157;
    rotMatrix54.Yy = 0.48117259394181144;
    rotMatrix54.Yz = -0.13022200366171857;
    rotMatrix54.Zx = -0.44682643751854567;
    rotMatrix54.Zy = 0.86588826805229246;
    rotMatrix54.Zz = 0.2249080745191076;
    NXOpen::Point3d translation54(-54.636244026404327, 90.03826163639782, -60.52983762511824);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix54, translation54, 0.5154229448396459);
    
    NXOpen::Matrix3x3 rotMatrix55;
    rotMatrix55.Xx = -0.026735563482444602;
    rotMatrix55.Xy = -0.12210183423400277;
    rotMatrix55.Xz = 0.99215742285283226;
    rotMatrix55.Yx = 0.12239931126042826;
    rotMatrix55.Yy = 0.98464423069254325;
    rotMatrix55.Yz = 0.12447548982377386;
    rotMatrix55.Zx = -0.99212076797547988;
    rotMatrix55.Zy = 0.12476730757930135;
    rotMatrix55.Zz = -0.011379837923424741;
    NXOpen::Point3d translation55(-54.855996276359392, 82.503741981298845, -49.438864398647873);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix55, translation55, 0.5154229448396459);
    
    NXOpen::Matrix3x3 rotMatrix56;
    rotMatrix56.Xx = -0.020130233518839295;
    rotMatrix56.Xy = -0.12557297302151529;
    rotMatrix56.Xz = 0.99188013496844485;
    rotMatrix56.Yx = 0.67899251474657718;
    rotMatrix56.Yy = 0.72648826369534247;
    rotMatrix56.Yz = 0.10575427949284623;
    rotMatrix56.Zx = -0.73386915633279204;
    rotMatrix56.Zy = 0.67560804551120546;
    rotMatrix56.Zz = 0.070638730339200831;
    NXOpen::Point3d translation56(-54.804050225160012, 86.367080182383035, -57.682268920027013);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix56, translation56, 0.5154229448396459);
    
    NXOpen::Point3d scaleAboutPoint135(-189.16301516935061, -65.70655615109051, 0.0);
    NXOpen::Point3d viewCenter135(189.16301516935084, 65.70655615109068, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint135, viewCenter135);
    
    NXOpen::Point3d scaleAboutPoint136(-146.81308640009297, -52.565244920872459, 0.0);
    NXOpen::Point3d viewCenter136(146.81308640009325, 52.565244920872594, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint136, viewCenter136);
    
    NXOpen::Point3d scaleAboutPoint137(-113.83660853176427, -41.723663155942425, 0.0);
    NXOpen::Point3d viewCenter137(113.83660853176474, 41.72366315594261, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint137, viewCenter137);
    
    NXOpen::Point3d scaleAboutPoint138(-88.96667702857647, -30.225015829501576, 0.0);
    NXOpen::Point3d viewCenter138(88.966677028576925, 30.22501582950175, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint138, viewCenter138);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->组合(B)->减去(S)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId91;
    markId91 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\350\265\267\347\202\271", NXOpen::NXString::UTF8));
    
    NXOpen::Features::BooleanFeature *nullNXOpen_Features_BooleanFeature(NULL);
    NXOpen::Features::BooleanBuilder *booleanBuilder1;
    booleanBuilder1 = workPart->Features()->CreateBooleanBuilderUsingCollector(nullNXOpen_Features_BooleanFeature);
    
    NXOpen::ScCollector *scCollector2;
    scCollector2 = booleanBuilder1->ToolBodyCollector();
    
    NXOpen::ScCollector *scCollector3;
    scCollector3 = booleanBuilder1->TargetBodyCollector();
    
    NXOpen::GeometricUtilities::BooleanRegionSelect *booleanRegionSelect1;
    booleanRegionSelect1 = booleanBuilder1->BooleanRegionSelect();
    
    booleanBuilder1->SetTolerance(0.001);
    
    booleanBuilder1->SetOperation(NXOpen::Features::Feature::BooleanTypeSubtract);
    
    theSession->SetUndoMarkName(markId91, NXOpen::NXString("\345\207\217\345\216\273 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::Point3d origin45(-111.38795564310166, -29.757820045040841, -56.02158270828474);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin45);
    
    NXOpen::Point3d origin46(-111.38795564310166, -29.757820045040841, -56.02158270828474);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin46);
    
    NXOpen::Matrix3x3 rotMatrix57;
    rotMatrix57.Xx = -0.020130233518839295;
    rotMatrix57.Xy = -0.12557297302151529;
    rotMatrix57.Xz = 0.99188013496844485;
    rotMatrix57.Yx = 0.67899251474657718;
    rotMatrix57.Yy = 0.72648826369534247;
    rotMatrix57.Yz = 0.10575427949284623;
    rotMatrix57.Zx = -0.73386915633279204;
    rotMatrix57.Zy = 0.67560804551120546;
    rotMatrix57.Zz = 0.070638730339200831;
    NXOpen::Point3d translation57(49.587651525862668, 103.17481724583304, -57.682268920027013);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix57, translation57, 1.2583567989249167);
    
    NXOpen::ScCollector *scCollector4;
    scCollector4 = workPart->ScCollectors()->CreateCollector();
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions10;
    selectionIntentRuleOptions10 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions10->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies1(1);
    bodies1[0] = body1;
    NXOpen::BodyDumbRule *bodyDumbRule1;
    bodyDumbRule1 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies1, true, selectionIntentRuleOptions10);
    
    delete selectionIntentRuleOptions10;
    std::vector<NXOpen::SelectionIntentRule *> rules7(1);
    rules7[0] = bodyDumbRule1;
    scCollector4->ReplaceRules(rules7, false);
    
    booleanBuilder1->SetTargetBodyCollector(scCollector4);
    
    NXOpen::ScCollector *scCollector5;
    scCollector5 = workPart->ScCollectors()->CreateCollector();
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions11;
    selectionIntentRuleOptions11 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions11->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies2(1);
    NXOpen::Body *body2(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:9A:1A)")));
    bodies2[0] = body2;
    NXOpen::BodyDumbRule *bodyDumbRule2;
    bodyDumbRule2 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies2, true, selectionIntentRuleOptions11);
    
    delete selectionIntentRuleOptions11;
    std::vector<NXOpen::SelectionIntentRule *> rules8(1);
    rules8[0] = bodyDumbRule2;
    scCollector5->ReplaceRules(rules8, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions12;
    selectionIntentRuleOptions12 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions12->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies3(2);
    bodies3[0] = body2;
    NXOpen::Body *body3(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:10A:1A)")));
    bodies3[1] = body3;
    NXOpen::BodyDumbRule *bodyDumbRule3;
    bodyDumbRule3 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies3, true, selectionIntentRuleOptions12);
    
    delete selectionIntentRuleOptions12;
    std::vector<NXOpen::SelectionIntentRule *> rules9(1);
    rules9[0] = bodyDumbRule3;
    scCollector5->ReplaceRules(rules9, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions13;
    selectionIntentRuleOptions13 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions13->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies4(3);
    bodies4[0] = body2;
    bodies4[1] = body3;
    NXOpen::Body *body4(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:11A:1A)")));
    bodies4[2] = body4;
    NXOpen::BodyDumbRule *bodyDumbRule4;
    bodyDumbRule4 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies4, true, selectionIntentRuleOptions13);
    
    delete selectionIntentRuleOptions13;
    std::vector<NXOpen::SelectionIntentRule *> rules10(1);
    rules10[0] = bodyDumbRule4;
    scCollector5->ReplaceRules(rules10, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions14;
    selectionIntentRuleOptions14 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions14->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies5(4);
    bodies5[0] = body2;
    bodies5[1] = body3;
    bodies5[2] = body4;
    NXOpen::Body *body5(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("EXTRUDE(9)")));
    bodies5[3] = body5;
    NXOpen::BodyDumbRule *bodyDumbRule5;
    bodyDumbRule5 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies5, true, selectionIntentRuleOptions14);
    
    delete selectionIntentRuleOptions14;
    std::vector<NXOpen::SelectionIntentRule *> rules11(1);
    rules11[0] = bodyDumbRule5;
    scCollector5->ReplaceRules(rules11, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::Point3d scaleAboutPoint139(38.372628792237109, 43.313761814798987, 0.0);
    NXOpen::Point3d viewCenter139(-38.37262879223664, -43.313761814798873, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint139, viewCenter139);
    
    NXOpen::Point3d origin47(-91.664014855227521, -21.819850735931574, 72.970484554898889);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin47);
    
    NXOpen::Point3d origin48(-91.664014855227521, -21.819850735931574, 72.970484554898889);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin48);
    
    NXOpen::Matrix3x3 rotMatrix58;
    rotMatrix58.Xx = -0.025516367043830861;
    rotMatrix58.Xy = -0.12061055701198056;
    rotMatrix58.Xz = 0.99237191039959916;
    rotMatrix58.Yx = 0.67899251474657718;
    rotMatrix58.Yy = 0.72648826369534247;
    rotMatrix58.Yz = 0.10575427949284623;
    rotMatrix58.Zx = -0.73370162868226718;
    rotMatrix58.Zy = 0.67651156401808321;
    rotMatrix58.Zz = 0.063356324221065796;
    NXOpen::Point3d translation58(-77.037438833260225, 70.374104415209473, -57.695790194021214);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix58, translation58, 1.0066854391399334);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions15;
    selectionIntentRuleOptions15 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions15->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies6(5);
    bodies6[0] = body2;
    bodies6[1] = body3;
    bodies6[2] = body4;
    bodies6[3] = body5;
    NXOpen::Body *body6(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:1A:1A)")));
    bodies6[4] = body6;
    NXOpen::BodyDumbRule *bodyDumbRule6;
    bodyDumbRule6 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies6, true, selectionIntentRuleOptions15);
    
    delete selectionIntentRuleOptions15;
    std::vector<NXOpen::SelectionIntentRule *> rules12(1);
    rules12[0] = bodyDumbRule6;
    scCollector5->ReplaceRules(rules12, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions16;
    selectionIntentRuleOptions16 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions16->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies7(6);
    bodies7[0] = body2;
    bodies7[1] = body3;
    bodies7[2] = body4;
    bodies7[3] = body5;
    bodies7[4] = body6;
    NXOpen::Body *body7(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:2A:1A)")));
    bodies7[5] = body7;
    NXOpen::BodyDumbRule *bodyDumbRule7;
    bodyDumbRule7 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies7, true, selectionIntentRuleOptions16);
    
    delete selectionIntentRuleOptions16;
    std::vector<NXOpen::SelectionIntentRule *> rules13(1);
    rules13[0] = bodyDumbRule7;
    scCollector5->ReplaceRules(rules13, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::Point3d origin49(-33.903706154310093, 40.860874553894504, 81.723990182437177);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin49);
    
    NXOpen::Point3d origin50(-33.903706154310093, 40.860874553894504, 81.723990182437177);
    workPart->ModelingViews()->WorkView()->SetOrigin(origin50);
    
    NXOpen::Matrix3x3 rotMatrix59;
    rotMatrix59.Xx = -0.034345847508256117;
    rotMatrix59.Xy = -0.10053450475523013;
    rotMatrix59.Xz = 0.99434057350214067;
    rotMatrix59.Yx = 0.92138250980819802;
    rotMatrix59.Yy = 0.3822148767029635;
    rotMatrix59.Yz = 0.070470267819065957;
    rotMatrix59.Zx = -0.38713645317703393;
    rotMatrix59.Zy = 0.91858837428990248;
    rotMatrix59.Zz = 0.079503240443072332;
    NXOpen::Point3d translation59(-77.337879611417051, -10.155148020852835, -61.318501687379296);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix59, translation59, 1.0066854391399334);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions17;
    selectionIntentRuleOptions17 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions17->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies8(7);
    bodies8[0] = body2;
    bodies8[1] = body3;
    bodies8[2] = body4;
    bodies8[3] = body5;
    bodies8[4] = body6;
    bodies8[5] = body7;
    NXOpen::Body *body8(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:3A:1A)")));
    bodies8[6] = body8;
    NXOpen::BodyDumbRule *bodyDumbRule8;
    bodyDumbRule8 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies8, true, selectionIntentRuleOptions17);
    
    delete selectionIntentRuleOptions17;
    std::vector<NXOpen::SelectionIntentRule *> rules14(1);
    rules14[0] = bodyDumbRule8;
    scCollector5->ReplaceRules(rules14, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions18;
    selectionIntentRuleOptions18 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions18->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies9(8);
    bodies9[0] = body2;
    bodies9[1] = body3;
    bodies9[2] = body4;
    bodies9[3] = body5;
    bodies9[4] = body6;
    bodies9[5] = body7;
    bodies9[6] = body8;
    NXOpen::Body *body9(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:4A:1A)")));
    bodies9[7] = body9;
    NXOpen::BodyDumbRule *bodyDumbRule9;
    bodyDumbRule9 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies9, true, selectionIntentRuleOptions18);
    
    delete selectionIntentRuleOptions18;
    std::vector<NXOpen::SelectionIntentRule *> rules15(1);
    rules15[0] = bodyDumbRule9;
    scCollector5->ReplaceRules(rules15, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::Point3d scaleAboutPoint140(8.0161998504332423, 67.283513498716815, 0.0);
    NXOpen::Point3d viewCenter140(-8.0161998504328338, -67.283513498716701, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint140, viewCenter140);
    
    NXOpen::Point3d scaleAboutPoint141(9.3631842515305852, 83.447326311885121, 0.0);
    NXOpen::Point3d viewCenter141(-9.3631842515301464, -83.447326311885007, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint141, viewCenter141);
    
    NXOpen::Point3d scaleAboutPoint142(10.882648362524609, 103.89849191391208, 0.0);
    NXOpen::Point3d viewCenter142(-10.882648362524199, -103.89849191391194, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint142, viewCenter142);
    
    NXOpen::Point3d scaleAboutPoint143(12.576645513294871, 128.84644995252924, 0.0);
    NXOpen::Point3d viewCenter143(-12.576645513294416, -128.84644995252913, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint143, viewCenter143);
    
    NXOpen::Point3d scaleAboutPoint144(15.079141304205569, 159.77473126583556, 0.0);
    NXOpen::Point3d viewCenter144(-15.079141304205141, -159.77473126583547, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint144, viewCenter144);
    
    NXOpen::Point3d scaleAboutPoint145(17.244762661724319, 198.11425011376198, 0.0);
    NXOpen::Point3d viewCenter145(-17.244762661723964, -198.11425011376173, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint145, viewCenter145);
    
    NXOpen::Point3d scaleAboutPoint146(21.5559533271554, 247.64281264220236, 0.0);
    NXOpen::Point3d viewCenter146(-21.555953327154953, -247.64281264220213, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint146, viewCenter146);
    
    NXOpen::Point3d scaleAboutPoint147(-45.743738165184077, 345.89785571481701, 0.0);
    NXOpen::Point3d viewCenter147(45.743738165184354, -345.89785571481673, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint147, viewCenter147);
    
    NXOpen::Point3d scaleAboutPoint148(-39.602797973145684, 282.73389945385048, 0.0);
    NXOpen::Point3d viewCenter148(39.60279797314579, -282.73389945385026, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint148, viewCenter148);
    
    NXOpen::Point3d scaleAboutPoint149(-31.682238378516537, 228.59336551587904, 0.0);
    NXOpen::Point3d viewCenter149(31.682238378516715, -228.59336551587879, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint149, viewCenter149);
    
    NXOpen::Point3d scaleAboutPoint150(-25.345790702813161, 186.08302034976828, 0.0);
    NXOpen::Point3d viewCenter150(25.345790702813446, -186.08302034976808, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint150, viewCenter150);
    
    NXOpen::Point3d scaleAboutPoint151(-20.27663256225053, 148.86641627981462, 0.0);
    NXOpen::Point3d viewCenter151(20.276632562250757, -148.86641627981439, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint151, viewCenter151);
    
    NXOpen::Point3d scaleAboutPoint152(-16.221306049800468, 119.09313302385175, 0.0);
    NXOpen::Point3d viewCenter152(16.22130604980056, -119.09313302385152, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.80000000000000004, scaleAboutPoint152, viewCenter152);
    
    NXOpen::Point3d scaleAboutPoint153(-20.276632562250533, 150.40641368960584, 0.0);
    NXOpen::Point3d viewCenter153(20.276632562250647, -150.40641368960561, 0.0);
    workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint153, viewCenter153);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions19;
    selectionIntentRuleOptions19 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions19->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies10(9);
    bodies10[0] = body2;
    bodies10[1] = body3;
    bodies10[2] = body4;
    bodies10[3] = body5;
    bodies10[4] = body6;
    bodies10[5] = body7;
    bodies10[6] = body8;
    bodies10[7] = body9;
    NXOpen::Body *body10(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:7A:1A)")));
    bodies10[8] = body10;
    NXOpen::BodyDumbRule *bodyDumbRule10;
    bodyDumbRule10 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies10, true, selectionIntentRuleOptions19);
    
    delete selectionIntentRuleOptions19;
    std::vector<NXOpen::SelectionIntentRule *> rules16(1);
    rules16[0] = bodyDumbRule10;
    scCollector5->ReplaceRules(rules16, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions20;
    selectionIntentRuleOptions20 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions20->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies11(10);
    bodies11[0] = body2;
    bodies11[1] = body3;
    bodies11[2] = body4;
    bodies11[3] = body5;
    bodies11[4] = body6;
    bodies11[5] = body7;
    bodies11[6] = body8;
    bodies11[7] = body9;
    bodies11[8] = body10;
    NXOpen::Body *body11(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:8A:1A)")));
    bodies11[9] = body11;
    NXOpen::BodyDumbRule *bodyDumbRule11;
    bodyDumbRule11 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies11, true, selectionIntentRuleOptions20);
    
    delete selectionIntentRuleOptions20;
    std::vector<NXOpen::SelectionIntentRule *> rules17(1);
    rules17[0] = bodyDumbRule11;
    scCollector5->ReplaceRules(rules17, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions21;
    selectionIntentRuleOptions21 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions21->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies12(11);
    bodies12[0] = body2;
    bodies12[1] = body3;
    bodies12[2] = body4;
    bodies12[3] = body5;
    bodies12[4] = body6;
    bodies12[5] = body7;
    bodies12[6] = body8;
    bodies12[7] = body9;
    bodies12[8] = body10;
    bodies12[9] = body11;
    NXOpen::Body *body12(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:6A:1A)")));
    bodies12[10] = body12;
    NXOpen::BodyDumbRule *bodyDumbRule12;
    bodyDumbRule12 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies12, true, selectionIntentRuleOptions21);
    
    delete selectionIntentRuleOptions21;
    std::vector<NXOpen::SelectionIntentRule *> rules18(1);
    rules18[0] = bodyDumbRule12;
    scCollector5->ReplaceRules(rules18, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::SelectionIntentRuleOptions *selectionIntentRuleOptions22;
    selectionIntentRuleOptions22 = workPart->ScRuleFactory()->CreateRuleOptions();
    
    selectionIntentRuleOptions22->SetSelectedFromInactive(false);
    
    std::vector<NXOpen::Body *> bodies13(12);
    bodies13[0] = body2;
    bodies13[1] = body3;
    bodies13[2] = body4;
    bodies13[3] = body5;
    bodies13[4] = body6;
    bodies13[5] = body7;
    bodies13[6] = body8;
    bodies13[7] = body9;
    bodies13[8] = body10;
    bodies13[9] = body11;
    bodies13[10] = body12;
    NXOpen::Body *body13(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("Pattern Feature(10:5A:1A)")));
    bodies13[11] = body13;
    NXOpen::BodyDumbRule *bodyDumbRule13;
    bodyDumbRule13 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies13, true, selectionIntentRuleOptions22);
    
    delete selectionIntentRuleOptions22;
    std::vector<NXOpen::SelectionIntentRule *> rules19(1);
    rules19[0] = bodyDumbRule13;
    scCollector5->ReplaceRules(rules19, false);
    
    booleanBuilder1->SetToolBodyCollector(scCollector5);
    
    NXOpen::Session::UndoMarkId markId92;
    markId92 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\207\217\345\216\273", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId92, NULL);
    
    NXOpen::Session::UndoMarkId markId93;
    markId93 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\207\217\345\216\273", NXOpen::NXString::UTF8));
    
    NXOpen::NXObject *nXObject34;
    nXObject34 = booleanBuilder1->Commit();
    
    theSession->DeleteUndoMark(markId93, NULL);
    
    theSession->SetUndoMarkName(markId91, NXOpen::NXString("\345\207\217\345\216\273", NXOpen::NXString::UTF8));
    
    booleanBuilder1->Destroy();
    
    NXOpen::Matrix3x3 rotMatrix60;
    rotMatrix60.Xx = 0.027126917640824026;
    rotMatrix60.Xy = -0.14460105618364791;
    rotMatrix60.Xz = 0.98911812484145811;
    rotMatrix60.Yx = 0.97724418388110301;
    rotMatrix60.Yy = 0.21207579806276797;
    rotMatrix60.Yz = 0.0042024929028725818;
    rotMatrix60.Zx = -0.21037570061646144;
    rotMatrix60.Zy = 0.96649593399383704;
    rotMatrix60.Zz = 0.14706350384619421;
    NXOpen::Point3d translation60(-20.248211707884664, 1.7506841741425641, -62.274982455212339);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix60, translation60, 0.64427868104955777);
    
    NXOpen::Matrix3x3 rotMatrix61;
    rotMatrix61.Xx = 0.030441135590369189;
    rotMatrix61.Xy = -0.13606283979124195;
    rotMatrix61.Xz = 0.99023241761311431;
    rotMatrix61.Yx = 0.95036738221937811;
    rotMatrix61.Yy = 0.31083713672573338;
    rotMatrix61.Yz = 0.013494934073040952;
    rotMatrix61.Zx = -0.30963716843663502;
    rotMatrix61.Zy = 0.94067378939784274;
    rotMatrix61.Zz = 0.13877192029532656;
    NXOpen::Point3d translation61(-20.418678327796055, -0.22109901874697124, -61.759439921989888);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix61, translation61, 0.64427868104955777);
    
    NXOpen::Matrix3x3 rotMatrix62;
    rotMatrix62.Xx = -0.90509678984494479;
    rotMatrix62.Xy = 0.043694775082087439;
    rotMatrix62.Xz = 0.42295456924225822;
    rotMatrix62.Yx = 0.41559654949153435;
    rotMatrix62.Yy = 0.30117994584631935;
    rotMatrix62.Yz = 0.85823665050540654;
    rotMatrix62.Zx = -0.089884976848799925;
    rotMatrix62.Zy = 0.95256569686848569;
    rotMatrix62.Zz = -0.29075639990610119;
    NXOpen::Point3d translation62(-24.007562891326728, -0.028291925158077103, -61.996863427983683);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix62, translation62, 0.64427868104955777);
    
    NXOpen::Matrix3x3 rotMatrix63;
    rotMatrix63.Xx = -0.72940510101098455;
    rotMatrix63.Xy = -0.35410405426959723;
    rotMatrix63.Xz = -0.58530207360728781;
    rotMatrix63.Yx = -0.61947599841835133;
    rotMatrix63.Yy = 0.70487240132265649;
    rotMatrix63.Yz = 0.34554939623333886;
    rotMatrix63.Zx = 0.29020283596606034;
    rotMatrix63.Zy = 0.6146260786880724;
    rotMatrix63.Zz = -0.7334964876492488;
    NXOpen::Point3d translation63(-16.065456633091916, -8.0880652087196978, -55.249854240374141);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix63, translation63, 0.64427868104955777);
    
    NXOpen::Matrix3x3 rotMatrix64;
    rotMatrix64.Xx = -0.48080105305530985;
    rotMatrix64.Xy = 0.16984051308252393;
    rotMatrix64.Xz = -0.8602235450723088;
    rotMatrix64.Yx = -0.75118117430208242;
    rotMatrix64.Yy = 0.4262589549896314;
    rotMatrix64.Yz = 0.50401403419477497;
    rotMatrix64.Zx = 0.45227999154843168;
    rotMatrix64.Zy = 0.88851421114522;
    rotMatrix64.Zz = -0.07736475837187215;
    NXOpen::Point3d translation64(-26.526079240044261, -2.5255108911110273, -60.718067041274736);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix64, translation64, 0.64427868104955777);
    
    // ----------------------------------------------
    //   Menu: 工具(T)->自动化(A)->操作记录(J)->停止录制(S)
    // ----------------------------------------------
}
