/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _lhObjectPropertyName;
	NSString* _rhObjectPropertyName;
	long long _comparisonType;

}

@property (nonatomic,readonly) NSString * lhObjectPropertyName;              //@synthesize lhObjectPropertyName=_lhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * rhObjectPropertyName;              //@synthesize rhObjectPropertyName=_rhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) long long comparisonType;                     //@synthesize comparisonType=_comparisonType - In the implementation block
+(id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(long long)arg3 ;
-(id)description;
-(long long)comparisonType;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)lhObjectPropertyName;
-(NSString *)rhObjectPropertyName;
-(id)_comparisonOperator;
@end

