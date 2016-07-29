/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMigrator : NSObject
+(id)sharedMigrator;
+(id)stringWithContext:(int)arg1 ;
-(void)migrateWithPostMigrationTaskQueue:(id)arg1 ;
-(void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 forceAllowHostPairing:(BOOL)arg3 ;
-(void)migratePostMDMDataMigratorWithContext:(int)arg1 ;
-(void)_createDirectories;
-(void)_removeInvalidOptionsFromLegacyCloudConfiguration;
-(void)_moveFilesToSystemGroupContainer;
-(void)_moveFilesToPublicDirectories;
-(void)_migrateManifestLocation;
-(void)_removeUnusedManifestArrays;
-(void)_removeDuplicatedHiddenIdentifiers;
-(void)_createStubs;
-(void)_removeOrphanedManifestEntries;
-(void)_transferSignerCertificates;
-(void)_transferRemovalPasswordsFromOriginalProfiles;
-(void)_migrateDefaults;
-(void)_migrateOTAProfiles;
-(void)_transferInstallationDatesFromOriginalProfiles;
-(void)_transferTagsToProfileStubs;
-(void)_removeOriginalCopies;
-(void)_applyDefaultSettings;
-(void)_migrateSettings;
-(void)_migrateClientRestrictions;
-(void)_updateClientRestrictions;
-(void)_updateProfileRestrictions;
-(void)_applyImpliedSettings;
-(void)_migrateIdentitiesToIdentitiesGroup;
-(void)_migrateCertificatesToCertificatesGroup;
-(void)_migrateSharedDeviceConfiguration;
-(void)_migrateLostModeLastLocationRequestDate;
-(void)_migrateSupervisionSettings;
-(void)_removeSupervisionProfiles;
-(void)_cleanUpAppConfiguration;
-(void)_removeUnmanageableApps;
-(void)_migrateProfileStubsForNetworkExtension;
-(void)_correctInstallOptionsOnProfileStubs;
-(void)_tagManagedAccounts;
-(void)_tagIMAPAccountsWithProfileAndPayloadProperties;
-(void)_wakeDaemonsPostMigration;
-(id)systemMetadataDictionary;
-(void)setSystemMetadataDictionary:(id)arg1 ;
-(id)userMetadataDictionary;
-(void)setUserMetadataDictionary:(id)arg1 ;
-(void)_migratePasscodeDidRestore:(BOOL)arg1 passcodeWasSet:(BOOL)arg2 ;
-(void)_removeiPCUCertificates;
-(id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1 ;
-(void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1 ;
-(BOOL)_applyAccountTagsToProfile:(id)arg1 ;
-(void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5 ;
-(void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5 ;
-(void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(BOOL)arg4 ;
-(id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1 ;
-(BOOL)__migratePersistentIDToIdentityGroup:(id)arg1 ;
-(BOOL)__migratePersistentIDToCertificateGroup:(id)arg1 ;
-(id)_lastSystemMigratedBuildVersion;
-(id)_lastUserMigratedBuildVersion;
@end

