/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSContinuity;

@interface IDSContinuity : NSObject {

	_IDSContinuity* _internal;

}

@property (readonly) long long state; 
-(void)dealloc;
-(long long)state;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

