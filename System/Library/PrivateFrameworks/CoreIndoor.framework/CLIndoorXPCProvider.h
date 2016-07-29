/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSObject, NSXPCConnection;

@interface CLIndoorXPCProvider : NSObject {

	NSObject*<OS_dispatch_queue> _frameworkQueue;
	NSXPCConnection* _connection;
	optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > _lastReconnectTime;
	NSObject*<OS_dispatch_source> _interruptReconnection;

}
+(id)newConnectionFor:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)impl;
-(/*^block*/id)_defaultErrHandler:(/*^block*/id)arg1 forCaller:(id)arg2 ;
-(void)withinQueueInitializeConnection;
-(void)withinQueueInvalidate;
-(void)withinQueueHandleReconnect:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(int)withinQueueShouldReinitializeRemote:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)withinQueueScheduleReconnect:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 reason:(id)arg2 reinitializeConnection:(BOOL)arg3 ;
-(void)withinQueueInterruptionHandler;
-(void)withinQueueReconnectInvalidatedConnection;
-(void)withinQueueReinitializeRemoteState;
-(/*^block*/id)_defaultErrHandlerForCaller:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

