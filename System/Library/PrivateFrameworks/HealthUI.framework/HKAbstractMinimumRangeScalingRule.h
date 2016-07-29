/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class NSDictionary, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	double _defaultYAxisRange;
	NSDictionary* _axisRangeOverrides;

}

@property (nonatomic,readonly) double defaultYAxisRange;                       //@synthesize defaultYAxisRange=_defaultYAxisRange - In the implementation block
@property (nonatomic,readonly) NSDictionary * axisRangeOverrides;              //@synthesize axisRangeOverrides=_axisRangeOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
-(double)_rangeForZoomLevel:(long long)arg1 ;
-(double)defaultYAxisRange;
-(NSDictionary *)axisRangeOverrides;
@end

