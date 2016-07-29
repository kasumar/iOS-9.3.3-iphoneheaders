/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>

@class NSNumber, CBPeripheral, HAPAccessoryServerBrowserBTLE;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer {

	NSNumber* _stateNumber;
	CBPeripheral* _peripheral;
	unsigned long long _hapBLEProtocolVersion;
	unsigned long long _resumeSessionID;
	HAPAccessoryServerBrowserBTLE* _browser;

}

@property (nonatomic,retain) NSNumber * stateNumber;                                        //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                                   //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) unsigned long long hapBLEProtocolVersion;                    //@synthesize hapBLEProtocolVersion=_hapBLEProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long resumeSessionID;                          //@synthesize resumeSessionID=_resumeSessionID - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessoryServerBrowserBTLE * browser;              //@synthesize browser=_browser - In the implementation block
+(id)hapUUIDFromBTLEUUID:(id)arg1 ;
-(long long)linkType;
-(HAPAccessoryServerBrowserBTLE *)browser;
-(unsigned long long)resumeSessionID;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleConnectionWithError:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 browser:(id)arg7 keyStore:(id)arg8 ;
-(BOOL)updatePeripheralIdentifier:(id*)arg1 ;
-(BOOL)updateResumeSessionID:(unsigned long long)arg1 ;
-(unsigned long long)hapBLEProtocolVersion;
-(void)notifyDelegateUdpatedStateNumber;
-(CBPeripheral *)peripheral;
@end

