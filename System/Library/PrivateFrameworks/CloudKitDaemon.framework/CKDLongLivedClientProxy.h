/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(id)longLivedProxyWithContext:(id)arg1 ;
+(id)sharedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
-(id)description;
-(id)bundleIdentifier;
-(id)applicationIdentifier;
-(id)initWithClientContext:(id)arg1 ;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(id)sourceApplicationBundleIdentifier;
-(BOOL)hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(BOOL)isLongLived;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(id)CKPropertiesDescription;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasAllowAccessBeforeFirstUnlockSinceBootEntitlement;
-(id)apsEnvironmentEntitlement;
-(BOOL)usePublicTokenEntitlement;
-(BOOL)darkWakeEnabledEntitlement;
@end

