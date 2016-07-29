/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/__VKMapViewAccessibility_super.h>

@interface VKMapViewAccessibility : __VKMapViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_axDirectionsManager;
-(CGRect)accessibilityPositionFrameForElement:(SCD_Struct_VK0)arg1 ;
-(id)accessibilityCalloutAnnotationView;
-(id)accessibilityOverviewForAlternateRouteAnnotationMarker:(id)arg1 ;
-(SCD_Struct_VK1)accessibilityCenter;
-(BOOL)_axShouldSummarizeVisibleBounds;
-(double)accessibilityYaw;
-(id)_axRouteForAnnotationMarker:(id)arg1 ;
-(id)_axMapViewDelegate;
-(long long)_axOrientationOfElements;
-(id)_axWindow;
-(id)_axTourGuideManager;
-(BOOL)_axTrackingWithHeadingEnabled;
-(BOOL)_axTrackingEnabled;
-(long long)_accessibilityMapType;
-(void)_axLoadAccessibility;
-(void)_axUpdateElementsComplete:(id)arg1 ;
-(void)_axSummaryForVisibleBounds;
-(BOOL)accessibilityViewBoundsContainsPathPoint:(CGPoint)arg1 ;
-(void)accessibilityClearVisibleAXBoundsFrame;
-(CGRect)accessibilityVisibleAXViewBounds;
-(float)accessibilityDistance:(CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3 withElement:(id)arg4 ;
-(id)accessibilityUpcomingRoadsForPoint:(CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3 ;
-(float)accessibilityDistanceToEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3 ;
-(float)accessibilityRealDistanceBetweenPoint:(CGPoint)arg1 screenPoint2:(CGPoint)arg2 ;
-(BOOL)accessibilityAnnotationMarkerIsAlternateRoute:(id)arg1 ;
-(long long)_axTrackingMode;
-(void)_axSetTrackingMode:(long long)arg1 ;
-(id)accessibilityTourStatus;
-(void)_axUserTrackingModeChange:(id)arg1 ;
-(void)_axVoiceOverTouchEnabled;
-(SCD_Struct_VK0)_axBoundsOfElements;
-(SCD_Struct_VK0)accessibilityBounds;
-(id)_axElementManager;
-(id)accessibilityLayerHostingView;
-(id)_axMapLabelLayoutTimer;
-(void)_axSetMapLabelLayoutTimer:(id)arg1 ;
-(id)_axUserLocationMarker;
-(long long)accessibilityOrientation;
-(id)_axTourGuideElement;
-(void)accessibilityZoom:(BOOL)arg1 point:(CGPoint)arg2 ;
-(BOOL)accessibilityIsShowingRoutes;
-(void)_axInitializeTimers;
-(float)accessibilityZoomLevel;
-(BOOL)accessibilityIsInTourGuideMode;
-(id)_axMapsDelegate;
-(void)_axMapViewDidChangeVisibleRegion;
-(id)_axElements;
-(BOOL)accessibilityIsShowingCalloutAnnotationView;
-(BOOL)accessibilityMapTypeShouldShowTransit;
-(BOOL)accessibilityTileLoadingComplete;
-(BOOL)accessibilityMapTypeSupportsAccessibility;
-(SCD_Struct_VK1)_axConvertScreenPointToCoordinate:(CGPoint)arg1 ;
-(CGPoint)_axIntersectionBetweenRoad:(id)arg1 andOtherRoad:(id)arg2 ;
-(void)_axStopListeningForUpdateAccessibilityElementsComplete;
-(void)_axStopListeningForUserTrackingModeChange;
-(void)_axStopListeningForVoiceOverTouchEnabled;
-(BOOL)_axElementsInvalidForVisibleBounds;
-(void)_axStartListeningForUpdateAccessibilityElementsComplete;
-(void)_axStartListeningForUserTrackingModeChange;
-(void)_axStartListeningForVoiceOverTouchEnabled;
-(CGPoint)accessibilityConvertCoordinateToWindow:(SCD_Struct_VK1)arg1 ;
-(id)_axAnnotationElements;
-(void)dealloc;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityActivate;
-(void)setMapType:(long long)arg1 ;
-(void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(void)mapLabelsDidLayout:(id)arg1 ;
-(void)mapDidFinishLoadingTiles:(id)arg1 ;
-(void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapDidChangeVisibleRegion:(id)arg1 ;
-(void)mapDidStartLoadingTiles:(id)arg1 ;
-(id)initWithGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 inBackground:(BOOL)arg3 manifestConfiguration:(id)arg4 ;
-(void)accessibilityIncreaseTrackingDetail;
-(void)accessibilityDecreaseTrackingDetail;
-(void)_axUpdateElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)accessibilityContainerElements;
-(id)_accessibilityScrollStatus;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
@end

