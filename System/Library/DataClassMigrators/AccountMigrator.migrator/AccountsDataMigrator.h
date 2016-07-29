/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/AccountMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class NSMutableDictionary;

@interface AccountsDataMigrator : DataClassMigrator {

	NSMutableDictionary* _collatedMigrationData;
	BOOL _foundOldMailAccountsToMigrate;
	BOOL _foundOldDAAccountsToMigrate;

}
-(BOOL)_migrateAccountsFrom7A241:(id)arg1 ;
-(void)_copyAsideAccountsPlist;
-(void)_saveCollatedMigrationInformation;
-(id)_absolutePathToOldAccountsInfoRemovalSentinel;
-(id)_convertMailAccountDescription:(id)arg1 type:(id)arg2 ;
-(id)_convertExchangeAccountDescription:(id)arg1 ;
-(id)_accountTypeStringForMailAccountClass:(id)arg1 ;
-(id)_accountShortTypeStringForMailAccountClass:(id)arg1 ;
-(BOOL)_migrateAccountsFrom9A334:(id)arg1 ;
-(BOOL)_account:(id)arg1 hasChildAccountOfType:(id)arg2 ;
-(BOOL)_migrateAccountsFrom7A150:(id)arg1 ;
-(BOOL)_migrateNewAccountsInfo:(id)arg1 ;
-(BOOL)_migrateAccountsFrom9B176:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A242:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A153:(id)arg1 ;
-(BOOL)_saveMigrationInformation;
-(BOOL)_removeOldAccountsInfo;
-(BOOL)_migrateMailAccounts:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A149:(id)arg1 ;
-(BOOL)_migrateAccountsFrom9A182:(id)arg1 ;
-(BOOL)_migrateAccountsFrom8C136:(id)arg1 ;
-(BOOL)_failedToRemoveOldAccountsInfo;
-(BOOL)_migrateAccountsFrom8F191:(id)arg1 ;
-(BOOL)_migrateDAAccounts:(id)arg1 ;
-(BOOL)_migrateAccountsFrom8A293:(id)arg1 ;
-(BOOL)_migrateAccountsFrom8B117:(id)arg1 ;
-(id)_urlSafeUsername:(id)arg1 ;
-(BOOL)_tetheredDisabledInSources:(CFArrayRef)arg1 ;
-(id)_accountTypeForMailAccountClass:(id)arg1 ;
-(BOOL)_calDAVAccount:(id)arg1 matchesUmbrellaAccount:(id)arg2 ;
-(id)_expectedCalDAVUsernamesForAccount:(id)arg1 ;
-(id)_expectedCalDAVHostnameForAccount:(id)arg1 ;
-(id)_expectedCalDAVPrincipalURLsForAccount:(id)arg1 ;
-(void)_enableProvisioningForDataClass:(id)arg1 toAccount:(id)arg2 ifChildAccountExistsOfType:(id)arg3 ;
-(BOOL)_newAccountsInformationPresent;
-(void)dealloc;
-(BOOL)performMigration;
-(BOOL)executeMigrationSteps;
-(id)dataClassName;
@end

