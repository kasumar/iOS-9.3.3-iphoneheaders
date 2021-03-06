/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/ContainerMigrator.migrator/ContainerMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSArray;

@interface MCMGlobalConfiguration : NSObject {

	NSURL* _homeDirectory;
	NSURL* _installdHomeDirectory;
	NSURL* _sharedContainersDirectory;
	NSURL* _cachesDirectory;
	NSURL* _libraryDirectory;
	NSURL* _stagingDirectory;
	NSURL* _deathrowDirectory;
	NSURL* _replaceDirectory;
	NSURL* _bundleDirectory;
	NSURL* _transientDirectory;
	NSURL* _transientBundleDirectory;
	unsigned _currentMobileUserId;
	NSMutableDictionary* _perUserConfigurations;

}

@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * libraryDirectory; 
@property (readonly) NSURL * stagingDirectory; 
@property (readonly) NSURL * deathrowDirectory; 
@property (readonly) NSURL * replaceDirectory; 
@property (readonly) NSURL * sharedContainersDirectory; 
@property (readonly) NSURL * bundleDirectory; 
@property (readonly) NSURL * transientDirectory; 
@property (readonly) NSURL * transientBundleDirectory; 
@property (readonly) NSArray * appUserDataItemNames; 
@property (nonatomic,readonly) unsigned currentMobileUserId;              //@synthesize currentMobileUserId=_currentMobileUserId - In the implementation block
+(id)sharedInstance;
-(id)getPerUserConfigurationForUserId:(unsigned)arg1 ;
-(id)getPerUserConfigurationForCurrentMobileUser;
-(NSURL *)bundleDirectory;
-(NSURL *)libraryDirectory;
-(id)containerDirectoryURLForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 ;
-(NSURL *)sharedContainersDirectory;
-(unsigned)currentMobileUserId;
-(NSURL *)deathrowDirectory;
-(NSURL *)transientDirectory;
-(NSURL *)replaceDirectory;
-(BOOL)migrationFileExistsWithName:(id)arg1 ;
-(NSURL *)stagingDirectory;
-(NSURL *)transientBundleDirectory;
-(NSArray *)appUserDataItemNames;
-(id)cachesDirectory;
-(id)init;
-(NSURL *)logDirectory;
@end

