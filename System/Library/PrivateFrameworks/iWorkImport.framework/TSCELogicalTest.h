/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, NSDate, TSCERegexMatcher;

@interface TSCELogicalTest : NSObject {

	int mOperation;
	TSCENumberValue* mValue;
	NSString* mString;
	NSDate* mDate;
	TSCERegexMatcher* mMatcher;
	TSCEEvaluationContext* mEvaluationContext;

}
+(id)logicalTestWithCriterion:(TSCEValue)arg1 functionSpec:(id)arg2 evaluationContext:(TSCEEvaluationContext*)arg3 ;
-(BOOL)compare:(TSCEValue)arg1 withContext:(TSCEEvaluationContext*)arg2 ;
-(id)initWithCriterion:(TSCEValue)arg1 functionSpec:(id)arg2 evaluationContext:(TSCEEvaluationContext*)arg3 ;
-(int)criteriaParser:(id)arg1 ;
-(void)setRegexMatcher:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setDate:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(unsigned long long)cost;
@end

