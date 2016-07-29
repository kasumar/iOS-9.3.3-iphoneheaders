/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOLocation, NSMutableArray, NSData, GEORouteAttributes, GEORouteSummaryAttributes, GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	SCD_Struct_GE61 _clientTimepoint;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	GEORouteAttributes* _routeAttributes;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	BOOL _includeBetterRouteSuggestion;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE63 _has;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) BOOL includeBetterRouteSuggestion;                                   //@synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                             //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                       //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (assign,nonatomic) BOOL hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings;                           //@synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) BOOL hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus;                                                   //@synthesize rerouteStatus=_rerouteStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(SCD_Struct_GE64)clientTimepoint;
-(BOOL)hasUseClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)useClientTimepointAsNow;
-(BOOL)hasClientTimepoint;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(void)setClientTimepoint:(SCD_Struct_GE64)arg1 ;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
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
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(BOOL)hasDirectionsResponseID;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(NSData *)sessionState;
-(BOOL)hasRouteAttributes;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setSessionState:(NSData *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(void)addServiceTag:(id)arg1 ;
-(void)clearServiceTags;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(BOOL)hasSessionState;
-(BOOL)hasClientCapabilities;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteSummaryAttributes;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(BOOL)hasCurrentUserLocation;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(GEOLocation *)currentUserLocation;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(NSMutableArray *)routes;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(NSMutableArray *)destinationWaypointTypeds;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(void)setRerouteStatus:(int)arg1 ;
-(void)setHasRerouteStatus:(BOOL)arg1 ;
-(void)setIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(BOOL)includeBetterRouteSuggestion;
-(int)rerouteStatus;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setHasPreviouslyRejectedRerouteSavings:(BOOL)arg1 ;
-(BOOL)hasPreviouslyRejectedRerouteSavings;
-(BOOL)hasRerouteStatus;
-(void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(unsigned)previouslyRejectedRerouteSavings;
-(BOOL)hasIncludeBetterRouteSuggestion;
@end

