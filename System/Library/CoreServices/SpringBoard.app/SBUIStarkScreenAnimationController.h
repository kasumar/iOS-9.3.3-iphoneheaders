/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController {

	SBStarkScreenController* _starkScreenController;

}

@property (nonatomic,readonly) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(SBStarkScreenController *)starkScreenController;
-(id)initWithTransitionContextProvider:(id)arg1 starkScreenController:(id)arg2 ;
-(void)__startAnimation;
-(id)__waitForAppActivationTransactionForApplication:(id)arg1 ;
-(BOOL)__wantsInitialProgressStateChange;
@end

