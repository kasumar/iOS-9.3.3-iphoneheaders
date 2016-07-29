/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	/*^block*/id _disconnectHandler;
	/*^block*/id _defaultMessageHandler;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	double _idleTimerInterval;
	BOOL _shutdown;

}

@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
-(void)dealloc;
-(BOOL)shutdown;
-(void)startListening;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
-(void)_handleNewConnection:(id)arg1 ;
@end

