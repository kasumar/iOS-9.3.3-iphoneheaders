/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStatistics;

@interface _HKBloodPressureWrapper : NSObject {

	HKStatistics* _systolic;
	HKStatistics* _diastolic;

}

@property (nonatomic,retain) HKStatistics * systolic;               //@synthesize systolic=_systolic - In the implementation block
@property (nonatomic,retain) HKStatistics * diastolic;              //@synthesize diastolic=_diastolic - In the implementation block
-(HKStatistics *)systolic;
-(void)setSystolic:(HKStatistics *)arg1 ;
-(HKStatistics *)diastolic;
-(void)setDiastolic:(HKStatistics *)arg1 ;
@end

