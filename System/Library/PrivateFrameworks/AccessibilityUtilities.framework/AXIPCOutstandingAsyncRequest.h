/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSObject;

@interface AXIPCOutstandingAsyncRequest : NSObject {

	unsigned _replyPort;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _replyHandler;
	CFRunLoopSourceRef _replyMachPortSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,readonly) unsigned replyPort;                                   //@synthesize replyPort=_replyPort - In the implementation block
@property (nonatomic,readonly) id replyHandler;                                      //@synthesize replyHandler=_replyHandler - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef replyMachPortSource;               //@synthesize replyMachPortSource=_replyMachPortSource - In the implementation block
+(void)initialize;
+(void)registerOutstandingRequest:(id)arg1 ;
+(void)unregisterByPort:(unsigned)arg1 ;
+(id)lookupByPort:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)replyPort;
-(CFRunLoopSourceRef)replyMachPortSource;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(id)replyHandler;
-(void)_responseReceived:(id)arg1 ;
-(id)initWithReplyPort:(unsigned)arg1 handlerQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)registerAndListenForResponse;
-(void)rawResponseReceived:(id)arg1 ;
-(void)sendOnceRightDestroyed;
-(void)initialSendAborted;
@end

