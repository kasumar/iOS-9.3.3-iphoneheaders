/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _predictedLocationsOfInterests;

}

@property (nonatomic,retain) NSMutableArray * predictedLocationsOfInterests;              //@synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)predictedLocationsOfInterests;
-(void)setPredictedLocationsOfInterests:(NSMutableArray *)arg1 ;
-(void)addPredictedLocationsOfInterest:(id)arg1 ;
-(unsigned long long)predictedLocationsOfInterestsCount;
-(void)clearPredictedLocationsOfInterests;
-(id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1 ;
@end
