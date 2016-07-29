/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, HKActivityCache, NSArray, HKUnit, NSNumber, HKActivityChartPointSummary, NSString;

@interface HKActivityChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	HKActivityCache* _activityCache;
	NSArray* _workouts;
	HKUnit* _unit;
	NSNumber* _activeEnergyBurnedMinusWorkouts;
	NSNumber* _workoutActiveEnergyBurned;
	NSArray* _workoutTimes;
	HKActivityChartPointSummary* _summary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)xValue;
-(id)yValue;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(void)_calculateEnergyBurned;
-(void)_populateWorkoutTimes;
-(void)_createSummary;
-(id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3 ;
@end

