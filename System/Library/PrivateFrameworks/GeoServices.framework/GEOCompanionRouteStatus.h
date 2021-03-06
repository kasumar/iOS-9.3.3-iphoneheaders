/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation, NSData, GEOLatLng, NSArray;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {

	SCD_Struct_GE59* _selectedRideIndexs;
	double _timestamp;
	unsigned _distanceRemainingOnRoute;
	unsigned _distanceToManeuver;
	unsigned _distanceToRoute;
	int _feedbackType;
	GEOLocation* _location;
	unsigned _remainingTime;
	NSData* _routeID;
	unsigned _routeLocationIndex;
	float _routeLocationOffset;
	GEOLatLng* _routeMatchCoordinate;
	unsigned _stepID;
	BOOL _guidancePromptsEnabled;
	SCD_Struct_GE66 _has;

}

@property (nonatomic,readonly) BOOL isPreviewingNavigation; 
@property (nonatomic,readonly) BOOL isNavigating; 
@property (nonatomic,readonly) BOOL hasEffectiveStepID; 
@property (nonatomic,readonly) unsigned effectiveStepID; 
@property (nonatomic,readonly) BOOL hasEffectiveDistanceToManeuver; 
@property (nonatomic,readonly) unsigned effectiveDistanceToManeuver; 
@property (nonatomic,readonly) NSArray * selectedRideIndices; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                                          //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                           //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) unsigned distanceToManeuver;                               //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToRoute; 
@property (assign,nonatomic) unsigned distanceToRoute;                                  //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceRemainingOnRoute; 
@property (assign,nonatomic) unsigned distanceRemainingOnRoute;                         //@synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute - In the implementation block
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) unsigned remainingTime;                                    //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasRouteLocationIndex; 
@property (assign,nonatomic) unsigned routeLocationIndex;                               //@synthesize routeLocationIndex=_routeLocationIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRouteLocationOffset; 
@property (assign,nonatomic) float routeLocationOffset;                                 //@synthesize routeLocationOffset=_routeLocationOffset - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteMatchCoordinate; 
@property (nonatomic,retain) GEOLatLng * routeMatchCoordinate;                          //@synthesize routeMatchCoordinate=_routeMatchCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                          //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasGuidancePromptsEnabled; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                               //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedRideIndexsCount; 
@property (nonatomic,readonly) unsigned* selectedRideIndexs; 
-(BOOL)isNavigating;
-(void)updateWithRoute:(id)arg1 routeID:(id)arg2 ;
-(void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2 ;
-(id)initWithRouteID:(id)arg1 ;
-(id)initWithRoute:(id)arg1 routeID:(id)arg2 ;
-(BOOL)isPreviewingNavigation;
-(BOOL)hasEffectiveStepID;
-(void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5 ;
-(unsigned)effectiveDistanceToManeuver;
-(NSArray *)selectedRideIndices;
-(BOOL)hasEffectiveDistanceToManeuver;
-(unsigned)effectiveStepID;
-(void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(unsigned)remainingTime;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(unsigned)distanceToRoute;
-(BOOL)guidancePromptsEnabled;
-(unsigned)distanceRemainingOnRoute;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(void)setDistanceRemainingOnRoute:(unsigned)arg1 ;
-(void)setDistanceToRoute:(unsigned)arg1 ;
-(void)setRemainingTime:(unsigned)arg1 ;
-(BOOL)hasFeedbackType;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(int)feedbackType;
-(GEOLatLng *)routeMatchCoordinate;
-(void)setRouteMatchCoordinate:(GEOLatLng *)arg1 ;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(void)setSelectedRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)routeLocationIndex;
-(BOOL)hasDistanceRemainingOnRoute;
-(float)routeLocationOffset;
-(void)setHasGuidancePromptsEnabled:(BOOL)arg1 ;
-(unsigned)distanceToManeuver;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(void)clearSelectedRideIndexs;
-(void)setRouteLocationIndex:(unsigned)arg1 ;
-(BOOL)hasRouteMatchCoordinate;
-(BOOL)hasRemainingTime;
-(void)setDistanceToManeuver:(unsigned)arg1 ;
-(void)addSelectedRideIndex:(unsigned)arg1 ;
-(void)setHasDistanceToRoute:(BOOL)arg1 ;
-(void)setRouteLocationOffset:(float)arg1 ;
-(BOOL)hasGuidancePromptsEnabled;
-(unsigned)selectedRideIndexAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(BOOL)hasRouteLocationIndex;
-(unsigned long long)selectedRideIndexsCount;
-(void)setHasRouteLocationIndex:(BOOL)arg1 ;
-(void)setHasDistanceRemainingOnRoute:(BOOL)arg1 ;
-(BOOL)hasRouteLocationOffset;
-(unsigned*)selectedRideIndexs;
-(BOOL)hasDistanceToRoute;
-(void)setHasRouteLocationOffset:(BOOL)arg1 ;
@end

