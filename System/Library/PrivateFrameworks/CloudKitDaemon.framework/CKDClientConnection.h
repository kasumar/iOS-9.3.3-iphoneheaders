/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKXPCDaemon.h>

@class CKDClientProxy, NSString;

@interface CKDClientConnection : NSObject <CKXPCDaemon> {

	CKDClientProxy* _proxy;

}

@property (nonatomic,retain) CKDClientProxy * proxy;                //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKDClientProxy *)proxy;
-(void)cancelOperationWithIdentifier:(id)arg1 ;
-(void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchUserIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performPublishAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyWebSharingOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performModifyRecordAccessOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performQueryOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifySubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchChangedRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyBadgeOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifySharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performAcceptSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchShareInfoOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchUserQuotaOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3 ;
-(void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 ;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performFetchEnvironmentOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountChangedWithID:(id)arg1 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wipeAllCachesAndDie;
-(void)updatePushTokens;
-(void)purgeTmpDirectory;
-(void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(void)_addProxyOperationWithInfo:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 forwardingBlock:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
@end

