/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSSet;

@interface _HKSourceRevisionFilter : _HKFilter {

	NSSet* _sourceRevisions;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSSet * sourceRevisions;                      //@synthesize sourceRevisions=_sourceRevisions - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 ;
+(id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3 ;
+(id)filterWithSourceRevisions:(id)arg1 operatorType:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSSet *)sourceRevisions;
-(unsigned long long)operatorType;
@end

