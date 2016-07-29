/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBWorkspaceApplication, SBWindowSelfHostWrapper, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationZoomDownAppsToAlert : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBWorkspaceApplication* _primaryApp;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

