/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSSet, NSDictionary, NSArray, NSString;

@interface MIGlobalConfiguration : NSObject {

	NSURL* _installdPath;
	NSURL* _mobilePath;
	NSURL* _rootPath;
	NSURL* _carrierBundlesDir;
	NSURL* _stagingRoot;
	NSURL* _coreServicesDir;
	NSURL* _systemAppsDir;
	NSURL* _internalAppsDir;
	NSURL* _developerAppsDir;
	NSURL* _factoryMountDir;
	NSURL* _systemFrameworksRootDirectory;
	NSURL* _internalFrameworksRootDirectory;
	NSURL* _developerFrameworksRootDirectory;
	NSURL* _dataDir;
	NSURL* _archiveDir;
	NSURL* _cachesDir;
	NSSet* _allFrameworksDirectories;
	NSDictionary* _systemAppBundleIDToInfoMap;
	NSDictionary* _coreServicesAppBundleIDToInfoMap;
	NSDictionary* _internalAppBundleIDToInfoMap;
	BOOL _codeSigningEnforcementIsDisabled;
	NSSet* _builtInFrameworkBundleIDs;
	BOOL _lowerInstallPriority;
	BOOL _skipDeviceFamilyCheck;
	BOOL _skipThinningCheck;
	BOOL _allowPatchWithoutSinf;
	unsigned _uid;
	unsigned _gid;
	long long _nSimultaneousInstallations;

}

@property (readonly) BOOL lowerInstallPriority;                                    //@synthesize lowerInstallPriority=_lowerInstallPriority - In the implementation block
@property (readonly) BOOL skipDeviceFamilyCheck;                                   //@synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck - In the implementation block
@property (readonly) BOOL skipThinningCheck;                                       //@synthesize skipThinningCheck=_skipThinningCheck - In the implementation block
@property (readonly) BOOL allowPatchWithoutSinf;                                   //@synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf - In the implementation block
@property (readonly) BOOL codeSigningEnforcementIsDisabled; 
@property (readonly) long long nSimultaneousInstallations;                         //@synthesize nSimultaneousInstallations=_nSimultaneousInstallations - In the implementation block
@property (readonly) NSURL * carrierBundlesDirectory; 
@property (readonly) NSURL * stagingRoot; 
@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * coreServicesDirectory; 
@property (readonly) NSURL * systemAppsDirectory; 
@property (readonly) NSURL * internalAppsDirectory; 
@property (readonly) NSURL * developerAppsDirectory; 
@property (readonly) NSURL * factoryMountDirectory; 
@property (readonly) NSURL * systemFrameworksRootDirectory; 
@property (readonly) NSURL * internalFrameworksRootDirectory; 
@property (readonly) NSURL * developerFrameworksRootDirectory; 
@property (readonly) NSSet * allFrameworksDirectories; 
@property (readonly) NSURL * dataDirectory; 
@property (readonly) NSURL * cachesDirectory; 
@property (readonly) NSArray * appBundleMetadataItemNames; 
@property (readonly) NSArray * appUserDataItemNames; 
@property (readonly) NSSet * installationBlacklist; 
@property (readonly) NSSet * builtInApplicationBundleIDs; 
@property (readonly) NSDictionary * systemAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * coreServicesAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * internalAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * diskImageAppBundleIDToInfoMap; 
@property (readonly) NSSet * builtInFrameworkBundleIDs; 
@property (readonly) unsigned uid;                                                 //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned gid;                                                 //@synthesize gid=_gid - In the implementation block
@property (readonly) NSURL * oldContainerPath; 
@property (readonly) NSURL * oldInstallMapPath; 
@property (readonly) NSURL * oldDataDirectoryPath; 
@property (readonly) NSURL * oldLoggingPath; 
@property (readonly) NSURL * oldArchiveDirectory; 
@property (readonly) NSURL * dataDirectoryPath; 
@property (readonly) NSURL * roleUserMigrationMarkerFilePath; 
@property (assign) BOOL haveUpdatedPluginContainersWithParentID; 
@property (readonly) NSString * alternateThinningModelIdentifier; 
+(id)sharedInstance;
-(NSArray *)appUserDataItemNames;
-(NSDictionary *)systemAppBundleIDToInfoMap;
-(NSDictionary *)internalAppBundleIDToInfoMap;
-(NSURL *)oldContainerPath;
-(NSSet *)installationBlacklist;
-(NSURL *)systemAppsDirectory;
-(NSURL *)internalAppsDirectory;
-(NSURL *)developerAppsDirectory;
-(NSURL *)factoryMountDirectory;
-(NSURL *)coreServicesDirectory;
-(NSDictionary *)coreServicesAppBundleIDToInfoMap;
-(NSDictionary *)diskImageAppBundleIDToInfoMap;
-(BOOL)skipDeviceFamilyCheck;
-(BOOL)skipThinningCheck;
-(NSString *)alternateThinningModelIdentifier;
-(NSSet *)allFrameworksDirectories;
-(NSSet *)builtInApplicationBundleIDs;
-(NSURL *)dataDirectoryPath;
-(NSURL *)systemFrameworksRootDirectory;
-(NSURL *)internalFrameworksRootDirectory;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(id)_bundleIDMapForAppsInDirectory:(id)arg1 ;
-(id)diskImageApplicationsDirectories;
-(id)mountPointForDevice:(unsigned)arg1 ;
-(id)diskImageMountPoints;
-(BOOL)codeSigningEnforcementIsDisabled;
-(NSURL *)oldInstallMapPath;
-(NSURL *)oldDataDirectoryPath;
-(NSURL *)oldLoggingPath;
-(NSURL *)oldArchiveDirectory;
-(NSURL *)roleUserMigrationMarkerFilePath;
-(NSURL *)carrierBundlesDirectory;
-(NSURL *)stagingRoot;
-(NSURL *)developerFrameworksRootDirectory;
-(NSArray *)appBundleMetadataItemNames;
-(NSSet *)builtInFrameworkBundleIDs;
-(void)reScanSystemApps;
-(void)reScanCoreServicesApps;
-(void)reScanInternalApps;
-(BOOL)haveUpdatedPluginContainersWithParentID;
-(void)setHaveUpdatedPluginContainersWithParentID:(BOOL)arg1 ;
-(BOOL)lowerInstallPriority;
-(BOOL)allowPatchWithoutSinf;
-(long long)nSimultaneousInstallations;
-(NSURL *)cachesDirectory;
-(id)init;
-(unsigned)uid;
-(NSURL *)dataDirectory;
-(unsigned)gid;
-(NSURL *)logDirectory;
@end

