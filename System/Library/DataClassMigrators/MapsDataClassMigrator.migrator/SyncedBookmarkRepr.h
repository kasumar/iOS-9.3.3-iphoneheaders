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

@class NSString, NSMutableArray;

@interface SyncedBookmarkRepr : PBCodable <NSCopying> {

	unsigned long long _businessID;
	double _latitude;
	double _longitude;
	double _regionLatitude;
	double _regionLatitudeDelta;
	double _regionLongitude;
	double _regionLongitudeDelta;
	NSString* _contactIdentifier;
	int _directionsMode;
	NSMutableArray* _places;
	unsigned _providerID;
	NSString* _singleLineAddress;
	NSString* _title;
	int _type;
	SCD_Struct_Sy9 _has;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleLineAddress; 
@property (nonatomic,retain) NSString * singleLineAddress;               //@synthesize singleLineAddress=_singleLineAddress - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasRegionLatitude; 
@property (assign,nonatomic) double regionLatitude;                      //@synthesize regionLatitude=_regionLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasRegionLongitude; 
@property (assign,nonatomic) double regionLongitude;                     //@synthesize regionLongitude=_regionLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasRegionLatitudeDelta; 
@property (assign,nonatomic) double regionLatitudeDelta;                 //@synthesize regionLatitudeDelta=_regionLatitudeDelta - In the implementation block
@property (assign,nonatomic) BOOL hasRegionLongitudeDelta; 
@property (assign,nonatomic) double regionLongitudeDelta;                //@synthesize regionLongitudeDelta=_regionLongitudeDelta - In the implementation block
@property (assign,nonatomic) BOOL hasProviderID; 
@property (assign,nonatomic) unsigned providerID;                        //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) BOOL hasContactIdentifier; 
@property (nonatomic,retain) NSString * contactIdentifier;               //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDirectionsMode; 
@property (assign,nonatomic) int directionsMode;                         //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                    //@synthesize places=_places - In the implementation block
-(void)setRegionLatitude:(double)arg1 ;
-(void)setHasRegionLatitude:(BOOL)arg1 ;
-(id)placesAtIndex:(unsigned long long)arg1 ;
-(void)setHasRegionLongitude:(BOOL)arg1 ;
-(void)setRegionLongitude:(double)arg1 ;
-(void)setSingleLineAddress:(NSString *)arg1 ;
-(void)setHasRegionLongitudeDelta:(BOOL)arg1 ;
-(BOOL)hasContactIdentifier;
-(void)setHasDirectionsMode:(BOOL)arg1 ;
-(void)setHasProviderID:(BOOL)arg1 ;
-(BOOL)hasDirectionsMode;
-(double)regionLatitude;
-(BOOL)hasRegionLatitudeDelta;
-(int)directionsMode;
-(double)regionLongitudeDelta;
-(BOOL)hasRegionLongitudeDelta;
-(double)regionLongitude;
-(void)setHasRegionLatitudeDelta:(BOOL)arg1 ;
-(void)setDirectionsMode:(int)arg1 ;
-(double)regionLatitudeDelta;
-(void)setRegionLatitudeDelta:(double)arg1 ;
-(BOOL)hasRegionLatitude;
-(void)setRegionLongitudeDelta:(double)arg1 ;
-(void)addPlaces:(id)arg1 ;
-(BOOL)hasRegionLongitude;
-(BOOL)hasSingleLineAddress;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)placesCount;
-(NSMutableArray *)places;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)clearPlaces;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(unsigned long long)businessID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(unsigned)providerID;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setProviderID:(unsigned)arg1 ;
-(BOOL)hasProviderID;
-(NSString *)contactIdentifier;
-(NSString *)singleLineAddress;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
@end
