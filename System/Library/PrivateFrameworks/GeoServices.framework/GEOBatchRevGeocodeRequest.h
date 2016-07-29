/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	SCD_Struct_GE1* _additionalPlaceTypes;
	NSString* _deviceCountryCode;
	NSString* _displayRegion;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;

}

@property (nonatomic,retain) NSMutableArray * locations;                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                    //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)setLocations:(NSMutableArray *)arg1 ;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)addServiceTag:(id)arg1 ;
-(void)clearServiceTags;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(NSString *)displayRegion;
-(BOOL)hasDisplayRegion;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(int*)additionalPlaceTypes;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(NSString *)deviceCountryCode;
-(void)clearAdditionalPlaceTypes;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearLocations;
-(NSMutableArray *)locations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)locationsCount;
-(void)addLocation:(id)arg1 ;
@end

