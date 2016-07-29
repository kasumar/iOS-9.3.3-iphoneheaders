/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxis, NSMutableArray;

@interface TSCHChartAxisAnalyzer : NSObject {

	TSCHChartAxis* mAxis;
	BOOL mShouldCalculateMedian;
	double mMin;
	double mMax;
	double mMedian;
	unsigned long long mNumValues;
	double mSumOfValues;
	BOOL mFirstValue;
	BOOL mDidCalculateMedian;
	NSMutableArray* mValues;

}
+(id)analyzerForAxis:(id)arg1 needsMedian:(BOOL)arg2 ;
-(id)initForAxis:(id)arg1 needsMedian:(BOOL)arg2 ;
-(BOOL)p_hasMedianReferenceLine;
-(void)addGridValue:(id)arg1 forSeries:(id)arg2 ;
-(double)median;
-(double)max;
-(void)dealloc;
-(double)average;
-(double)min;
@end

