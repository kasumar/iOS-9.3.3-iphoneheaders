/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying> {

	NSMutableArray* _popularNearbyResults;

}

@property (nonatomic,retain) NSMutableArray * popularNearbyResults;              //@synthesize popularNearbyResults=_popularNearbyResults - In the implementation block
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
-(void)addPopularNearbyResult:(id)arg1 ;
-(void)setPopularNearbyResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)popularNearbyResults;
-(id)popularNearbyResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)popularNearbyResultsCount;
-(void)clearPopularNearbyResults;
@end

