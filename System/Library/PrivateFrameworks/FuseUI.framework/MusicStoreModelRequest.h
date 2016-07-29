/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUModelRequest.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSOperation;

@interface MusicStoreModelRequest : MPUModelRequest {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperation* _childOperation;
	BOOL _hasAlreadyFinished;
	double _startExecutingTimeStamp;
	double _timeoutInterval;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;

}

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,readonly) double remainingTimeInterval; 
-(void)cancel;
-(void)dealloc;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)initWithSectionClass:(Class)arg1 itemClass:(Class)arg2 ;
-(double)timeoutInterval;
-(void)execute;
-(double)remainingTimeInterval;
-(void)assertRunningInAccessQueue;
-(id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(void)_tearDownTimeoutTimerSource;
-(void)_handleTimeout;
-(void)_executeURLLoadWithRequest:(id)arg1 storeBag:(id)arg2 ;
-(void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)_finishUsingBlock:(/*^block*/id)arg1 ;
@end

