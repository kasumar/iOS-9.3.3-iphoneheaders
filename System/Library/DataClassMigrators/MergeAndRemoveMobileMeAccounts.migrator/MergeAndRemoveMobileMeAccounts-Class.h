/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ASSAccountsManager;

@interface MergeAndRemoveMobileMeAccounts : DataClassMigrator {

	ASSAccountsManager* _manager;

}
-(BOOL)_mergeAccountDataToLocalStore:(id)arg1 ;
-(BOOL)_removeAccount:(id)arg1 ;
-(BOOL)performMigration;
-(id)dataClassName;
@end
