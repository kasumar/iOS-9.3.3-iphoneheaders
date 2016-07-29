/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDateComponents, NSString, NSArray, UIColor, UIFont, NSNumberFormatter, _UIDatePickerView, NSDate;

@interface _UIDatePickerMode : NSObject {

	NSDateComponents* _selectedDateComponents;
	NSDateComponents* _baseDateComponents;
	unsigned long long* _elements;
	long long _yearsSinceBaseDate;
	NSRange _maxDayRange;
	NSRange _maxMonthRange;
	NSString* _localizedFormatString;
	NSArray* _dateFormatters;
	UIColor* _todayTextColor;
	UIFont* _amPmFont;
	UIFont* _font;
	UIFont* _defaultTimeFont;
	NSString* _amString;
	NSString* _pmString;
	NSDateComponents* _todayDateComponents;
	NSNumberFormatter* _formatter;
	_UIDatePickerView* _datePickerView;
	BOOL _isUsingJapaneseCalendar;
	unsigned long long _numberOfComponents;
	long long _minuteInterval;
	double _todaySinceReferenceDate;
	NSDate* _minimumDate;
	NSDateComponents* _minimumDateComponents;
	NSDate* _maximumDate;
	NSDateComponents* _maximumDateComponents;
	NSDate* _baseDate;
	NSDate* _originatingDate;

}

@property (nonatomic,readonly) long long datePickerMode; 
@property (nonatomic,readonly) double rowHeight; 
@property (assign,nonatomic) unsigned long long numberOfComponents;                            //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (nonatomic,readonly) long long displayedCalendarUnits; 
@property (nonatomic,readonly) UIColor * todayTextColor; 
@property (assign,nonatomic) long long minuteInterval;                                         //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSDateComponents * todayDateComponents; 
@property (assign,nonatomic) double todaySinceReferenceDate;                                   //@synthesize todaySinceReferenceDate=_todaySinceReferenceDate - In the implementation block
@property (nonatomic,readonly) NSDate * minimumDate;                                           //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * minimumDateComponents;                       //@synthesize minimumDateComponents=_minimumDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * maximumDate;                                           //@synthesize maximumDate=_maximumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * maximumDateComponents;                       //@synthesize maximumDateComponents=_maximumDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedDateComponents;                        //@synthesize selectedDateComponents=_selectedDateComponents - In the implementation block
@property (nonatomic,readonly) double totalComponentWidth; 
@property (getter=is24Hour,nonatomic,readonly) BOOL is24Hour; 
@property (getter=isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic,__weak) _UIDatePickerView * datePickerView;                        //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,readonly) UIFont * amPmFont; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,readonly) UIFont * defaultTimeFont; 
@property (nonatomic,readonly) UIFont * sizedFont; 
@property (nonatomic,readonly) NSString * amString; 
@property (nonatomic,readonly) NSString * pmString; 
@property (assign,nonatomic) unsigned long long* elements; 
@property (nonatomic,retain) NSString * localizedFormatString;                                 //@synthesize localizedFormatString=_localizedFormatString - In the implementation block
@property (nonatomic,retain) NSDate * baseDate;                                                //@synthesize baseDate=_baseDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * baseDateComponents; 
@property (assign,nonatomic) long long yearsSinceBaseDate;                                     //@synthesize yearsSinceBaseDate=_yearsSinceBaseDate - In the implementation block
@property (nonatomic,retain) NSDate * originatingDate;                                         //@synthesize originatingDate=_originatingDate - In the implementation block
+(void)initialize;
+(long long)datePickerMode;
+(id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2 ;
+(unsigned long long)extractableCalendarUnits;
+(id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4 ;
+(id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)numberOfComponents;
-(id)init;
-(long long)numberOfRowsInComponent:(long long)arg1 ;
-(double)rowHeight;
-(unsigned long long*)elements;
-(UIFont *)font;
-(NSString *)amString;
-(NSString *)pmString;
-(void)setMinuteInterval:(long long)arg1 ;
-(long long)datePickerMode;
-(id)timeZone;
-(id)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(long long)minuteInterval;
-(id)locale;
-(BOOL)isTimeIntervalMode;
-(void)setTodayDateComponents:(NSDateComponents *)arg1 ;
-(void)noteCalendarChanged;
-(void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2 ;
-(long long)displayedCalendarUnits;
-(long long)componentForCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)is24Hour;
-(long long)hourForRow:(long long)arg1 ;
-(void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 ;
-(void)loadDate:(id)arg1 animated:(BOOL)arg2 ;
-(long long)minuteForRow:(long long)arg1 ;
-(BOOL)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2 ;
-(NSDateComponents *)selectedDateComponents;
-(id)fontForCalendarUnit:(unsigned long long)arg1 ;
-(id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3 ;
-(unsigned long long)calendarUnitForComponent:(long long)arg1 ;
-(void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(double)totalComponentWidth;
-(double)widthForComponent:(long long)arg1 maxWidth:(double)arg2 ;
-(void)resetComponentWidths;
-(void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
-(void)setDatePickerView:(_UIDatePickerView *)arg1 ;
-(void)_shouldReset:(id)arg1 ;
-(_UIDatePickerView *)datePickerView;
-(id)dateFormatterForCalendarUnit:(unsigned long long)arg1 ;
-(id)calendarForFormatters;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(void)setTodaySinceReferenceDate:(double)arg1 ;
-(NSDateComponents *)todayDateComponents;
-(void)setOriginatingDate:(NSDate *)arg1 ;
-(void)setBaseDateComponents:(NSDateComponents *)arg1 ;
-(void)setBaseDate:(NSDate *)arg1 ;
-(void)setYearsSinceBaseDate:(long long)arg1 ;
-(NSDateComponents *)baseDateComponents;
-(NSDate *)baseDate;
-(UIFont *)amPmFont;
-(UIFont *)sizedFont;
-(double)totalComponentWidthWithFont:(id)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(void)setNumberOfComponents:(unsigned long long)arg1 ;
-(NSString *)localizedFormatString;
-(void)setElements:(unsigned long long*)arg1 ;
-(void)fixUpElementsForRTL;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(void)clearBaseDate;
-(void)setLocalizedFormatString:(NSString *)arg1 ;
-(long long)_yearlessYearForMonth:(long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned long long)arg1 ;
-(long long)_incrementForStaggeredTimeIntervals;
-(id)_dateForYearRow:(long long)arg1 ;
-(long long)secondForRow:(long long)arg1 ;
-(long long)dayForRow:(long long)arg1 ;
-(long long)monthForRow:(long long)arg1 ;
-(long long)yearForRow:(long long)arg1 ;
-(long long)eraForYearRow:(long long)arg1 ;
-(long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 ;
-(id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3 ;
-(long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3 ;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(void)setSelectedDateComponents:(NSDateComponents *)arg1 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(BOOL)arg2 ;
-(NSDate *)originatingDate;
-(BOOL)_monthExists:(long long)arg1 inYear:(long long)arg2 ;
-(long long)_numberOfDaysInDateComponents:(id)arg1 ;
-(long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2 ;
-(UIColor *)todayTextColor;
-(BOOL)_isComponentScrolling:(long long)arg1 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(BOOL)_scrollingAnyColumnExcept:(int)arg1 ;
-(double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(double)todaySinceReferenceDate;
-(long long)yearsSinceBaseDate;
-(UIFont *)defaultTimeFont;
-(long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 ;
-(NSDateComponents *)minimumDateComponents;
-(NSDateComponents *)maximumDateComponents;
@end

