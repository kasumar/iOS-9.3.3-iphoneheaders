/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <libobjc.A.dylib/NCNotificationDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSTimer, NSString;

@interface SBSnoozedAlarmDateLabel : UILabel <NCNotificationDateLabel> {

	double _fireTime;
	NSTimer* _tickTimer;
	BOOL _allDay;
	BOOL isTimestamp;
	int _labelType;
	id<SBDateLabelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp; 
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(void)setDelegate:(id<SBDateLabelDelegate>)arg1 ;
-(void)dealloc;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAllDay:(BOOL)arg1 ;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(void)_invalidateTimer;
-(void)_updateText;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)stopCoalescingUpdates;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(BOOL)isAllDay;
@end

