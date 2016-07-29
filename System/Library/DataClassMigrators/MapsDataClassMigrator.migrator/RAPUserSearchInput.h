/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOStorageCompletion, GEOLatLng, GEOMapItemStorage, NSString;

@interface RAPUserSearchInput : PBCodable <NSCopying> {

	GEOStorageCompletion* _completionStorage;
	GEOLatLng* _coordinate;
	int _origin;
	GEOMapItemStorage* _placeMapItemStorage;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	SCD_Struct_RA4 _has;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                               //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString;                    //@synthesize singleLineAddressString=_singleLineAddressString - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;               //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletionStorage; 
@property (nonatomic,retain) GEOStorageCompletion * completionStorage;              //@synthesize completionStorage=_completionStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                                //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                            //@synthesize origin=_origin - In the implementation block
-(BOOL)hasCompletionStorage;
-(GEOStorageCompletion *)completionStorage;
-(void)setCompletionStorage:(GEOStorageCompletion *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)hasCoordinate;
-(BOOL)hasOrigin;
-(BOOL)hasSingleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(NSString *)singleLineAddressString;
-(void)setHasOrigin:(BOOL)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
-(GEOMapItemStorage *)placeMapItemStorage;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasPlaceMapItemStorage;
@end

