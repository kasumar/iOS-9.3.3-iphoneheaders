/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSObject;

@interface WLSQLController : NSObject {

	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}
+(id)sharedInstance;
+(id)downloadsPath;
-(void)_openDatabase;
-(id)init;
-(void)_closeDatabase;
-(id)messagePhoneNumberIccForCcAcNumber:(id)arg1 ;
-(void)_deleteSummaries;
-(void)_deleteAccounts;
-(id)_databaseFilename;
-(int)_sqlite3_bind_NSDate:(id)arg1 forStatement:(sqlite3_stmtRef)arg2 position:(int)arg3 ;
-(id)summariesForAccounts:(id)arg1 sortedByModifiedDate:(BOOL)arg2 ;
-(id)_sqlite3_column_NSDateForStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(id)_migratableAppsForDevice:(id)arg1 ;
-(BOOL)_foundHandleIDs:(id)arg1 representSameGroupMessageAsHandleIDs:(id)arg2 handleIDsAreComplete:(BOOL)arg3 ;
-(void)_insertStatistics_onDatabaseQueue:(id)arg1 ;
-(long long)_performQuery:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(void)_ensureCorrectSchema;
-(long long)_schemaVersion;
-(void)deleteMetadataForAllDevices;
-(void)deleteAccountsAndSummariesForAllDevices;
-(void)deleteMigratableAppsForAllDevices;
-(void)deleteSummaryDataForAllDevices;
-(void)deleteMigrationDatabase;
-(unsigned long long)insertAccount:(id)arg1 migrator:(id)arg2 device:(id)arg3 ;
-(id)accountsForMigrator:(id)arg1 device:(id)arg2 ;
-(BOOL)deleteAccountsAndSummariesForMigrator:(id)arg1 device:(id)arg2 ;
-(unsigned long long)insertRecordSummary:(id)arg1 account:(id)arg2 ;
-(void)totalSummaryItemSizeForAccounts:(id)arg1 addOverhead:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)totalSummaryDownloadSegmentCountForAccounts:(id)arg1 ;
-(void)setData:(id)arg1 forSummary:(id)arg2 ;
-(id)dataForSummary:(id)arg1 ;
-(void)setWillMigrateForSummary:(id)arg1 ;
-(void)removeDataAndSetDidMigrateForSummary:(id)arg1 ;
-(void)setMigrationError:(id)arg1 forSummary:(id)arg2 ;
-(id)migrationErrors;
-(void)updateModifiedDateForSummary:(id)arg1 ;
-(id)summariesForAccount:(id)arg1 ;
-(id)migrationMetadataForSourceDevice:(id)arg1 strictMatch:(BOOL)arg2 ;
-(void)insertMetadata:(id)arg1 forSourceDevice:(id)arg2 ;
-(void)setMetadata:(id)arg1 forSourceDevice:(id)arg2 ;
-(void)insertMigratableApp:(id)arg1 forDevice:(id)arg2 ;
-(id)migratableAppsForAllDevices;
-(void)insertMessagePhoneNumberWithIcc:(id)arg1 ccAcNumber:(id)arg2 ;
-(void)deleteMessagePhoneNumbersForAllDevices;
-(id)groupMessageInfoMatchingSourceThreadID:(id)arg1 ;
-(id)groupMessageInfoMatchingSortedHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 didMatchExactly:(BOOL*)arg3 ;
-(void)insertGroupMessageInfoWithSourceThreadID:(id)arg1 roomName:(id)arg2 groupID:(id)arg3 ;
-(void)insertGroupMessageInfoWithSortedHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 roomName:(id)arg3 groupID:(id)arg4 ;
-(void)deleteGroupMessageInfoForAllDevices;
-(id)statisticsForContentType:(id)arg1 ;
-(void)updateStatistics:(id)arg1 ;
-(void)deleteStatisticsForAllDevices;
@end

