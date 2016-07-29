/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableProvenance : PBCodable <NSCopying> {

	NSData* _deviceUUID;
	NSString* _originBuild;
	NSString* _originDevice;
	NSData* _sourceUUID;
	NSString* _sourceVersion;

}

@property (nonatomic,readonly) BOOL hasOriginBuild; 
@property (nonatomic,retain) NSString * originBuild;                //@synthesize originBuild=_originBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginDevice; 
@property (nonatomic,retain) NSString * originDevice;               //@synthesize originDevice=_originDevice - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                   //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceUUID; 
@property (nonatomic,retain) NSData * deviceUUID;                   //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) NSString * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
-(id)decodedSourceUUID;
-(id)decodedDeviceUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSourceVersion;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setSourceUUID:(NSData *)arg1 ;
-(BOOL)hasSourceUUID;
-(NSData *)sourceUUID;
-(void)setOriginBuild:(NSString *)arg1 ;
-(void)setOriginDevice:(NSString *)arg1 ;
-(void)setDeviceUUID:(NSData *)arg1 ;
-(BOOL)hasOriginBuild;
-(BOOL)hasOriginDevice;
-(BOOL)hasDeviceUUID;
-(NSString *)originBuild;
-(NSString *)originDevice;
-(NSData *)deviceUUID;
@end

