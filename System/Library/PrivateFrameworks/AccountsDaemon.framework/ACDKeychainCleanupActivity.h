/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class ACAccountStore, NSObject;

@interface ACDKeychainCleanupActivity : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSObject*<OS_dispatch_queue> _activityQueue;

}
+(id)sharedActivity;
-(void)checkIn;
-(id)init;
-(void)queueNonPersistentCredentialRemoval:(id)arg1 ;
-(void)_configureXPCActivityWithCriteria:(id)arg1 ;
-(void)_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)_removeExpiredCredentials;
-(void)_removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_unregisterActivity;
-(BOOL)_canRemoveCredentialItem:(id)arg1 ;
@end

