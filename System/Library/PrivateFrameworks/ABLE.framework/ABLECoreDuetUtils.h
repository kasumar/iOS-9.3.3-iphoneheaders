/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABLECoreDuetUtils : NSObject
+(id)replaceNanWithNullInArray:(id)arg1 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 fromBefore:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)replaceNullWithNanInArray:(id)arg1 ;
+(id)makeAllTimeHistoryWindowWithRecurrencePeriod:(double)arg1 ;
+(id)makeHistoryWindowForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeHistoryWindowForWholeDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 ;
+(id)makeHistoryWindowForDays:(unsigned long long)arg1 andRecurrencePeriod:(double)arg2 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 from:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeHistoryWindowForMinutes:(unsigned long long)arg1 fromBefore:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 andRecurrencePeriod:(double)arg2 ;
+(id)generateDateArrayFromHistoryWindow:(id)arg1 ;
@end

