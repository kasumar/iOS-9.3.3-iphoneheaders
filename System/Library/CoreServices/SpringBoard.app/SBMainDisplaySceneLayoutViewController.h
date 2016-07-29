/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutViewController.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@class SBMainDisplaySceneLayoutGestureManager, UIView, NSMutableArray, FBUIApplicationSceneDeactivationAssertion, SBAppStatusBarSettingsAssertion, NSString, SBMainDisplayLayoutState, SBLayoutElementViewController;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <BSTransactionObserver> {

	SBMainDisplaySceneLayoutGestureManager* _layoutGestureManager;
	UIView* _layoutOrientedAdornmentContainer;
	UIView* _breadcrumbClippingView;
	unsigned long long _disableSubviewReorderingCount;
	NSMutableArray* _recoilRequesters;
	FBUIApplicationSceneDeactivationAssertion* _overlayDeactivationAssertion;
	SBAppStatusBarSettingsAssertion* _hideSpringBoardStatusBarAssertion;
	NSString* _preventIconRotationReason;
	UIView* _capturedSnapshotView;

}

@property (nonatomic,readonly) SBMainDisplayLayoutState * layoutState; 
@property (nonatomic,readonly) SBLayoutElementViewController * sideLayoutElementController; 
@property (nonatomic,readonly) SBLayoutElementViewController * breadcrumbLayoutElementController; 
@property (nonatomic,readonly) BOOL shouldReverseLayoutDirection; 
@property (nonatomic,retain) UIView * capturedSnapshotView;                                                    //@synthesize capturedSnapshotView=_capturedSnapshotView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutStateClass;
+(BOOL)getAnchorEdge:(out unsigned*)arg1 forLayoutRole:(long long)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
+(unsigned)convertAnchorEdge:(unsigned)arg1 toLayoutOrientation:(long long)arg2 ;
-(double)normalizedSuspendPrimaryLocation;
-(double)normalizedSuspendSideLocation;
-(BOOL)handleMenuButtonPress;
-(id)_newSideSwitcherDynamicAnimationForPresenting:(BOOL)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 ;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(id)appViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3 hostRequester:(id)arg4 ;
-(void)_popSideAppControllerWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pushSideAppControllerForSwitcher:(id)arg1 withAnimationSettings:(id)arg2 fadeIn:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_beginLayoutStateTransitionWithContext:(id)arg1 ;
-(id)_adornmentView;
-(SBLayoutElementViewController *)sideLayoutElementController;
-(CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(id)adornmentViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3 ;
-(CGSize)_referenceSizeForRole:(long long)arg1 withLayoutContext:(id)arg2 ;
-(CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_presentationChangesSignificantlyOnTransitioningFromLayoutElement:(id)arg1 toLayoutElement:(id)arg2 ;
-(void)_layoutElementViewController:(id)arg1 transitioningFromLayoutElement:(id)arg2 toLayoutElement:(id)arg3 ;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithContext:(id)arg1 ;
-(BOOL)_shouldRepositionViewAfterTransition:(id)arg1 ;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition:(id)arg1 ;
-(long long)_dimmingLevelForElement:(id)arg1 inLayout:(id)arg2 ;
-(BOOL)_shouldRotateToLayoutOrientation:(long long)arg1 ;
-(BOOL)shouldAllowSwipeInDimmingViewAtStartLocation:(CGPoint)arg1 forLayoutElementViewController:(id)arg2 ;
-(void)layoutElementViewController:(id)arg1 configureDisplayLayoutElement:(id)arg2 ;
-(BOOL)shouldPerformFullscreenAnimationForTransitionRequest:(id)arg1 ;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(id)composedAnimationControllerForZoomingDownWithTransitionRequest:(id)arg1 using:(id)arg2 ;
-(id)composedAnimationControllerForDosidoWithTransitionRequest:(id)arg1 using:(id)arg2 ;
-(CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(id)sideSwitcherRevealGesture;
-(void)appViewControllerPreferredLayoutLevelDidChange:(id)arg1 ;
-(double)_separatorWidth;
-(id)composedAnimationControllerForZoomingUpWithTransitionRequest:(id)arg1 using:(id)arg2 ;
-(double)_normalizedNarrowAppLocation;
-(double)_normalizedHalfScreenAppLocation;
-(BOOL)_canResizeToHalfScreen;
-(double)_layoutWidthForLayoutRole:(long long)arg1 withSideAppPresentationStyle:(long long)arg2 sideAppWidth:(long long)arg3 ;
-(unsigned)layoutSpaceAnchorEdgeForPrimaryLayoutRole;
-(unsigned)layoutSpaceAnchorEdgeForSideLayoutRole;
-(double)_layoutWidthForLayoutRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(SBLayoutElementViewController *)breadcrumbLayoutElementController;
-(unsigned)anchorEdgeForSideLayoutRole;
-(CGRect)_visibleReferenceFrameForElement:(id)arg1 inLayoutState:(id)arg2 ;
-(double)_distanceFromEdgeForSideAppView;
-(id)_newSideAppDynamicAnimationForTargetValue:(double)arg1 startValue:(double)arg2 withInitialVelocity:(double)arg3 ;
-(CGAffineTransform)_slidingTransformForSideAppViewWithNewDistance:(double)arg1 ;
-(CGRect)_layoutFrameForSize:(CGSize)arg1 withRole:(long long)arg2 inLayoutState:(id)arg3 ;
-(void)_layoutAdornmentContainer;
-(CGAffineTransform)_transformForHidingElementWithRole:(long long)arg1 frame:(CGRect)arg2 baseTransform:(CGAffineTransform)arg3 withLayoutState:(id)arg4 ;
-(id)_newSideSwitcherDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3 ;
-(void)setRecoil:(BOOL)arg1 amount:(double)arg2 forPriority:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(void)_recoilByHighestPriorityWithAnimationFactory:(id)arg1 ;
-(BOOL)getAnchorEdge:(out unsigned*)arg1 forLayoutRole:(long long)arg2 ;
-(unsigned)anchorEdgeForPrimaryLayoutRole;
-(CGSize)_referenceSizeForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(CGSize)_referenceSizeForLayoutElement:(id)arg1 inLayoutState:(id)arg2 ;
-(CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_updateBackgroundViewForLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 ;
-(void)_dropResignActiveAssertionForEndingLayoutStateTransition;
-(void)_stopSuppressingKeyboardForEndingLayoutStateTransition;
-(void)_acquireOrReleaseHideSpringBoardStatusBarAssertionIfNecessary;
-(void)_acquireOrReleaseOrientationLockIfNecessary;
-(void)_updateWallpaperStyle;
-(void)_checkSubviewOrdering;
-(id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideOverlaySlideInAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideAppPopOffAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideAppMakePrimaryAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideSwitcherPresentationAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideSwitcherDismissalAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_sideAppPresentationAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2 ;
-(id)_primaryAppPopOffAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_primaryAppSlideOverAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_zoomDownAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2 ;
-(id)_sideAppDismissalAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2 ;
-(id)_animationSettingsForPushAndPopWithDuration:(double)arg1 ;
-(void)popLayoutElementViewControllerWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushLayoutElementViewController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pushSideAppOverlayController:(id)arg1 dimOtherViews:(BOOL)arg2 withAnimationSettings:(id)arg3 fadeIn:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(UIView *)capturedSnapshotView;
-(void)_disableSubviewReordering;
-(void)setCapturedSnapshotView:(UIView *)arg1 ;
-(void)_reenableSubviewReordering;
-(id)_newSidePullDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3 unitSize:(double)arg4 ;
-(void)_slideOutSideAppWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeOutSideAppWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeOutLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animateOutLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_animateInLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fadeInLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animateLayoutElementViewController:(id)arg1 withAnimationSettings:(id)arg2 precondition:(/*^block*/id)arg3 animationBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned)anchorEdgeForLayoutRole:(long long)arg1 ;
-(double)_defaultWidthForSideApp;
-(unsigned long long)_edgeToAlignLayoutFrameForRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(CGSize)_layoutSizeForRole:(long long)arg1 withLayoutContext:(id)arg2 ;
-(CGRect)_visibleLayoutFrameForElement:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_appViewShouldHandleBackgroundStyleForLayoutElement:(id)arg1 ;
-(void)_recoilMainSceneLayout:(double)arg1 withAnimationFactory:(id)arg2 ;
-(void)_pushSideAppOverlayController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_makeSideAppControllerPrimaryWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_transitionToOrFromSideSwitcherForPresenting:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeOutScenesForZoomDownWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_slideOutScenesForZoomDownWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeInSideAppWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_slideInSideAppWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRecoil:(BOOL)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(unsigned)convertAnchorEdgeToLayoutOrientation:(unsigned)arg1 ;
-(void)popLayoutElementViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)pushLayoutElementViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_startClippingbreadcrumbLayoutElementController:(id)arg1 ;
-(void)_stopClippingbreadcrumbLayoutElementController:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(long long)_overrideInterfaceOrientationMechanics;
-(void)viewWillLayoutSubviews;
-(SBMainDisplayLayoutState *)layoutState;
-(id)initWithDisplay:(id)arg1 ;
-(BOOL)shouldReverseLayoutDirection;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)handleDimmingViewTapForLayoutElementViewController:(id)arg1 ;
@end

