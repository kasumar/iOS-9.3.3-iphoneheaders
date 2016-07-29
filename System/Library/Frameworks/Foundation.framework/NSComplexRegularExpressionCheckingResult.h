/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression, NSArray;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSArray* _rangeArray;

}
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)regularExpression;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
-(id)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(void)dealloc;
-(NSRange)range;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRanges;
@end

