/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSObject, NSMapTable;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {

	NSMutableDictionary* _listeners;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _transactionIDToBlockMap;
	NSString* _rerouteService;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _serviceToken;
	NSMapTable* _delegateToInfo;
	NSMutableDictionary* _listenerIDToServicesMap;
	id _delegateContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 failBlock:(/*^block*/id)arg4 waitForReply:(BOOL)arg5 ;
-(void)_disconnectFromQueryService;
-(void)_requestCacheForService:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_connect;
-(void)daemonDisconnected;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)___oldDealloc;
-(void)removeDelegate:(id)arg1 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_cacheForService:(id)arg1 ;
-(void)_purgeIDStatusCache;
-(void)_purgeIDStatusCacheAfter:(double)arg1 ;
-(id)_reroutedPrototypeService:(id)arg1 ;
-(id)_cachedStatusForDestination:(id)arg1 service:(id)arg2 ;
-(void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2 ;
-(id)_delegateMapForListenerID:(id)arg1 service:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 delegateMap:(id)arg2 ;
-(void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 queue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)initWithDelegateContext:(id)arg1 queue:(id)arg2 ;
-(BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2 ;
-(void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(BOOL)_warmupQueryCacheForService:(id)arg1 ;
-(BOOL)_flushQueryCacheForService:(id)arg1 ;
-(BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_hasCacheForService:(id)arg1 ;
-(long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

