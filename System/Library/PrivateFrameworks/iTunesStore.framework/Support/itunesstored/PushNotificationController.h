/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ISOperationQueue, NSMutableArray, NSString;

@interface PushNotificationController : NSObject <APSConnectionDelegate> {

	NSMutableDictionary* _connections;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _lastRegisterAttemptTime;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ISOperationQueue* _operationQueue;
	long long _pushEnabledState;
	NSMutableArray* _registerBlocks;
	NSMutableArray* _tokenOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)soundFilesDirectoryPath;
+(id)sharedInstance;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_resetLastRegisterAttemptTime;
-(void)_updatePushEnabledState;
-(void)_loadConnectionsInContext:(id)arg1 ;
-(void)_postTokensIfNecessaryInContext:(id)arg1 ;
-(id)_clientForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 inContext:(id)arg3 ;
-(void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3 ;
-(id)_environmentForName:(id)arg1 createIfNeeded:(BOOL)arg2 inContext:(id)arg3 ;
-(void)_postTokenForEnvironment:(id)arg1 ;
-(void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_reloadActiveEnvironmentInContext:(id)arg1 ;
-(void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2 ;
-(id)_environmentNameForConnection:(id)arg1 ;
-(BOOL)_isPushEnabled;
-(void)_reloadPushStateInContext:(id)arg1 ;
-(void)_openConnectionForEnvironment:(id)arg1 ;
-(id)_enabledTopics;
-(BOOL)_isValidEnvironment:(id)arg1 ;
-(id)_newAPSConnectionWithEnvironment:(id)arg1 ;
-(id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2 ;
-(void)_updateEnvironmentAfterTokenPost:(id)arg1 ;
-(void)_fireRegisterBlocksAfterOperation:(id)arg1 ;
-(long long)_numberOfClientsInContext:(id)arg1 ;
-(void)_closeEnvironment:(id)arg1 inContext:(id)arg2 ;
-(void)_reloadDaemonClientInContext:(id)arg1 ;
-(void)postClientNotificationWithUserInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_urlBagDidLoadNotification:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end

