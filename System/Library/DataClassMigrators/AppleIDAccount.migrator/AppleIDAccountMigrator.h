/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/AppleIDAccount.migrator/AppleIDAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface AppleIDAccountMigrator : DataClassMigrator
-(void)_removeAppleIDAccount:(id)arg1 accountStore:(id)arg2 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

