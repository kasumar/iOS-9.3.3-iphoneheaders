/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol DKPeriodType
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) double duration; 
@required
-(double)duration;
-(NSDate *)startDate;
-(NSDate *)endDate;

@end

