/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {

	NSMassFormatter* _massFormatter;
	long long _localWeightUnit;

}

@property (nonatomic,readonly) long long localWeightUnit;              //@synthesize localWeightUnit=_localWeightUnit - In the implementation block
+(id)sharedFormatter;
-(void)dealloc;
-(id)init;
-(void)_commonInit;
-(void)_localeChanged:(id)arg1 ;
-(id)stringFromWeightInKilograms:(id)arg1 ;
-(void)_updateRoundingIncrement;
-(id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2 ;
-(long long)localWeightUnit;
@end

