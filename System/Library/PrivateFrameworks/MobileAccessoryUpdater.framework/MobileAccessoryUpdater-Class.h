/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileAccessoryUpdaterDelegate, FudConnection, OS_dispatch_queue;
@class NSString, NSObject;

@interface MobileAccessoryUpdater : NSObject {

	id<MobileAccessoryUpdaterDelegate> _delegate;
	id<FudConnection> _connection;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifier;
	char* _cClientIdentifier;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSString* _activeFilter;
	BOOL _isInternalClient;
	BOOL _didUnregister;

}
-(void)createConnection;
-(void)dealloc;
-(id)bundleIdentifier;
-(void)unregister;
-(id)activeFilter;
-(id)clientIdentifier;
-(BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 ;
-(id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 isInternalClient:(BOOL)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)handleInboundEvent:(id)arg1 ;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 replyHandler:(/*^block*/id)arg4 ;
-(const char*)getActiveDeviceClassCString;
-(id)getActiveDeviceClass;
-(int)getOperationCodeFromName:(id)arg1 ;
-(BOOL)doesOperationCodeRequireFilter:(int)arg1 ;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 ;
-(void)performStep:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)queryNextStep:(id*)arg1 ;
-(BOOL)setActiveDeviceClass:(id)arg1 ;
-(void)performNextStepWithOptions:(id)arg1 ;
-(BOOL)setLastRemoteFindDate:(id)arg1 ;
@end

