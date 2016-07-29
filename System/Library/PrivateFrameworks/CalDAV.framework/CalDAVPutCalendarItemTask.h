/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)description;
-(NSString *)previousScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
@end

