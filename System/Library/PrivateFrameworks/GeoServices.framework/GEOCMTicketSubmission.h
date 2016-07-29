/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEORPProblemContext, GEORPProblemCorrections, NSString;

@interface GEOCMTicketSubmission : PBCodable <NSCopying> {

	SCD_Struct_GE1* _userPaths;
	NSData* _devicePushToken;
	GEORPProblemContext* _problemContext;
	GEORPProblemCorrections* _problemCorrections;
	int _problemType;
	NSString* _userEmail;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned long long userPathsCount; 
@property (nonatomic,readonly) int* userPaths; 
@property (assign,nonatomic) BOOL hasProblemType; 
@property (assign,nonatomic) int problemType;                                           //@synthesize problemType=_problemType - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemCorrections; 
@property (nonatomic,retain) GEORPProblemCorrections * problemCorrections;              //@synthesize problemCorrections=_problemCorrections - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemContext; 
@property (nonatomic,retain) GEORPProblemContext * problemContext;                      //@synthesize problemContext=_problemContext - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                                  //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                      //@synthesize userEmail=_userEmail - In the implementation block
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
-(BOOL)hasProblemContext;
-(NSData *)devicePushToken;
-(void)setUserEmail:(NSString *)arg1 ;
-(GEORPProblemContext *)problemContext;
-(BOOL)hasProblemCorrections;
-(NSString *)userEmail;
-(int)problemType;
-(GEORPProblemCorrections *)problemCorrections;
-(int)userPathAtIndex:(unsigned long long)arg1 ;
-(int*)userPaths;
-(unsigned long long)userPathsCount;
-(void)setProblemContext:(GEORPProblemContext *)arg1 ;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)addUserPath:(int)arg1 ;
-(void)setUserPaths:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasProblemType;
-(BOOL)hasUserEmail;
-(void)setHasProblemType:(BOOL)arg1 ;
-(void)clearUserPaths;
-(void)setProblemCorrections:(GEORPProblemCorrections *)arg1 ;
-(BOOL)hasDevicePushToken;
-(void)setProblemType:(int)arg1 ;
@end

