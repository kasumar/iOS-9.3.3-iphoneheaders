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

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _brands;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _steps;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;

}

@property (nonatomic,retain) NSMutableArray * stations;                             //@synthesize stations=_stations - In the implementation block
@property (nonatomic,retain) NSMutableArray * brands;                               //@synthesize brands=_brands - In the implementation block
@property (nonatomic,retain) NSMutableArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                         //@synthesize accessPoints=_accessPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * walkings;                             //@synthesize walkings=_walkings - In the implementation block
@property (nonatomic,retain) NSMutableArray * stops;                                //@synthesize stops=_stops - In the implementation block
@property (nonatomic,retain) NSMutableArray * zilchPoints;                          //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                              //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidents;                     //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * halls;                                //@synthesize halls=_halls - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                             //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages;              //@synthesize transitIncidentMessages=_transitIncidentMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                //@synthesize steps=_steps - In the implementation block
-(id)artworkFromIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
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
-(NSMutableArray *)zilchPoints;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)stepsCount;
-(NSMutableArray *)steps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)clearSteps;
-(void)addStep:(id)arg1 ;
-(unsigned long long)systemsCount;
-(NSMutableArray *)systems;
-(unsigned long long)linesCount;
-(NSMutableArray *)lines;
-(void)clearSystems;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(void)clearLines;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)addSystem:(id)arg1 ;
-(void)addLine:(id)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(void)addTransitIncident:(id)arg1 ;
-(NSMutableArray *)transitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)clearTransitIncidents;
-(unsigned long long)transitIncidentsCount;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)artworksCount;
-(NSMutableArray *)artworks;
-(void)clearArtworks;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(id)brandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)brands;
-(NSMutableArray *)transitIncidentMessages;
-(unsigned long long)brandsCount;
-(void)addAccessPoint:(id)arg1 ;
-(id)accessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stations;
-(void)clearHalls;
-(void)clearStations;
-(unsigned long long)accessPointsCount;
-(unsigned long long)stopsCount;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)halls;
-(void)addHall:(id)arg1 ;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(void)addStation:(id)arg1 ;
-(void)clearBrands;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(void)setStations:(NSMutableArray *)arg1 ;
-(unsigned long long)stationsCount;
-(unsigned long long)hallsCount;
-(void)clearAccessPoints;
-(id)hallAtIndex:(unsigned long long)arg1 ;
-(void)clearStops;
-(void)addBrand:(id)arg1 ;
-(id)transitIncidentMessageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitIncidentMessagesCount;
-(void)clearZilchPoints;
-(id)stationAtIndex:(unsigned long long)arg1 ;
-(id)walkingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)walkingsCount;
-(void)addZilchPoints:(id)arg1 ;
-(void)addWalking:(id)arg1 ;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(void)setBrands:(NSMutableArray *)arg1 ;
-(void)setStops:(NSMutableArray *)arg1 ;
-(void)addStop:(id)arg1 ;
-(id)zilchPointsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)walkings;
-(void)clearTransitIncidentMessages;
-(unsigned long long)zilchPointsCount;
-(NSMutableArray *)stops;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(NSMutableArray *)accessPoints;
-(void)clearWalkings;
@end

