/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray, CommunicationsFilterBlockListCache;

@interface CommunicationsFilterBlockList : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentObjectsTested;
	CommunicationsFilterBlockListCache* _cache;

}
+(id)sharedInstance;
-(BOOL)_disconnect;
-(void)dealloc;
-(id)init;
-(BOOL)_connect;
-(void)_disconnected;
-(id)_sendSynchronousXPCRequest:(id)arg1 ;
-(void)_sendXPCRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItemForAllServices:(id)arg1 ;
-(void)removeItemForAllServices:(id)arg1 ;
-(BOOL)isItemInList:(id)arg1 ;
-(id)copyAllItems;
@end

