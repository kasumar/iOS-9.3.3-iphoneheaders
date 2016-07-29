/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCollectionCalculator.h>

@class NSMutableArray, NSArray;

@interface HDTimeIntervalCollectionCalculator : HDCollectionCalculator {

	NSMutableArray* _timePeriods;
	double _startInterval;
	double _endInterval;
	NSArray* _orderedSourceIds;

}

@property (nonatomic,retain) NSArray * orderedSourceIds;              //@synthesize orderedSourceIds=_orderedSourceIds - In the implementation block
-(NSArray *)orderedSourceIds;
-(void)setOrderedSourceIds:(NSArray *)arg1 ;
-(void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 ;
-(BOOL)_isSource:(long long)arg1 preferredTo:(long long)arg2 ;
-(void)_shortenRangesConsideringPreferredSourceValue:(id)arg1 lesserRange:(id)arg2 ;
-(id)initWithBucketBoundaries:(id)arg1 orderedSourceIds:(id)arg2 ;
-(double)mergedTimeIntervalForValue:(double)arg1 ;
@end

