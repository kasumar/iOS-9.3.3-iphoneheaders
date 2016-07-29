/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineViewItem.h>

@class NSDate, EKEvent, EKDayOccurrenceView, EKCalendarDate, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {

	CGRect _unPinnedViewFrame;
	unsigned long long _eventIndex;
	EKDayOccurrenceView* _view;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	double _travelTime;
	double _topPinningProximity;
	double _bottomPinningProximity;

}

@property (nonatomic,readonly) unsigned long long eventIndex;                                   //@synthesize eventIndex=_eventIndex - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceView * view;                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) EKCalendarDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) EKCalendarDate * startDateIncludingTravelTime; 
@property (nonatomic,copy) EKCalendarDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double travelTime;                                                 //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) double topPinningProximity;                                        //@synthesize topPinningProximity=_topPinningProximity - In the implementation block
@property (assign,nonatomic) double bottomPinningProximity;                                     //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(EKDayOccurrenceView *)view;
-(void)setView:(EKDayOccurrenceView *)arg1 ;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(BOOL)isPinned;
-(void)setVisibleHeight:(double)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(unsigned long long)eventIndex;
-(void)setBottomPinningProximity:(double)arg1 ;
-(EKCalendarDate *)startDateIncludingTravelTime;
-(double)enoughHeightForOneLine;
-(double)viewMaxNaturalTextHeight;
-(BOOL)visibleHeightLocked;
-(void)setStagedFrame:(CGRect)arg1 ;
-(CGRect)stagedFrame;
-(void)setTravelTimeHeight:(double)arg1 ;
-(NSDate *)startWithTravelTime;
-(BOOL)hideTravelTime;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1 ;
-(id)initWithEventIndex:(unsigned long long)arg1 ;
-(double)topPinningProximity;
-(void)setTopPinningProximity:(double)arg1 ;
-(double)bottomPinningProximity;
-(void)setEndDate:(EKCalendarDate *)arg1 ;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
@end

