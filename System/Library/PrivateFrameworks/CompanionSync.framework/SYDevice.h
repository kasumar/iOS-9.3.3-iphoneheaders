/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@class NRDevice, NSUUID, NSString;

@interface SYDevice : NSObject <NRDevicePropertyObserver> {

	NRDevice* _nrDevice;
	NSUUID* _pairingID;
	long long _state;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (getter=isTargetable,nonatomic,readonly) BOOL targetable; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * pairingStorePath; 
@property (nonatomic,readonly) NSUUID * pairingID;                               //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,readonly) NSString * deviceClass; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * systemBuildVersion; 
@property (nonatomic,readonly) NRDevice * nrDevice;                              //@synthesize nrDevice=_nrDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)targetableDevice;
+(id)knownDevices;
+(id)deviceForNRDevice:(id)arg1 ;
+(id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2 ;
+(id)deviceForIDSDevice:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(long long)state;
-(BOOL)isActive;
-(void)setState:(long long)arg1 ;
-(NSString *)systemVersion;
-(NSString *)deviceClass;
-(NSString *)systemBuildVersion;
-(NSString *)pairingStorePath;
-(NSUUID *)pairingID;
-(BOOL)isTargetable;
-(id)initWithNRDevice:(id)arg1 ;
-(NRDevice *)nrDevice;
-(void)_updateStateFlagsPostingNotifications:(BOOL)arg1 ;
-(id)findMatchingIDSDeviceFromList:(id)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(BOOL)isPaired;
@end

