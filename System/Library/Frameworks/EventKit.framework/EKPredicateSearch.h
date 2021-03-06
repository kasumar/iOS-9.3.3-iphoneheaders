/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSPredicate, EKEventStore, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {

	/*^block*/id _callback;
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	id _cancellationToken;
	BOOL _finished;
	BOOL _isCancelled;
	int _retryCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)disconnect;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(unsigned long long)_startOSActivity;
-(void)_startActualWithCompletion:(/*^block*/id)arg1 ;
-(void)terminate;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

