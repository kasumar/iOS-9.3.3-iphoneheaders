/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SVDiscoveredServer : NSObject {

	NSString* _computerName;
	NSString* _hostName;
	NSString* _modelName;
	NSString* _address;
	NSString* _hardwareAddress;
	NSString* _operatingSystemVersion;

}

@property (nonatomic,retain) NSString * computerName;                        //@synthesize computerName=_computerName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                            //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSString * modelName;                           //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,retain) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * hardwareAddress;                     //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (nonatomic,retain) NSString * operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(id)discoveredServerWithNetService:(id)arg1 ;
-(void)setComputerName:(NSString *)arg1 ;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(NSString *)computerName;
-(void)setModelName:(NSString *)arg1 ;
-(void)setOperatingSystemVersion:(NSString *)arg1 ;
-(NSString *)hardwareAddress;
-(NSString *)operatingSystemVersion;
-(NSString *)hostName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)modelName;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setHostName:(NSString *)arg1 ;
-(id)initWithNetService:(id)arg1 ;
@end

