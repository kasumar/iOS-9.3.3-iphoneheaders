/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCanvas.h>
#import <libobjc.A.dylib/VKMapModelDelegate.h>
#import <libobjc.A.dylib/VKOverlayContainerRouteDelegate.h>
#import <libobjc.A.dylib/VKInteractiveMap.h>

@protocol VKInteractiveMapDelegate;
@class NSArray, GEOMapRegion, VKAnchorWrapper, VKMapModel, VKMapCameraController, VKCamera, GEOResourceManifestConfiguration, VKPolylineOverlayPainter, NSString;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKOverlayContainerRouteDelegate, VKInteractiveMap> {

	VKMapModel* _map;
	VKMapCameraController* _cameraController;
	id<VKInteractiveMapDelegate> _delegate;
	CGSize _lastCanvasSize;
	VKCamera* _defaultTrackingCamera;
	float _lastValidCanvasSizeZoomLevel;
	BOOL _hasLastValidCanvasSizeZoomLevel;

}

@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) BOOL shouldLoadMapMargin; 
@property (assign,nonatomic) id<VKInteractiveMapDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL staysCenteredDuringPinch; 
@property (assign,nonatomic) BOOL staysCenteredDuringRotation; 
@property (assign,nonatomic) BOOL isPitchable; 
@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration; 
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager; 
@property (assign,nonatomic) long long mapType; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) BOOL dynamicMapModesEnabled; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) double yaw; 
@property (assign,nonatomic) VKPoint centerCoordinate; 
@property (assign,nonatomic) BOOL allowDatelineWraparound; 
@property (assign,nonatomic) int trackingCameraPanStyle; 
@property (assign,nonatomic) double trackingZoomScale; 
@property (nonatomic,retain) VKCamera * defaultTrackingCamera;                                                   //@synthesize defaultTrackingCamera=_defaultTrackingCamera - In the implementation block
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (nonatomic,readonly) VKMapModel * map;                                                                 //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) BOOL debugDynamicMapModesEnabled; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (assign,nonatomic) double userZoomFocusStyleGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMinGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMaxGroundspanMeters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL trafficIncidentsEnabled; 
@property (getter=isFullyPitched,nonatomic,readonly) BOOL fullyPitched; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (assign,nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) BOOL animatingToTrackAnnotation; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) BOOL fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
+(BOOL)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3 ;
-(void)_resetMaximumZoomLevel;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<VKInteractiveMapDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id<VKInteractiveMapDelegate>)delegate;
-(VKEdgeInsets)edgeInsets;
-(void)setContentsScale:(double)arg1 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)stopTracking;
-(double)altitude;
-(id)viewportInfo;
-(long long)mapType;
-(VKPoint)centerCoordinate;
-(void)setMapType:(long long)arg1 ;
-(VKMapModel *)map;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(void)setCenterCoordinate:(VKPoint)arg1 ;
-(double)pitch;
-(void)setStaysCenteredDuringRotation:(BOOL)arg1 ;
-(void)setDynamicMapModesEnabled:(BOOL)arg1 ;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 ;
-(id)buildingMarkerAtScreenPoint:(CGPoint)arg1 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(int)trackingCameraPanStyle;
-(void)resetRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)beginStyleAnimationGroup;
-(void)endStyleAnimationGroup;
-(void)setStylesheetName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(double)minimumZoomLevelForTileSize:(long long)arg1 ;
-(void)clearScene;
-(VKAnchorWrapper *)externalAnchors;
-(BOOL)debugDynamicMapModesEnabled;
-(void)setCanonicalSkyHeight:(double)arg1 ;
-(BOOL)shouldLoadMapMargin;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(CGPoint)convertMapPointToPoint:(CGSize)arg1 ;
-(NSArray *)externalTrafficIncidents;
-(void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1 ;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(shared_ptr<gss::CartoStyle>*)styleForFeature:(id)arg1 ;
-(double)_styleTransitionProgress;
-(BOOL)labelMarkerSelectionEnabled;
-(void)setTrackingCameraPanStyle:(int)arg1 ;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3 ;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(void)setShouldLoadMapMargin:(BOOL)arg1 ;
-(void)setCenterCoordinate3D:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(id)initShouldRasterize:(BOOL)arg1 contentScale:(double)arg2 target:(id)arg3 device:(const shared_ptr<ggl::Device>*)arg4 inBackground:(BOOL)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7 ;
-(id)roadMarkersForSelectionAtScreenPoint:(CGPoint)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2 ;
-(void)transferCamera:(id)arg1 ;
-(void)setDebugDynamicMapModesEnabled:(BOOL)arg1 ;
-(double)trackingZoomScale;
-(double)userZoomFocusStyleMaxGroundspanMeters;
-(void)resetTileContainers;
-(id)annotationMarkers;
-(void)updateCameraForFrameResize;
-(long long)annotationTrackingHeadingAnimationDisplayRate;
-(void)updateCameraContext:(id)arg1 ;
-(void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(CGSize)convertPointToMapPoint:(CGPoint)arg1 ;
-(NSArray *)rasterOverlays;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(double)maximumZoomLevel;
-(double)minimumZoomLevel;
-(long long)navigationShieldSize;
-(void)edgeInsetsDidEndAnimating;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)setUserZoomFocusStyleGroundspanMeters:(double)arg1 ;
-(id)boundsForSelectedTransitLines;
-(BOOL)currentSceneRequiresMSAA;
-(void)didBeginTransitionToTransit;
-(CGPoint)convertCoordinateToCameraModelPoint:(CGSize)arg1 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(id)selectedAnnotationMarker;
-(void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(/*^block*/id)arg3 ;
-(void)reloadStylesheet;
-(BOOL)isTrackingHeading;
-(BOOL)shouldLoadFallbackTiles;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(void)setShouldLimitTrackingCameraHeight:(BOOL)arg1 ;
-(id)persistentOverlays;
-(double)userZoomFocusStyleGroundspanMeters;
-(double)currentZoomLevel;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1 ;
-(CGSize)convertPointToCoordinate:(CGPoint)arg1 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(DisplayStyle)sourceMapDisplayStyle;
-(CGPoint)convertCoordinateToPoint:(CGSize)arg1 ;
-(void)pauseTracking;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(void)forceSceneLoad;
-(void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4 ;
-(void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2 ;
-(long long)shieldIdiom;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(void)preloadNavigationSceneResourcesWithDevice:(const shared_ptr<ggl::Device>*)arg1 ;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1 ;
-(BOOL)dynamicMapModesEnabled;
-(BOOL)isFullyDrawn;
-(double)userZoomFocusStyleMinGroundspanMeters;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(VehicleState)vehicleState;
-(void)setShieldIdiom:(long long)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)edgeInsetsWillBeginAnimating;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2 ;
-(id)featureMarkerAtScreenPoint:(CGPoint)arg1 ;
-(unsigned char)labelScaleFactor;
-(void)setTrackingZoomScale:(double)arg1 ;
-(void)stopRegionAnimation;
-(BOOL)trackingCanZoomIn;
-(VKPoint)screenPointForPoint:(CGPoint)arg1 ;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2 ;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(shared_ptr<gss::CartoStyle>*)styleAtScreenPoint:(CGPoint)arg1 ;
-(void)clearSceneIsEffectivelyHidden:(BOOL)arg1 ;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1 ;
-(id)navTileSource;
-(void)setDefaultTrackingCamera:(VKCamera *)arg1 ;
-(BOOL)trackingCanZoomOut;
-(BOOL)mapModelInNav:(id)arg1 ;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)_updateViewTransform;
-(double)mapModelZoomScale:(id)arg1 ;
-(void)mapModelDidFinishLoadingTiles:(id)arg1 ;
-(void)mapModel:(id)arg1 didUpdateNavigationPuckSize:(float)arg2 ;
-(void)mapModel:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2 ;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4 ;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapModelLabelsDidLayout:(id)arg1 ;
-(void)mapModelDidReloadStylesheet:(id)arg1 ;
-(BOOL)mapModelInNavAtDefaultZoom:(id)arg1 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1 ;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapModelWillBecomeFullyDrawn:(id)arg1 ;
-(void)mapModelDidStartLoadingTiles:(id)arg1 ;
-(void)gglWillDrawWithTimestamp;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(CGPoint)_centerScreenPoint;
-(void)cameraController:(id)arg1 pouncingToCameraPosition:(VKPoint)arg2 orientation:(const SCD_Struct_VK6*)arg3 ;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(VKCamera *)defaultTrackingCamera;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)overlayContainer:(id)arg1 updatedMatchedSection:(fast_shared_ptr<vk::RouteLineSection>*)arg2 index:(PolylineCoordinate*)arg3 ;
-(void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1 ;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1 ;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3 ;
-(BOOL)showsPointsOfInterest;
-(void)exit3DMode;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)maximumZoomLevelForTileSize:(long long)arg1 ;
-(id)labelMarkers;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)canZoomInForTileSize:(long long)arg1 ;
-(BOOL)canEnter3DMode;
-(BOOL)showsBuildings;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)canZoomOutForTileSize:(long long)arg1 ;
-(BOOL)allowDatelineWraparound;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(BOOL)isShowingNoDataPlaceholders;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)removeExternalAnchor:(id)arg1 ;
-(id)attributionsForCurrentRegion;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(double)currentZoomLevelForTileSize:(long long)arg1 ;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(void)enter3DMode;
-(double)topDownMinimumZoomLevelForTileSize:(long long)arg1 ;
-(id)consoleString:(BOOL)arg1 ;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isPitchable;
-(id)selectedLabelMarker;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(/*^block*/id)annotationCoordinateTest;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(GEOMapRegion *)mapRegionOfInterest;
-(BOOL)isAnimatingToTrackAnnotation;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)trafficIncidentsEnabled;
-(void)setIsPitchable:(BOOL)arg1 ;
-(void)setVehicleState:(VehicleState)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(double)yaw;
-(void)setCenterCoordinate:(VKPoint)arg1 animated:(BOOL)arg2 ;
-(void)addExternalAnchor:(id)arg1 ;
-(BOOL)isPitched;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1 ;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(BOOL)localizeLabels;
-(/*^block*/id)annotationRectTest;
-(void)setStaysCenteredDuringPinch:(BOOL)arg1 ;
-(void)deselectLabelMarker;
-(void)stopTrackingAnnotation;
-(void)selectLabelMarker:(id)arg1 ;
-(double)presentationYaw;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(long long)annotationTrackingZoomStyle;
-(void)setShieldSize:(long long)arg1 ;
-(long long)shieldSize;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_VK27*)arg2 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(VKPoint)arg2 ;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1 ;
-(void)selectTransitLineMarker:(id)arg1 ;
-(id)selectedTransitLineIDs;
-(void)deselectTransitLineMarker;
-(id)transitLineMarkersInCurrentViewport;
-(void)removeOverlay:(id)arg1 ;
-(id)overlays;
-(void)addOverlay:(id)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(BOOL)isFullyPitched;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(BOOL)staysCenteredDuringRotation;
-(void)stopSnappingAnimations;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(BOOL)staysCenteredDuringPinch;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)didStartPanningDeceleration;
-(unsigned char)targetDisplay;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
-(BOOL)trafficEnabled;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
-(shared_ptr<gss::StyleSheet>*)stylesheet;
@end

