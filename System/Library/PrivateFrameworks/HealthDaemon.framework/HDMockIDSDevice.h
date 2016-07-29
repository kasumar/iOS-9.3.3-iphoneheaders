/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface HDMockIDSDevice : NSObject <NSCopying> {

	BOOL _isActive;
	NSUUID* _nanoRegistryPairingID;
	NSUUID* _nsuuid;
	NSString* _uniqueIDOverride;
	NSString* _service;
	NSString* _name;
	NSString* _productBuildVersion;

}

@property (nonatomic,retain) NSUUID * nanoRegistryPairingID;              //@synthesize nanoRegistryPairingID=_nanoRegistryPairingID - In the implementation block
@property (nonatomic,retain) NSUUID * nsuuid;                             //@synthesize nsuuid=_nsuuid - In the implementation block
@property (nonatomic,copy) NSString * uniqueIDOverride;                   //@synthesize uniqueIDOverride=_uniqueIDOverride - In the implementation block
@property (nonatomic,copy) NSString * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * productBuildVersion;                //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (assign,nonatomic) BOOL isActive;                               //@synthesize isActive=_isActive - In the implementation block
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(NSString *)uniqueIDOverride;
-(id)hd_deviceIdentifier;
-(id)hd_destinationIdentifier;
-(BOOL)hd_isEquivalentToDevice:(id)arg1 ;
-(id)hd_shortDescription;
-(void)setUniqueIDOverride:(NSString *)arg1 ;
-(void)setNsuuid:(NSUUID *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(BOOL)isLocallyPaired;
-(BOOL)isDefaultPairedDevice;
-(NSUUID *)nanoRegistryPairingID;
-(void)setNanoRegistryPairingID:(NSUUID *)arg1 ;
-(NSUUID *)nsuuid;
-(NSString *)productBuildVersion;
@end
