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

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {

	SCD_Struct_GE59* _clusteredRouteRideSelections;
	unsigned _clientSuggestedRoutesIndex;
	unsigned _directionsResponseIndex;
	unsigned _directionsResponseSuggestedRoutesIndex;
	int _origin;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                                          //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL hasDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned directionsResponseIndex;                                    //@synthesize directionsResponseIndex=_directionsResponseIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned directionsResponseSuggestedRoutesIndex;                     //@synthesize directionsResponseSuggestedRoutesIndex=_directionsResponseSuggestedRoutesIndex - In the implementation block
@property (assign,nonatomic) BOOL hasClientSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned clientSuggestedRoutesIndex;                                 //@synthesize clientSuggestedRoutesIndex=_clientSuggestedRoutesIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(void)clearClusteredRouteRideSelections;
-(unsigned long long)clusteredRouteRideSelectionsCount;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(BOOL)hasClientSuggestedRoutesIndex;
-(BOOL)hasDirectionsResponseIndex;
-(void)setDirectionsResponseSuggestedRoutesIndex:(unsigned)arg1 ;
-(unsigned)clientSuggestedRoutesIndex;
-(unsigned)directionsResponseSuggestedRoutesIndex;
-(void)setHasDirectionsResponseIndex:(BOOL)arg1 ;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasClientSuggestedRoutesIndex:(BOOL)arg1 ;
-(void)setDirectionsResponseIndex:(unsigned)arg1 ;
-(unsigned)directionsResponseIndex;
-(BOOL)hasDirectionsResponseSuggestedRoutesIndex;
-(void)setClientSuggestedRoutesIndex:(unsigned)arg1 ;
-(unsigned*)clusteredRouteRideSelections;
-(void)setHasDirectionsResponseSuggestedRoutesIndex:(BOOL)arg1 ;
@end

