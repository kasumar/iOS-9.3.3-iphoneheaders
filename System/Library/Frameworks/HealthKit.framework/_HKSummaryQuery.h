/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDate;

@interface _HKSummaryQuery : HKQuery {

	NSDate* _startDate;
	NSDate* _endDate;
	/*^block*/id _completionHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                      //@synthesize updateHandler=_updateHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(id)completionHandler;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_requiresValidSampleType;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverValuesByType:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2 ;
@end

