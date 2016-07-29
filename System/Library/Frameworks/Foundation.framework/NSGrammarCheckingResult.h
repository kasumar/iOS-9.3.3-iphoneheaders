/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSArray* _details;

}
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)grammarDetails;
-(id)initWithRange:(NSRange)arg1 details:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSRange)range;
-(unsigned long long)resultType;
@end

