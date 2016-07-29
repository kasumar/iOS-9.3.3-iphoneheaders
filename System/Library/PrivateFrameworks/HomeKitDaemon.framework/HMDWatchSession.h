/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPRemoteSession.h>

@class NSMutableDictionary;

@interface HMDWatchSession : HAPRemoteSession {

	unsigned long long _sendInternalTimeout;
	NSMutableDictionary* _responseHandlers;

}

@property (assign,nonatomic) unsigned long long sendInternalTimeout;              //@synthesize sendInternalTimeout=_sendInternalTimeout - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responseHandlers;              //@synthesize responseHandlers=_responseHandlers - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6 ;
-(void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)transportReceivedMessage:(id)arg1 ;
-(void)_clearOutRemainingRequests;
-(NSMutableDictionary *)responseHandlers;
-(void)_peerTimedOut:(id)arg1 ;
-(unsigned long long)sendInternalTimeout;
-(void)setSendInternalTimeout:(unsigned long long)arg1 ;
-(void)setResponseHandlers:(NSMutableDictionary *)arg1 ;
@end

