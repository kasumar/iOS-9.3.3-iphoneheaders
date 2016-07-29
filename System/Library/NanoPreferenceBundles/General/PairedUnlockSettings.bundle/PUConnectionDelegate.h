/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUConnectionDelegate <NSObject>
@optional
-(void)unlockConnection:(id)arg1 didPairForUnlock:(BOOL)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didUnpairForUnlock:(BOOL)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didEnableOnlyRemoteUnlock:(BOOL)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 didDisableOnlyRemoteUnlock:(BOOL)arg2 error:(id)arg3;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(BOOL)arg2 error:(id)arg3;
-(void)unlockConnectionRemoteDeviceDidUnlock:(id)arg1;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(BOOL)arg2 isPasscodeLocked:(BOOL)arg3 isUnlockOnly:(BOOL)arg4;

@end

