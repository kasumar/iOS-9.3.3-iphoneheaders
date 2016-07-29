/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(void)setDuration:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
-(BOOL)isDurationBased;
-(id)initWithDate:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
@end

