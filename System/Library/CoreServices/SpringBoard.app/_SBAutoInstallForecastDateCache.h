/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUAutoInstallForecast, NSCalendar, NSDate, NSDateFormatter, NSString;

@interface _SBAutoInstallForecastDateCache : NSObject {

	unsigned long long _scheduleType;
	SUAutoInstallForecast* _forecast;
	NSCalendar* _calendar;
	NSDate* _roundedStartDate;
	NSDate* _roundedEndDate;
	NSDateFormatter* _timeFormatter;
	BOOL _parsed;
	NSString* _roundedStartTimeString;
	NSString* _roundedEndTimeString;

}

@property (assign,nonatomic) unsigned long long scheduleType;                //@synthesize scheduleType=_scheduleType - In the implementation block
@property (nonatomic,retain) NSString * roundedStartTimeString;              //@synthesize roundedStartTimeString=_roundedStartTimeString - In the implementation block
@property (nonatomic,retain) NSString * roundedEndTimeString;                //@synthesize roundedEndTimeString=_roundedEndTimeString - In the implementation block
-(void)_parseForecast;
-(id)formatCardinalityForDate:(id)arg1 ;
-(NSString *)roundedStartTimeString;
-(NSString *)roundedEndTimeString;
-(id)_componentsFromDate:(id)arg1 ;
-(void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id*)arg3 outEnd:(id*)arg4 ;
-(BOOL)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4 ;
-(BOOL)_uses24HourTimeForLocale;
-(id)initWithForecast:(id)arg1 ;
-(unsigned long long)scheduleType;
-(id)formatCardinalityForStartTime;
-(id)formatCardinalityForEndTime;
-(void)setScheduleType:(unsigned long long)arg1 ;
-(void)setRoundedStartTimeString:(NSString *)arg1 ;
-(void)setRoundedEndTimeString:(NSString *)arg1 ;
-(id)description;
-(id)_timeFormatter;
@end

