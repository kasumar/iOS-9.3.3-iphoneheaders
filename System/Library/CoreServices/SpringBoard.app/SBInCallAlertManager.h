/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject {

	SBRemoteAlertAdapter* _currentActiveInCallAlert;
	BOOL _endingCallForLockButtonPress;

}

@property (nonatomic,retain) SBRemoteAlertAdapter * currentActiveInCallAlert;                                      //@synthesize currentActiveInCallAlert=_currentActiveInCallAlert - In the implementation block
@property (assign,getter=isEndingCallForLockButtonPress,nonatomic) BOOL endingCallForLockButtonPress;              //@synthesize endingCallForLockButtonPress=_endingCallForLockButtonPress - In the implementation block
+(id)sharedInstance;
-(BOOL)isEndingCallForLockButtonPress;
-(void)maybeLockUIAfterCallEnded;
-(void)setEndingCallForLockButtonPress:(BOOL)arg1 ;
-(SBRemoteAlertAdapter *)currentActiveInCallAlert;
-(void)setCurrentActiveInCallAlert:(SBRemoteAlertAdapter *)arg1 ;
-(void)reactivateAlertFromStatusBarTap;
-(void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1 ;
-(void)reactivateAlertFromLockScreenWithUIUnlock:(BOOL)arg1 disableAnimatedTransition:(BOOL)arg2 ;
-(void)reactivateAlertForLockButtonPress;
-(id)init;
@end

