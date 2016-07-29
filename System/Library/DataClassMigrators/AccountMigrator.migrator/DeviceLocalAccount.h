/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/BasicAccount.h>
#import <AccountMigrator/AccountCreationProtocol.h>

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
+(id)_identifier;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
+(id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1 ;
+(BOOL)isTetheredSyncingDataclass:(id)arg1 ;
+(id)tetheredSourceForDataClass:(id)arg1 ;
+(id)typeString;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

