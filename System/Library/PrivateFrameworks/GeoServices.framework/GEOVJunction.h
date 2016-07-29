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

@interface GEOVJunction : PBCodable <NSCopying> {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)laneConnectionsCount;
-(NSMutableArray *)laneConnections;
-(void)setConnectingRoads:(NSMutableArray *)arg1 ;
-(void)clearConnectingRoads;
-(void)setLaneConnections:(NSMutableArray *)arg1 ;
-(void)clearLaneConnections;
-(void)addConnectingRoad:(id)arg1 ;
-(void)addLaneConnections:(id)arg1 ;
-(unsigned long long)connectingRoadsCount;
-(id)connectingRoadAtIndex:(unsigned long long)arg1 ;
-(id)laneConnectionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)connectingRoads;
@end

