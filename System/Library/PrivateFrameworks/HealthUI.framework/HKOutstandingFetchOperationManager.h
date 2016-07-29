/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKFetchOperationDelegate.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate> {

	BOOL _needsRebalanceFetchOperations;
	NSMutableArray* _pendingFetchOperations;
	NSMutableArray* _activeFetchOperations;
	long long _maxConcurrentFetchOperations;

}

@property (assign,nonatomic) long long maxConcurrentFetchOperations;              //@synthesize maxConcurrentFetchOperations=_maxConcurrentFetchOperations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setNeedsRebalanceFetchOperations;
-(void)addFetchOperation:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(BOOL)_removeFetchOperationFromPendingOperations:(id)arg1 ;
-(BOOL)_removeFetchOperationFromActiveOperations:(id)arg1 ;
-(void)_rebalanceFetchOperations;
-(void)_sortPendingFetchOperations;
-(void)_fillActiveFetchOperations;
-(void)_executeFetchOperation:(id)arg1 ;
-(void)fetchOperationDidUpdatePriority:(id)arg1 ;
-(id)initWithMaxConcurrentFetchOperations:(long long)arg1 ;
-(void)setMaxConcurrentFetchOperations:(long long)arg1 ;
-(void)addFetchOperations:(id)arg1 ;
-(void)removeFetchOperations:(id)arg1 ;
-(long long)maxConcurrentFetchOperations;
@end

