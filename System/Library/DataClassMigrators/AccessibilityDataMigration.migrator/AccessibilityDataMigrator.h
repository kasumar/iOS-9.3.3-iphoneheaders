/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/AccessibilityDataMigration.migrator/AccessibilityDataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface AccessibilityDataMigrator : DataClassMigrator
-(void)_eagleMigrateBalanceSettingFromCoreAudio;
-(void)_migratePreferences;
-(void)_okemoMigrateVoiceOverGradeTwoAutoTranslate;
-(void)_okemoMigrateVoiceOverTypingMode;
-(void)_monarchMigrateSpeechRateSettings;
-(void)_monarchClearSwitchControlMenuItemVersionPreferences;
-(void)_monarchRemoveNavigationDirectionRotorIfNeeded;
-(float)_monarchConvertSpeechRate:(float)arg1 ;
-(void)_okemoMigrateBrailleOutputMode;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
@end

