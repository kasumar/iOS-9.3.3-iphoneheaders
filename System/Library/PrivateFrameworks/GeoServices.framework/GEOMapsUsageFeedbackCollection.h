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

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails, NSString, GEORouteDetails, GEOMapsServerMetadata;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	double _sessionRelativeTimestamp;
	double _zoomLevel;
	int _actionType;
	GEOCarInfo* _carInfo;
	int _locationBucket;
	GEOMapRegion* _mapRegion;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _providerId;
	GEORouteDetails* _routeDetails;
	int _sequenceNumber;
	GEOMapsServerMetadata* _serverMetadata;
	int _uiTarget;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                          //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                         //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails;              //@synthesize placeActionDetails=_placeActionDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;                                    //@synthesize carInfo=_carInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel;                                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteDetails; 
@property (nonatomic,retain) GEORouteDetails * routeDetails;                          //@synthesize routeDetails=_routeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderId; 
@property (nonatomic,retain) NSString * providerId;                                   //@synthesize providerId=_providerId - In the implementation block
@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata;                  //@synthesize serverMetadata=_serverMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket;                                      //@synthesize locationBucket=_locationBucket - In the implementation block
@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget;                                            //@synthesize uiTarget=_uiTarget - In the implementation block
+(id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3 ;
+(id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3 ;
+(id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
+(id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3 ;
-(id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3 ;
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
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(NSString *)providerId;
-(int)uiTarget;
-(BOOL)hasServerMetadata;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(BOOL)hasProviderId;
-(void)setUiTarget:(int)arg1 ;
-(int)locationBucket;
-(BOOL)hasRouteDetails;
-(GEORouteDetails *)routeDetails;
-(void)setLocationBucket:(int)arg1 ;
-(BOOL)hasLocationBucket;
-(void)setRouteDetails:(GEORouteDetails *)arg1 ;
-(BOOL)hasPlaceActionDetails;
-(BOOL)hasUiTarget;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(GEOPlaceActionDetails *)placeActionDetails;
-(BOOL)hasSequenceNumber;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(double)sessionRelativeTimestamp;
-(BOOL)hasActionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(BOOL)hasZoomLevel;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasCarInfo;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(GEOCarInfo *)carInfo;
-(double)zoomLevel;
-(int)actionType;
@end
