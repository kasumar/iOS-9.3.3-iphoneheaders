/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;
	BOOL _showFakeData;

}
-(id)init;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
@end

