/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSDate, NSLocale, NSCalendar, _UIDatePickerChineseCalendar, NSDateComponents, _UIDatePickerMode, NSTimeZone, UILabel, UIDatePicker, UIFont, NSString;

@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {

	long long _loadingDate;
	NSDate* _userSuppliedDate;
	NSDate* _userSuppliedMinimumDate;
	NSDate* _userSuppliedMaximumDate;
	NSLocale* _compositeLocale;
	NSLocale* _userProvidedLocale;
	NSCalendar* _userProvidedCalendar;
	_UIDatePickerChineseCalendar* _chineseWrapperCalendar;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	NSDateComponents* _lastSelectedDateComponents;
	BOOL _allowsZeroTimeInterval;
	_UIDatePickerMode* _mode;
	NSTimeZone* _timeZone;
	double _timeInterval;
	UILabel* _hourLabel;
	UILabel* _minuteLabel;
	UIDatePicker* _datePickerDelegate;
	id _delegateOfDatePicker;
	int _expectedAMPM;
	struct {
		unsigned staggerTimeIntervals : 1;
		unsigned loadingDateOrTime : 1;
		unsigned highlightsToday : 1;
		unsigned usesBlackChrome : 1;
	}  _datePickerFlags;

}

@property (assign,nonatomic) BOOL highlightsToday; 
@property (nonatomic,readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (getter=_amPmValue,nonatomic,readonly) long long amPmValue; 
@property (getter=_hrMinFont,nonatomic,readonly) UIFont * hrMinFont; 
@property (getter=_lastSelectedDateComponents,nonatomic,readonly) NSDateComponents * lastSelectedDateComponents; 
@property (assign,nonatomic) BOOL staggerTimeIntervals; 
@property (nonatomic,copy) NSDateComponents * dateComponents; 
@property (assign,nonatomic) long long datePickerMode; 
@property (nonatomic,retain) NSLocale * userProvidedLocale; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                                                                                     //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSCalendar * userProvidedCalendar; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * minimumDate;                                                                                                        //@synthesize userSuppliedMinimumDate=_userSuppliedMinimumDate - In the implementation block
@property (nonatomic,copy) NSDate * maximumDate;                                                                                                        //@synthesize userSuppliedMaximumDate=_userSuppliedMaximumDate - In the implementation block
@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) long long minuteInterval; 
@property (assign,nonatomic,__weak) id delegateOfDatePicker;                                                                                            //@synthesize delegateOfDatePicker=_delegateOfDatePicker - In the implementation block
@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) BOOL usesBlackChrome; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_hasCustomCalendar,nonatomic,readonly) BOOL hasCustomCalendar; 
@property (getter=_hasCustomLocale,nonatomic,readonly) BOOL hasCustomLocale; 
@property (nonatomic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSCalendar *)calendar;
-(NSLocale *)locale;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(BOOL)_updateDateOrTime;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(long long)_amPmValue;
-(id)_hoursStringForHour:(long long)arg1 ;
-(id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2 ;
-(id)_hrMinFont;
-(id)_lastSelectedDateComponents;
-(BOOL)staggerTimeIntervals;
-(BOOL)highlightsToday;
-(long long)_selectionBarRowInComponent:(long long)arg1 ;
-(int)hour;
-(NSDateComponents *)dateComponents;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
-(void)setStaggerTimeIntervals:(BOOL)arg1 ;
-(int)minute;
-(int)second;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(double)_tableRowHeight;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_resetSelectionOfTables;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)shadowColor;
-(void)setDate:(NSDate *)arg1 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(long long)datePickerMode;
-(BOOL)_hasCustomLocale;
-(NSTimeZone *)timeZone;
-(BOOL)_hasCustomCalendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(long long)minuteInterval;
-(NSLocale *)userProvidedLocale;
-(void)setUserProvidedLocale:(NSLocale *)arg1 ;
-(NSCalendar *)userProvidedCalendar;
-(void)setUserProvidedCalendar:(NSCalendar *)arg1 ;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegateOfDatePicker:(id)arg1 ;
-(double)contentWidth;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_rebuildCompositeLocale;
-(void)_datePickerReset:(id)arg1 ;
-(void)_todayChanged:(id)arg1 ;
-(BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1 ;
-(BOOL)_isCurrentCalendar:(id)arg1 ;
-(void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 ;
-(void)_doneLoadingDateOrTime;
-(void)_loadDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1 ;
-(void)_setMode:(id)arg1 ;
-(id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2 ;
-(int)_selectedHourForColumn:(int)arg1 ;
-(void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(BOOL)arg3 ;
-(int)_selectedMinuteForColumn:(int)arg1 ;
-(id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1 ;
-(id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_makeNewAccessoryLabel;
-(void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4 ;
-(void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateLabels:(BOOL)arg1 ;
-(BOOL)_showingDate;
-(id)_viewForSelectedRowInComponent:(long long)arg1 ;
-(id)delegateOfDatePicker;
@end

