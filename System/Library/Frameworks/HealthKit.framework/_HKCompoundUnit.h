/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKUnit.h>

@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {

	_HKFactorization* _baseUnits;
	_HKDimension* _dimension;
	int _dimensionLock;

}
+(BOOL)supportsSecureCoding;
+(id)unitWithBaseUnits:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dimension;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)_initWithBaseUnits:(id)arg1 ;
-(id)unitString;
@end

