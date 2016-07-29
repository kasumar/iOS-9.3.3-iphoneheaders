/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAccountingDistributionManagerDelegate <NSObject>
@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@required
-(void)didDistributeEnergyEstimate:(id)arg1;
-(void)addDistributionEventIntervalWithLastDistributionEventForward:(id)arg1 withDistributionEventForward:(id)arg2;
-(void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)arg1 withDistributionEventBackward:(id)arg2;
-(void)addDistributionEventInterval:(id)arg1;
-(void)addDistributionEventPoint:(id)arg1;
-(void)didCreateChildEnergyEstimate:(id)arg1 withParentEnergyEstimate:(id)arg2;
-(NSObject*<OS_dispatch_queue>)workQueue;

@end

