/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriSessionLocalDelegate <NSObject>
@required
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
-(void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg1;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1;
-(void)siriSessionDidResetContext:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)siriSessionCanEnd:(id)arg1;
-(void)siriSessionWillEnd:(id)arg1;
-(void)siriSessionDidEnd:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2;

@end

