/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {

	SCD_Struct_NT9* _events;
	double _defaultClicks;
	double _defaultImpressions;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT10 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                         //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultClicks; 
@property (assign,nonatomic) double defaultClicks;                          //@synthesize defaultClicks=_defaultClicks - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultImpressions; 
@property (assign,nonatomic) double defaultImpressions;                     //@synthesize defaultImpressions=_defaultImpressions - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
-(void)setFeatureKey:(NSString *)arg1 ;
-(BOOL)hasFeatureKey;
-(void)setDefaultClicks:(double)arg1 ;
-(void)setHasDefaultClicks:(BOOL)arg1 ;
-(BOOL)hasDefaultClicks;
-(void)setDefaultImpressions:(double)arg1 ;
-(void)setHasDefaultImpressions:(BOOL)arg1 ;
-(BOOL)hasDefaultImpressions;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)featureKey;
-(double)defaultClicks;
-(double)defaultImpressions;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned*)events;
-(void)addEvents:(unsigned)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(unsigned)eventsAtIndex:(unsigned long long)arg1 ;
@end

