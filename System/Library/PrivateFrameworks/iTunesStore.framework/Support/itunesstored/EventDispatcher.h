/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface EventDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _eventMonitors;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)eventDispatcher;
+(void)connectEventMonitorWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)postEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_addClient:(id)arg1 ;
@end

