/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MergeAndRemoveMobileMeAccounts/ASSBasicAccount.h>
#import <MergeAndRemoveMobileMeAccounts/AccountSettingsUIAccount.h>
#import <AccountMigrator/AccountCreationProtocol.h>

@class NSString;

@interface ASSDeviceLocalAccount : ASSBasicAccount <AccountSettingsUIAccount, AccountCreationProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_identifier;
+(void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2 ;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)typeString;
-(BOOL)_deleteDataSourceForDataclass:(id)arg1 ;
-(void)_saveChangesToOnMyDeviceAccount;
-(BOOL)_setTetheredDataSourceEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(void)setTetheredEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(BOOL)otherAccountEnabledForDataclass:(id)arg1 ;
-(void)deleteLocalDataSourceForDataclass:(id)arg1 ;
-(id)uniqueId;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)supportsPush;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

