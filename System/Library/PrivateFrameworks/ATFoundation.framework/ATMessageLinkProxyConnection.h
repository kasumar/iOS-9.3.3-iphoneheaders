/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkProxyConnection.h>

@protocol ATMessageLinkProxyConnection <NSObject>
@required
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)connectWithCompletion:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, ATMessageLink, NSObject, NSString;

@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	ATMessageLink* _messageLink;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithMessageLink:(id)arg1 connection:(id)arg2 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(ATMessageLink *)messageLink;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
@end

