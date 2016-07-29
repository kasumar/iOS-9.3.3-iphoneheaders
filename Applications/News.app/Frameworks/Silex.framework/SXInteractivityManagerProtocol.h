/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SXComponentAnimationController, SXComponentBehaviorController, SXVideoController;


@protocol SXInteractivityManagerProtocol <NSObject>
@property (nonatomic,readonly) SXComponentAnimationController * animationController; 
@property (nonatomic,readonly) SXComponentBehaviorController * behaviorController; 
@property (nonatomic,readonly) SXVideoController * videoController; 
@property (nonatomic,readonly) CGSize documentSize; 
@required
-(SXComponentBehaviorController *)behaviorController;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(CGPoint*)currentContentOffset;
-(CGSize*)currentViewportSize;
-(BOOL)requestInteractivityFocusForComponent:(id)arg1;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(id)requestFullScreenCanvasForComponent:(id)arg1 canvasController:(id)arg2;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1;
-(id)presentingScrollView;
-(id)presentingContentViewController;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
-(void)maintainPositionOfViewWhileScrolling:(id)arg1;
-(void)releasePositionOfView:(id)arg1;
-(void)updateBehaviorForComponentView:(id)arg1;
-(long long)visiblityStateForComponentView:(id)arg1;
-(void)startSupplyingScrollOffsetUpdatesToComponentView:(id)arg1;
-(void)stopSupplyingScrollOffsetUpdatesToComponentView:(id)arg1;
-(BOOL)componentViewUsedInTransition:(id)arg1;
-(void)willTransitionToFullScreenComponentView:(id)arg1 animated:(BOOL)arg2;
-(void)didTransitionToFullScreenComponentView:(id)arg1 animated:(BOOL)arg2;
-(void)willTransitionFromFullScreenComponentView:(id)arg1 animated:(BOOL)arg2;
-(void)didTransitionFromFullScreenComponentView:(id)arg1 animated:(BOOL)arg2;
-(CGSize)documentSize;
-(SXComponentAnimationController *)animationController;
-(id)dynamicAnimator;
-(SXVideoController *)videoController;

@end

