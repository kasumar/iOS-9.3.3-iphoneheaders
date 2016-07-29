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

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	double _area;
	GEOLatLng* _center;
	GEOTimezone* _timezone;
	BOOL _isApproximateCenter;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area;                              //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximateCenter; 
@property (assign,nonatomic) BOOL isApproximateCenter;                 //@synthesize isApproximateCenter=_isApproximateCenter - In the implementation block
+(id)placeInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(double)area;
-(BOOL)hasTimezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasArea;
-(GEOTimezone *)timezone;
-(void)setHasArea:(BOOL)arg1 ;
-(BOOL)hasIsApproximateCenter;
-(BOOL)isApproximateCenter;
-(void)setHasIsApproximateCenter:(BOOL)arg1 ;
-(void)setArea:(double)arg1 ;
-(void)setIsApproximateCenter:(BOOL)arg1 ;
@end

