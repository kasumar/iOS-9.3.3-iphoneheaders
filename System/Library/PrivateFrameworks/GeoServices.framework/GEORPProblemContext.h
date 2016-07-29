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

@class NSMutableArray, GEOABExperimentResponse, GEORPCurrentEnvironmentManifestURLs, NSString, GEORPMapLocation, GEOPlace, GEOPDPlace, GEORPPlaceInfo, GEORPTransitLineTileInfo;

@interface GEORPProblemContext : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	double _creationDate;
	unsigned long long _originatingAuxiliaryControlIndex;
	NSMutableArray* _autocompleteSuggestionLists;
	NSMutableArray* _auxiliaryControls;
	GEOABExperimentResponse* _currentAbAssignmentResponse;
	GEORPCurrentEnvironmentManifestURLs* _currentEnvironmentManifestUrls;
	int _deviceGmtOffset;
	NSMutableArray* _directionsRequests;
	NSMutableArray* _directionsResponses;
	NSMutableArray* _directionsWaypointPlaceInfos;
	NSString* _lastSearchString;
	NSString* _lastUserTypedSearchString;
	GEORPMapLocation* _mapLocation;
	GEOPlace* _originalPlace;
	int _pinType;
	GEOPDPlace* _place;
	GEORPPlaceInfo* _placeInfo;
	NSString* _tileStateLog;
	GEORPTransitLineTileInfo* _transitLineTileInfo;
	NSMutableArray* _visibleTileSets;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                                                          //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasPinType; 
@property (assign,nonatomic) int pinType;                                                                       //@synthesize pinType=_pinType - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalPlace; 
@property (nonatomic,retain) GEOPlace * originalPlace;                                                          //@synthesize originalPlace=_originalPlace - In the implementation block
@property (nonatomic,readonly) BOOL hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation;                                                    //@synthesize mapLocation=_mapLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleTileSets;                                                  //@synthesize visibleTileSets=_visibleTileSets - In the implementation block
@property (nonatomic,readonly) BOOL hasTileStateLog; 
@property (nonatomic,retain) NSString * tileStateLog;                                                           //@synthesize tileStateLog=_tileStateLog - In the implementation block
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place;                                                                //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsRequests;                                               //@synthesize directionsRequests=_directionsRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsResponses;                                              //@synthesize directionsResponses=_directionsResponses - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSearchString; 
@property (nonatomic,retain) NSString * lastSearchString;                                                       //@synthesize lastSearchString=_lastSearchString - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                                                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryControls;                                                //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (assign,nonatomic) BOOL hasOriginatingAuxiliaryControlIndex; 
@property (assign,nonatomic) unsigned long long originatingAuxiliaryControlIndex;                               //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineTileInfo; 
@property (nonatomic,retain) GEORPTransitLineTileInfo * transitLineTileInfo;                                    //@synthesize transitLineTileInfo=_transitLineTileInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEORPPlaceInfo * placeInfo;                                                        //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasLastUserTypedSearchString; 
@property (nonatomic,retain) NSString * lastUserTypedSearchString;                                              //@synthesize lastUserTypedSearchString=_lastUserTypedSearchString - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceGmtOffset; 
@property (assign,nonatomic) int deviceGmtOffset;                                                               //@synthesize deviceGmtOffset=_deviceGmtOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentAbAssignmentResponse; 
@property (nonatomic,retain) GEOABExperimentResponse * currentAbAssignmentResponse;                             //@synthesize currentAbAssignmentResponse=_currentAbAssignmentResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * autocompleteSuggestionLists;                                      //@synthesize autocompleteSuggestionLists=_autocompleteSuggestionLists - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentEnvironmentManifestUrls; 
@property (nonatomic,retain) GEORPCurrentEnvironmentManifestURLs * currentEnvironmentManifestUrls;              //@synthesize currentEnvironmentManifestUrls=_currentEnvironmentManifestUrls - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsWaypointPlaceInfos;                                     //@synthesize directionsWaypointPlaceInfos=_directionsWaypointPlaceInfos - In the implementation block
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
-(SCD_Struct_GE4)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasCreationDate;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1 ;
-(GEORPPlaceInfo *)placeInfo;
-(NSString *)tileStateLog;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(unsigned long long)autocompleteSuggestionListsCount;
-(void)setTransitLineTileInfo:(GEORPTransitLineTileInfo *)arg1 ;
-(void)clearVisibleTileSets;
-(void)addVisibleTileSet:(id)arg1 ;
-(NSMutableArray *)visibleTileSets;
-(GEORPTransitLineTileInfo *)transitLineTileInfo;
-(void)addAutocompleteSuggestionList:(id)arg1 ;
-(BOOL)hasTileStateLog;
-(GEORPMapLocation *)mapLocation;
-(BOOL)hasCurrentEnvironmentManifestUrls;
-(void)setCurrentAbAssignmentResponse:(GEOABExperimentResponse *)arg1 ;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(BOOL)hasMapLocation;
-(id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCurrentAbAssignmentResponse;
-(id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1 ;
-(id)directionsRequestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsWaypointPlaceInfosCount;
-(void)addDirectionsWaypointPlaceInfo:(id)arg1 ;
-(GEOPlace *)originalPlace;
-(NSMutableArray *)auxiliaryControls;
-(void)addAuxiliaryControl:(id)arg1 ;
-(unsigned long long)directionsRequestsCount;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(void)setHasDeviceGmtOffset:(BOOL)arg1 ;
-(NSMutableArray *)directionsWaypointPlaceInfos;
-(void)clearDirectionsResponses;
-(BOOL)hasDeviceGmtOffset;
-(void)setAutocompleteSuggestionLists:(NSMutableArray *)arg1 ;
-(void)setVisibleTileSets:(NSMutableArray *)arg1 ;
-(void)clearAutocompleteSuggestionLists;
-(GEORPCurrentEnvironmentManifestURLs *)currentEnvironmentManifestUrls;
-(BOOL)hasLastSearchString;
-(void)setDeviceGmtOffset:(int)arg1 ;
-(void)setLastUserTypedSearchString:(NSString *)arg1 ;
-(void)clearDirectionsRequests;
-(void)clearDirectionsWaypointPlaceInfos;
-(void)addDirectionsRequest:(id)arg1 ;
-(NSMutableArray *)autocompleteSuggestionLists;
-(NSString *)lastSearchString;
-(void)setLastSearchString:(NSString *)arg1 ;
-(void)setHasPinType:(BOOL)arg1 ;
-(BOOL)hasPlaceInfo;
-(id)directionsResponseAtIndex:(unsigned long long)arg1 ;
-(void)clearAuxiliaryControls;
-(unsigned long long)directionsResponsesCount;
-(BOOL)hasOriginalPlace;
-(void)setPlaceInfo:(GEORPPlaceInfo *)arg1 ;
-(void)setCurrentEnvironmentManifestUrls:(GEORPCurrentEnvironmentManifestURLs *)arg1 ;
-(BOOL)hasLastUserTypedSearchString;
-(void)setTileStateLog:(NSString *)arg1 ;
-(BOOL)hasPinType;
-(void)addDirectionsResponse:(id)arg1 ;
-(NSMutableArray *)directionsResponses;
-(GEOABExperimentResponse *)currentAbAssignmentResponse;
-(NSMutableArray *)directionsRequests;
-(int)deviceGmtOffset;
-(BOOL)hasTransitLineTileInfo;
-(unsigned long long)visibleTileSetsCount;
-(void)setOriginalPlace:(GEOPlace *)arg1 ;
-(void)setAuxiliaryControls:(NSMutableArray *)arg1 ;
-(int)pinType;
-(id)auxiliaryControlAtIndex:(unsigned long long)arg1 ;
-(id)visibleTileSetAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlace;
-(void)setHasOriginatingAuxiliaryControlIndex:(BOOL)arg1 ;
-(unsigned long long)auxiliaryControlsCount;
-(NSString *)lastUserTypedSearchString;
-(BOOL)hasOriginatingAuxiliaryControlIndex;
-(void)setDirectionsWaypointPlaceInfos:(NSMutableArray *)arg1 ;
-(void)setPinType:(int)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
@end

