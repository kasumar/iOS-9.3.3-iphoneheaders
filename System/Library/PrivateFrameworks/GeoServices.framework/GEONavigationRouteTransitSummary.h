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

@class NSMutableArray;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {

	NSMutableArray* _possibleStops;
	NSMutableArray* _scheduledLinks;

}

@property (nonatomic,retain) NSMutableArray * scheduledLinks;              //@synthesize scheduledLinks=_scheduledLinks - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStops;               //@synthesize possibleStops=_possibleStops - In the implementation block
-(id)initWithRoute:(id)arg1 ;
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
-(void)setPossibleStops:(NSMutableArray *)arg1 ;
-(void)setScheduledLinks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)scheduledLinks;
-(void)clearScheduledLinks;
-(void)clearPossibleStops;
-(NSMutableArray *)possibleStops;
-(void)addScheduledLink:(id)arg1 ;
-(unsigned long long)possibleStopsCount;
-(unsigned long long)scheduledLinksCount;
-(id)possibleStopAtIndex:(unsigned long long)arg1 ;
-(void)addPossibleStop:(id)arg1 ;
-(id)scheduledLinkAtIndex:(unsigned long long)arg1 ;
@end

