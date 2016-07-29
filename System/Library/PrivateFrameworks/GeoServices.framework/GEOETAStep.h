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

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	unsigned _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	GEOTimeCheckpoints* _timeCheckpoints;
	int _zilchPointIndex;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) unsigned distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex;                               //@synthesize zilchPointIndex=_zilchPointIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
-(BOOL)hasDistanceRemaining;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(void)setDistanceRemaining:(unsigned)arg1 ;
-(unsigned)distanceRemaining;
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
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasTimeCheckpoints;
-(BOOL)hasStepID;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(BOOL)hasZilchPointIndex;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
@end

