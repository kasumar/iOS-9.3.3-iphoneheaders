/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileInstallationHelperServiceProtocol
@required
-(void)migrateMobileContentWithCompletion:(/*^block*/id)arg1;
-(void)migrateSystemAppDataWithCompletion:(/*^block*/id)arg1;
-(void)wipeStagingRootWithCompletion:(/*^block*/id)arg1;
-(void)installCarrierBundleAtURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stageItemAtURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)makeSymlinkFromAppDataContainerToBundleForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)createSafeHarborWithIdentifier:(id)arg1 containerType:(long long)arg2 andMigrateDataFrom:(id)arg3 completion:(/*^block*/id)arg4;
-(void)createAppSnapshotWithBundleID:(id)arg1 snapshotToURL:(id)arg2 onlyV1AppIfPresent:(BOOL)arg3 placeholderOnly:(BOOL)arg4 completion:(/*^block*/id)arg5;

@end

