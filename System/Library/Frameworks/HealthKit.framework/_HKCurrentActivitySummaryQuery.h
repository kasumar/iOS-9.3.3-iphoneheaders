/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class HKActivitySummary;

@interface _HKCurrentActivitySummaryQuery : HKQuery {

	/*^block*/id _updateHandler;
	HKActivitySummary* _lastActivitySummary;

}
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_validate;
-(BOOL)_requiresValidSampleType;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2 ;
@end

