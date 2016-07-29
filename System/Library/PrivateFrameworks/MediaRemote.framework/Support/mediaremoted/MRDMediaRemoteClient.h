/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, MRDXPCMessageHandling, MRDMediaRemoteClientDelegate, OS_xpc_object;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSObject, NSMutableDictionary, NSArray, NSString, MRDTaskAssertion, MRDContentItemClient;

@interface MRDMediaRemoteClient : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _registeredCustomOrigins;
	NSArray* _supportedRemoteControlCommands;
	NSString* _playbackQueueRevision;
	BOOL _canBeNowPlayingApplication;
	BOOL _keepAlive;
	unsigned _routeDiscoveryMode;
	id<MRDXPCMessageHandling> _messageHandler;
	id<MRDMediaRemoteClientDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSString* _bundleIdentifier;
	MRDTaskAssertion* _currentTaskAssertion;
	unsigned long long _routeDiscoveryCount;
	MRDContentItemClient* _contentItemCient;

}

@property (assign,nonatomic) id<MRDXPCMessageHandling> messageHandler;               //@synthesize messageHandler=_messageHandler - In the implementation block
@property (assign,nonatomic) id<MRDMediaRemoteClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) MRDTaskAssertion * currentTaskAssertion;                //@synthesize currentTaskAssertion=_currentTaskAssertion - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApplication;                        //@synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication - In the implementation block
@property (nonatomic,readonly) unsigned long long routeDiscoveryCount;               //@synthesize routeDiscoveryCount=_routeDiscoveryCount - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode;                            //@synthesize routeDiscoveryMode=_routeDiscoveryMode - In the implementation block
@property (nonatomic,copy) NSArray * supportedRemoteControlCommands; 
@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic) BOOL keepAlive;                                         //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,readonly) MRDContentItemClient * contentItemCient;              //@synthesize contentItemCient=_contentItemCient - In the implementation block
@property (nonatomic,copy) NSString * playbackQueueRevision; 
-(NSArray *)supportedRemoteControlCommands;
-(void)setSupportedRemoteControlCommands:(NSArray *)arg1 ;
-(BOOL)canBeNowPlayingApplication;
-(void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasRegisteredCustomOrigin:(MROriginRef)arg1 ;
-(void)relayXPCMessage:(id)arg1 andReply:(BOOL)arg2 ;
-(void)setCurrentTaskAssertion:(MRDTaskAssertion *)arg1 ;
-(MRDTaskAssertion *)currentTaskAssertion;
-(MRDContentItemClient *)contentItemCient;
-(id)initWithConnection:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setCanBeNowPlayingApplication:(BOOL)arg1 ;
-(void)addRegisteredCustomOrigin:(MROriginRef)arg1 ;
-(void)removeRegisteredCustomOrigin:(MROriginRef)arg1 ;
-(void)setKeepAlive:(BOOL)arg1 ;
-(NSString *)playbackQueueRevision;
-(void)relayXPCMessage:(id)arg1 andReply:(BOOL)arg2 resultCallback:(/*^block*/id)arg3 ;
-(void)setPlaybackQueueRevision:(NSString *)arg1 ;
-(id)registeredCustomOrigins;
-(id)_runAssertionName;
-(unsigned long long)routeDiscoveryCount;
-(void)setDelegate:(id<MRDMediaRemoteClientDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<MRDMediaRemoteClientDelegate>)delegate;
-(BOOL)isActive;
-(NSString *)bundleIdentifier;
-(void)_invalidate;
-(NSObject*<OS_xpc_object>)connection;
-(unsigned)routeDiscoveryMode;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(BOOL)keepAlive;
-(int)pid;
-(void)_handleXPCMessage:(id)arg1 ;
-(id<MRDXPCMessageHandling>)messageHandler;
-(void)setMessageHandler:(id<MRDXPCMessageHandling>)arg1 ;
@end

