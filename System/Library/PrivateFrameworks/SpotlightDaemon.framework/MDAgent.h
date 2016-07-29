/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXPCProxyCreating;
@class MDAgentDelegate;

@interface MDAgent : NSObject {

	MDAgentDelegate* _delegate;
	id<NSXPCProxyCreating> _clientLink;

}

@property (__weak) MDAgentDelegate * delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<NSXPCProxyCreating> clientLink;              //@synthesize clientLink=_clientLink - In the implementation block
+(id)xpcInterface;
+(id)machServiceName;
+(id)clientXPCInterface;
+(id)clientBundleIDForConnection:(id)arg1 ;
-(void)setDelegate:(MDAgentDelegate *)arg1 ;
-(MDAgentDelegate *)delegate;
-(void)setClientLink:(id<NSXPCProxyCreating>)arg1 ;
-(id<NSXPCProxyCreating>)clientLink;
-(id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3 ;
-(id)_clientForBundleID:(id)arg1 ;
@end

