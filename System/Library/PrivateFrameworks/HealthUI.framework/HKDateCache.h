/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSHashTable, NSSet, NSCalendar;

@interface HKDateCache : NSObject {

	NSDate* _startOfDayMidnight;
	NSDate* _endOfDayMidnight;
	NSDate* _startOfDayNoon;
	NSDate* _endOfDayNoon;
	NSDate* _startOfWeekMidnight;
	NSDate* _endOfWeekMidnight;
	NSDate* _startOfWeekNoon;
	NSDate* _endOfWeekNoon;
	NSDate* _startOfMonthMidnight;
	NSDate* _endOfMonthMidnight;
	NSDate* _startOfMonthNoon;
	NSDate* _endOfMonthNoon;
	NSDate* _startOfYear;
	NSDate* _endOfYear;
	NSHashTable* _observers;
	NSSet* _weekendDays;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * startOfDayMidnight; 
@property (nonatomic,readonly) NSDate * endOfDayMidnight; 
@property (nonatomic,readonly) NSDate * startOfDayNoon; 
@property (nonatomic,readonly) NSDate * endOfDayNoon; 
@property (nonatomic,readonly) NSDate * startOfWeekMidnight; 
@property (nonatomic,readonly) NSDate * endOfWeekMidnight; 
@property (nonatomic,readonly) NSDate * startOfWeekNoon; 
@property (nonatomic,readonly) NSDate * endOfWeekNoon; 
@property (nonatomic,readonly) NSDate * startOfMonthMidnight; 
@property (nonatomic,readonly) NSDate * endOfMonthMidnight; 
@property (nonatomic,readonly) NSDate * startOfMonthNoon; 
@property (nonatomic,readonly) NSDate * endOfMonthNoon; 
@property (nonatomic,readonly) NSDate * startOfYearMidnight; 
@property (nonatomic,readonly) NSDate * endOfYearMidnight; 
@property (nonatomic,readonly) NSDate * startOfYearNoon; 
@property (nonatomic,readonly) NSDate * endOfYearNoon; 
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSCalendar *)calendar;
-(id)initWithCalendar:(id)arg1 ;
-(BOOL)isDateInToday:(id)arg1 ;
-(void)flushCache;
-(void)_flushCacheAndNotifyObservers:(id)arg1 ;
-(NSDate *)startOfDayMidnight;
-(NSDate *)startOfDayNoon;
-(NSDate *)startOfWeekMidnight;
-(NSDate *)startOfWeekNoon;
-(NSDate *)startOfMonthMidnight;
-(NSDate *)startOfMonthNoon;
-(NSDate *)startOfYearNoon;
-(NSDate *)startOfYearMidnight;
-(NSDate *)endOfDayNoon;
-(NSDate *)endOfDayMidnight;
-(NSDate *)endOfWeekNoon;
-(NSDate *)endOfWeekMidnight;
-(NSDate *)endOfMonthNoon;
-(NSDate *)endOfMonthMidnight;
-(NSDate *)endOfYearNoon;
-(NSDate *)endOfYearMidnight;
-(id)weekendDays;
-(void)_notifyObserversDidUpdateOnNotification:(id)arg1 ;
-(id)startOfDay:(BOOL)arg1 ;
-(id)endOfDay:(BOOL)arg1 ;
-(id)startOfWeek:(BOOL)arg1 ;
-(id)endOfWeek:(BOOL)arg1 ;
-(id)startOfMonth:(BOOL)arg1 ;
-(id)endOfMonth:(BOOL)arg1 ;
-(id)startOfYear:(BOOL)arg1 ;
-(id)endOfYear:(BOOL)arg1 ;
-(BOOL)isDayOfWeekNumberOnWeekend:(id)arg1 ;
@end
