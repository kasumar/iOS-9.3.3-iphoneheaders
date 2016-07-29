/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSComparisonPredicateOperator : NSPredicateOperator {

	unsigned long long _variant;
	unsigned long long _options;

}
+(BOOL)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2 ;
-(id)predicateFormat;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(unsigned long long)variant;
@end

