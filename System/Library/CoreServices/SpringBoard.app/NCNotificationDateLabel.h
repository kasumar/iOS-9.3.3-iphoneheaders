/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAllDay:(BOOL)arg1;
-(int)labelType;
-(void)setLabelType:(int)arg1;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)stopCoalescingUpdates;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;
-(BOOL)isAllDay;

@end

