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

@class GEOCompanionDriveStep, GEOCompanionFerryStep, NSString, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <NSCopying> {

	unsigned _distance;
	GEOCompanionDriveStep* _driveStep;
	unsigned _endCoordinateIndex;
	GEOCompanionFerryStep* _ferryStep;
	unsigned _maneuverStartCoordinateIndex;
	NSString* _roadName;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	GEOCompanionWalkStep* _walkStep;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                    //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time;                                      //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadName; 
@property (nonatomic,retain) NSString * roadName;                                //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasDriveStep; 
@property (nonatomic,retain) GEOCompanionDriveStep * driveStep;                  //@synthesize driveStep=_driveStep - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkStep; 
@property (nonatomic,retain) GEOCompanionWalkStep * walkStep;                    //@synthesize walkStep=_walkStep - In the implementation block
@property (nonatomic,readonly) BOOL hasFerryStep; 
@property (nonatomic,retain) GEOCompanionFerryStep * ferryStep;                  //@synthesize ferryStep=_ferryStep - In the implementation block
@property (assign,nonatomic) BOOL hasStartCoordinateIndex; 
@property (assign,nonatomic) unsigned startCoordinateIndex;                      //@synthesize startCoordinateIndex=_startCoordinateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverStartCoordinateIndex; 
@property (assign,nonatomic) unsigned maneuverStartCoordinateIndex;              //@synthesize maneuverStartCoordinateIndex=_maneuverStartCoordinateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEndCoordinateIndex; 
@property (assign,nonatomic) unsigned endCoordinateIndex;                        //@synthesize endCoordinateIndex=_endCoordinateIndex - In the implementation block
-(id)geoStep;
-(id)maneuverStep;
-(id)initWithStep:(id)arg1 route:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(unsigned)time;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(BOOL)hasDistance;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(BOOL)hasStartCoordinateIndex;
-(unsigned)endCoordinateIndex;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(BOOL)hasEndCoordinateIndex;
-(void)setHasTime:(BOOL)arg1 ;
-(unsigned)maneuverStartCoordinateIndex;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(unsigned)startCoordinateIndex;
-(BOOL)hasDriveStep;
-(void)setHasStartCoordinateIndex:(BOOL)arg1 ;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(void)setHasEndCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasRoadName;
-(BOOL)hasTime;
-(BOOL)hasManeuverStartCoordinateIndex;
-(BOOL)hasWalkStep;
-(GEOCompanionFerryStep *)ferryStep;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(GEOCompanionDriveStep *)driveStep;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(GEOCompanionWalkStep *)walkStep;
-(void)setHasManeuverStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasFerryStep;
@end

