/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject {

	double _unselectedSeriesAlpha;
	HKStrokeStyle* _selectedPointLineStrokeStyle;
	HKStrokeStyle* _touchPointLineStrokeStyle;

}

@property (assign,nonatomic) double unselectedSeriesAlpha;                              //@synthesize unselectedSeriesAlpha=_unselectedSeriesAlpha - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedPointLineStrokeStyle;              //@synthesize selectedPointLineStrokeStyle=_selectedPointLineStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * touchPointLineStrokeStyle;                 //@synthesize touchPointLineStrokeStyle=_touchPointLineStrokeStyle - In the implementation block
-(void)setUnselectedSeriesAlpha:(double)arg1 ;
-(void)setSelectedPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedPointLineStrokeStyle;
-(HKStrokeStyle *)touchPointLineStrokeStyle;
-(double)unselectedSeriesAlpha;
-(void)setTouchPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
@end

