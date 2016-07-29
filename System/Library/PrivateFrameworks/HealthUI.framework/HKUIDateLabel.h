/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class HKValueRange;

@interface HKUIDateLabel : UILabel {

	long long _formatTemplate;
	BOOL _useUppercase;
	HKValueRange* _dateRange;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) long long formatTemplate;              //@synthesize formatTemplate=_formatTemplate - In the implementation block
@property (assign,nonatomic) BOOL useUppercase;                       //@synthesize useUppercase=_useUppercase - In the implementation block
-(id)init;
-(long long)formatTemplate;
-(HKValueRange *)dateRange;
-(void)setDateRange:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)_setFormatTemplate:(long long)arg1 ;
-(BOOL)_setDateRange:(id)arg1 ;
-(id)_formattedText;
-(id)_formattedTextFromDate:(id)arg1 ;
-(void)setDate:(id)arg1 formatTemplate:(long long)arg2 ;
-(BOOL)useUppercase;
-(void)setUseUppercase:(BOOL)arg1 ;
@end

