/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCHChartGridValue : NSObject
+(id)instanceWithArchive:(const GridValue*)arg1 ;
+(void)saveGridValue:(id)arg1 toArchive:(GridValue*)arg2 ;
+(id)durationValueWithDouble:(double)arg1 ;
+(id)dateValueWithDouble:(double)arg1 ;
+(id)numberValueWithDouble:(double)arg1 ;
+(id)dateValueWithNSDate:(id)arg1 ;
+(id)NSDateFromGridValue:(id)arg1 ;
+(id)NSDateConvertedFromGridValue:(id)arg1 ;
-(id)initWithArchive:(const GridValue*)arg1 ;
-(id)init;
@end
