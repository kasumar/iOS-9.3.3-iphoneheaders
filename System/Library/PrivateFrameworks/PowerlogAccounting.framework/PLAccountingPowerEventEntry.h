/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSNumber;

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) double power; 
+(void)load;
+(double)minPowerDifference;
+(double)minPowerPercentageDifference;
-(id)subEntryKey;
-(int)instanceDirectionality;
-(BOOL)isEqualContentsWithEvent:(id)arg1 ;
-(BOOL)isEmptyEvent;
-(id)initWithRootNodeID:(id)arg1 withPower:(double)arg2 withRange:(id)arg3 ;
-(double)power;
-(NSNumber *)rootNodeID;
@end

