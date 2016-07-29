/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _NMRClient : NSObject {

	NSXPCConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}
+(id)sharedClient;
-(id)init;
-(id)_proxy;
-(void)refreshMediaRemoteStateIfNecessary;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withCommandOptions:(id)arg2 commandResultHandler:(/*^block*/id)arg3 ;
-(void)prewarmCompanionSystemMusicApp;
-(void)fetchCompanionCloudAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchCompanionSpecializedQueueInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

