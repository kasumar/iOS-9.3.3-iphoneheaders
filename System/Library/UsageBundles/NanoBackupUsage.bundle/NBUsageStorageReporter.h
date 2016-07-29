/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/NanoBackupUsage.bundle/NanoBackupUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NBManager, NSObject, NSArray, NSString;

@interface NBUsageStorageReporter : NSObject <PSStorageReporting> {

	NSMutableDictionary* _allBackups;
	NBManager* _backupManager;
	NSObject*<OS_dispatch_queue> _backupManagerQueue;
	NSObject*<OS_dispatch_semaphore> _backupManagerSemaphore;
	NSArray* _cachedBundleApps;
	NSMutableDictionary* _cachedCategorySizes;

}

@property (nonatomic,retain) NSMutableDictionary * allBackups;                                     //@synthesize allBackups=_allBackups - In the implementation block
@property (nonatomic,retain) NBManager * backupManager;                                            //@synthesize backupManager=_backupManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backupManagerQueue;                      //@synthesize backupManagerQueue=_backupManagerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> backupManagerSemaphore;              //@synthesize backupManagerSemaphore=_backupManagerSemaphore - In the implementation block
@property (nonatomic,retain) NSArray * cachedBundleApps;                                           //@synthesize cachedBundleApps=_cachedBundleApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCategorySizes;                            //@synthesize cachedCategorySizes=_cachedCategorySizes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)populateUsageBundleApps;
-(NBManager *)backupManager;
-(void)setCachedCategorySizes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedCategorySizes;
-(void)setBackupManager:(NBManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)backupManagerQueue;
-(NSArray *)cachedBundleApps;
-(NSObject*<OS_dispatch_semaphore>)backupManagerSemaphore;
-(void)setCachedBundleApps:(NSArray *)arg1 ;
-(NSMutableDictionary *)allBackups;
-(void)setBackupManagerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setBackupManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAllBackups:(NSMutableDictionary *)arg1 ;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(id)init;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
@end

