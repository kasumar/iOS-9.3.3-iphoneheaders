/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCarInfo, NSString;

@interface GEODeviceState : PBCodable <NSCopying> {

	GEOCarInfo* _carInfo;
	int _deviceBatteryState;
	NSString* _deviceCarrierName;
	int _deviceConnectivity;
	NSString* _deviceCountryCode;
	NSString* _deviceInputLocale;
	int _deviceInterfaceOrientation;
	NSString* _deviceLocale;
	NSString* _deviceOutputLocale;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceLocale; 
@property (nonatomic,retain) NSString * deviceLocale;                         //@synthesize deviceLocale=_deviceLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale;                    //@synthesize deviceInputLocale=_deviceInputLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale;                   //@synthesize deviceOutputLocale=_deviceOutputLocale - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceConnectivity; 
@property (assign,nonatomic) int deviceConnectivity;                          //@synthesize deviceConnectivity=_deviceConnectivity - In the implementation block
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;                            //@synthesize carInfo=_carInfo - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                  //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                          //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                    //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCarrierName; 
@property (nonatomic,retain) NSString * deviceCarrierName;                    //@synthesize deviceCarrierName=_deviceCarrierName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasCarInfo;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(GEOCarInfo *)carInfo;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(BOOL)hasDeviceBatteryState;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(int)deviceBatteryState;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(int)deviceInterfaceOrientation;
-(NSString *)deviceCarrierName;
-(NSString *)deviceInputLocale;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceLocale;
-(void)setDeviceConnectivity:(int)arg1 ;
-(NSString *)deviceLocale;
-(BOOL)hasDeviceInputLocale;
-(BOOL)hasDeviceCarrierName;
-(void)setHasDeviceConnectivity:(BOOL)arg1 ;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceOutputLocale;
-(NSString *)deviceOutputLocale;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
-(int)deviceConnectivity;
-(void)setDeviceLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceConnectivity;
@end

