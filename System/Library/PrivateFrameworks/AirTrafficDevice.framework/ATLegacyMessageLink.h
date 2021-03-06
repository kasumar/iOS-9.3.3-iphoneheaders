/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATLockdownMessageLink.h>
#import <libobjc.A.dylib/ATSocketDelegate.h>
#import <libobjc.A.dylib/ATLegacyMessageLink.h>

@protocol ATLegacyMessageLink <NSObject>
@required
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeHandlerForMessage:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSMutableDictionary, NSString;

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATSocketDelegate, ATLegacyMessageLink> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableData* _incomingData;
	long long _expectedBytesRemaining;
	NSMutableDictionary* _requestHandlerTable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)close;
-(BOOL)open;
-(id)initWithSocket:(id)arg1 ;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3 ;
-(void)socketDidClose:(id)arg1 ;
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeHandlerForMessage:(id)arg1 ;
-(void)_handlePingMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handlePongMessage:(id)arg1 fromLink:(id)arg2 ;
-(BOOL)_sendData:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)_sendPingMessage;
-(void)_checkMessageTimeouts;
@end

