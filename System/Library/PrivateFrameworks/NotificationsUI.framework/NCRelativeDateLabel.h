/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationsUI/NCDefaultDateLabel.h>
#import <libobjc.A.dylib/NCRelativeDateTimerDelegate.h>

@class NCRelativeDateTimer, NSString;

@interface NCRelativeDateLabel : NCDefaultDateLabel <NCRelativeDateTimerDelegate> {

	NCRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	int _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
@end

