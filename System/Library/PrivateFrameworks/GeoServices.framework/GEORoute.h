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

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _advisorys;
	SCD_Struct_GE59* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE59* _incidentIndices;
	SCD_Struct_GE59* _trafficColorOffsets;
	SCD_Struct_GE59* _trafficColors;
	NSMutableArray* _advisoryNotices;
	NSData* _arrivalRouteID;
	unsigned _arrivalStepID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	NSString* _name;
	NSString* _phoneticName;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	int _routeType;
	NSMutableArray* _steps;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	SCD_Struct_GE66 _has;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                            //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                           //@synthesize phoneticName=_phoneticName - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                 //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                                  //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasRouteType; 
@property (assign,nonatomic) int routeType;                                                     //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                              //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                                   //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID;                                         //@synthesize departureRouteID=_departureRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID;                                          //@synthesize departureStepID=_departureStepID - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID;                                           //@synthesize arrivalRouteID=_arrivalRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID;                                            //@synthesize arrivalStepID=_arrivalStepID - In the implementation block
@property (nonatomic,readonly) BOOL hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints;                                              //@synthesize basicPoints=_basicPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisoryNotices;                                  //@synthesize advisoryNotices=_advisoryNotices - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames;                                       //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                                       //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned long long advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                             //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                           //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
@property (nonatomic,readonly) BOOL hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices;                                   //@synthesize unpackedLatLngVertices=_unpackedLatLngVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned long long incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
-(id)maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)instructionsForStep:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)stepIndexForPointIndex:(unsigned)arg1 ;
-(SCD_Struct_GE16)pointAt:(unsigned)arg1 ;
-(unsigned)pointCount;
-(int)transportTypeForStep:(id)arg1 ;
-(void*)controlPoints;
-(BOOL)unpackZilchPoints;
-(unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2 ;
-(BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(BOOL)unpackLatLngVertices;
-(id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2 ;
-(id)newETARoute;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(NSRange*)arg3 ;
-(unsigned long long)indexForStepID:(unsigned long long)arg1 ;
-(id)simplifiedDescription;
-(BOOL)unpackBasicPoints;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)zilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(BOOL)hasZilchPoints;
-(int)drivingSide;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setPhoneticName:(NSString *)arg1 ;
-(NSString *)phoneticName;
-(BOOL)hasPhoneticName;
-(BOOL)hasName;
-(BOOL)hasUnpackedLatLngVertices;
-(void)setRouteNames:(NSMutableArray *)arg1 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)clearAdvisoryNotices;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(NSData *)unpackedLatLngVertices;
-(BOOL)hasArrivalStepID;
-(void)clearTrafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)travelTimeConservativeEstimate;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)clearIncidentEndOffsetsInRoutes;
-(BOOL)hasBasicPoints;
-(void)setArrivalRouteID:(NSData *)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(int)routeType;
-(BOOL)hasDepartureStepID;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)trafficColorsCount;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)expectedTime;
-(void)clearAdvisorys;
-(unsigned)historicTravelTime;
-(void)setRouteType:(int)arg1 ;
-(BOOL)hasArrivalRouteID;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(void)setHasRouteType:(BOOL)arg1 ;
-(void)setUnpackedLatLngVertices:(NSData *)arg1 ;
-(unsigned long long)incidentEndOffsetsInRoutesCount;
-(unsigned*)trafficColorOffsets;
-(unsigned)distance;
-(void)setDepartureRouteID:(NSData *)arg1 ;
-(NSMutableArray *)routeNames;
-(void)clearTrafficColors;
-(BOOL)hasDepartureRouteID;
-(int)advisoryAtIndex:(unsigned long long)arg1 ;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(int*)advisorys;
-(void)clearIncidentIndices;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)addAdvisoryNotice:(id)arg1 ;
-(NSMutableArray *)advisoryNotices;
-(BOOL)hasDistance;
-(void)setHasDepartureStepID:(BOOL)arg1 ;
-(unsigned long long)stepsCount;
-(unsigned)arrivalStepID;
-(unsigned long long)routeNamesCount;
-(void)setAdvisoryNotices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)steps;
-(void)addAdvisory:(int)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSData *)basicPoints;
-(id)routeNameAtIndex:(unsigned long long)arg1 ;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(NSData *)arrivalRouteID;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(void)setHasArrivalStepID:(BOOL)arg1 ;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)incidentIndicesCount;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(id)advisoryNoticeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(unsigned long long)advisoryNoticesCount;
-(unsigned*)trafficColors;
-(unsigned*)incidentIndices;
-(BOOL)hasExpectedTime;
-(unsigned)incidentIndicesAtIndex:(unsigned long long)arg1 ;
-(void)clearSteps;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned long long)advisorysCount;
-(BOOL)hasDrivingSide;
-(NSData *)departureRouteID;
-(void)clearRouteNames;
-(void)setBasicPoints:(NSData *)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(unsigned)departureStepID;
-(void)addStep:(id)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasRouteType;
@end

