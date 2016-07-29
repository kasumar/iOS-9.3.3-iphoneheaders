/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDailyGoalDetectionDelegate, HDAchievementEngineDelegate;
@class NSCalendar, HDAchievementDataStore, HDAchievementDefinitions, NSDate;

@interface HDAchievementEngine : NSObject {

	id<HDDailyGoalDetectionDelegate> _dailyGoalDetectionDelegate;
	NSCalendar* _cachedCalendar;
	id<HDAchievementEngineDelegate> _delegate;
	HDAchievementDataStore* _dataStore;
	HDAchievementDefinitions* _achievementDefinitions;
	NSDate* _fixedNowDate;
	NSCalendar* _fixedCalendar;

}

@property (assign,nonatomic,__weak) id<HDAchievementEngineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HDAchievementDataStore * dataStore;                        //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) HDAchievementDefinitions * achievementDefinitions;              //@synthesize achievementDefinitions=_achievementDefinitions - In the implementation block
@property (nonatomic,retain) NSDate * fixedNowDate;                                            //@synthesize fixedNowDate=_fixedNowDate - In the implementation block
@property (nonatomic,retain) NSCalendar * fixedCalendar;                                       //@synthesize fixedCalendar=_fixedCalendar - In the implementation block
-(void)runForAllAchievements;
-(void)setDelegate:(id<HDAchievementEngineDelegate>)arg1 ;
-(id)init;
-(id<HDAchievementEngineDelegate>)delegate;
-(id)_calendar;
-(id)initWithAchievementDefinitions:(id)arg1 dailyGoalDetectionDelegate:(id)arg2 ;
-(void)setDataStore:(HDAchievementDataStore *)arg1 ;
-(void)setFixedNowDate:(NSDate *)arg1 ;
-(void)runForSessionAchievements;
-(void)runForDailyCalorieGoalAchievements;
-(void)runForBriskMinutesAchievements;
-(void)runForStandingAchievements;
-(void)runForCombinedActivityAchievements;
-(id)_sessionAchievementsStateWithSessions:(id)arg1 ;
-(void)_updateDataStoreTotalSessionCountWithState:(id)arg1 ;
-(void)_runForFirstSessionOfTypeAchievementWithState:(id)arg1 ;
-(void)_runForBestSessionAchievementsWithState:(id)arg1 ;
-(void)_runFor7WorkoutWeekAchievementWithState:(id)arg1 ;
-(id)_now;
-(long long)_differenceInDaysBetweenActivitySummaryIndex:(long long)arg1 andIndex:(long long)arg2 inCalendar:(id)arg3 dayLimit:(unsigned long long)arg4 ;
-(BOOL)_isCompleteWithNumberOfWeeks:(unsigned long long)arg1 dateToday:(id)arg2 consecutiveCompleteDays:(unsigned long long)arg3 ;
-(BOOL)_atLeastNFullDaysOfHistory:(unsigned long long)arg1 givenFirstCheckedActivitySummaryIndex:(long long)arg2 indexToday:(long long)arg3 ;
-(id)_stepAchievementsWithStartOfDay:(id)arg1 previousBestStepCount:(unsigned long long)arg2 runForOneTimeMilestones:(BOOL)arg3 stepCountOnDay:(unsigned long long)arg4 ;
-(id)_excessCalorieBurnAchievementsWithGoal:(double)arg1 caloriesBurnedToday:(double)arg2 caloriesBurnedPreviouslyToday:(double)arg3 completionDate:(id)arg4 ;
-(id)_achievementsWithBeginningOfDay:(id)arg1 now:(id)arg2 calorieBurnGoal:(double)arg3 consecutiveCompleteDays:(unsigned long long)arg4 lifetimeCompleteDays:(unsigned long long)arg5 ;
-(BOOL)_isCompleteMonthWithDateToday:(id)arg1 consecutiveCompleteDays:(unsigned long long)arg2 ;
-(void)runForStepAchievements;
-(void)systemTimeZoneDidChange;
-(void)setFixedCalendar:(NSCalendar *)arg1 ;
-(id)_sanityCheckDate:(id)arg1 now:(id)arg2 defaultDate:(id)arg3 ;
-(HDAchievementDataStore *)dataStore;
-(HDAchievementDefinitions *)achievementDefinitions;
-(NSDate *)fixedNowDate;
-(NSCalendar *)fixedCalendar;
@end

