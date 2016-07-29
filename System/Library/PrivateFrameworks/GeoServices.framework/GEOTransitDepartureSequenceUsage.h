/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	unsigned long long _lineId;
	NSString* _direction;
	NSString* _headsign;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;              //@synthesize lineId=_lineId - In the implementation block
@property (nonatomic,readonly) BOOL hasDirection; 
@property (nonatomic,retain) NSString * direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign;                    //@synthesize headsign=_headsign - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(NSString *)arg1 ;
-(NSString *)direction;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)lineId;
-(BOOL)hasLineId;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasHeadsign;
-(NSString *)headsign;
-(void)setHeadsign:(NSString *)arg1 ;
-(BOOL)hasDirection;
@end

