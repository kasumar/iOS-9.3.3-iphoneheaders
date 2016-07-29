/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSLocale, NSString, PSSpecifier, NSArray, NSMutableArray;

@interface InternationalSettingsController : PSListController {

	NSLocale* _locale;
	BOOL _shouldReloadSpecifiers;
	unsigned long long _deviceLanguageIndex;
	NSString* _topMostLanguage;
	BOOL _changePrimaryLanguage;
	PSSpecifier* _addLanguageSpecifier;
	NSArray* _deviceLanguageGroup;
	NSArray* _preferredLanguagesGroup;
	NSArray* _regionFormatGroup;
	NSArray* _regionFormatExampleGroup;
	NSMutableArray* _updatedAppleLanguages;
	PSSpecifier* _numberingSystemSpecifier;

}

@property (assign,nonatomic) BOOL shouldReloadSpecifiers;                         //@synthesize shouldReloadSpecifiers=_shouldReloadSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * addLanguageSpecifier;                  //@synthesize addLanguageSpecifier=_addLanguageSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguageGroup;                       //@synthesize deviceLanguageGroup=_deviceLanguageGroup - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguagesGroup;                   //@synthesize preferredLanguagesGroup=_preferredLanguagesGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatGroup;                         //@synthesize regionFormatGroup=_regionFormatGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatExampleGroup;                  //@synthesize regionFormatExampleGroup=_regionFormatExampleGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedAppleLanguages;              //@synthesize updatedAppleLanguages=_updatedAppleLanguages - In the implementation block
@property (assign,nonatomic) BOOL changePrimaryLanguage;                          //@synthesize changePrimaryLanguage=_changePrimaryLanguage - In the implementation block
@property (nonatomic,retain) PSSpecifier * numberingSystemSpecifier;              //@synthesize numberingSystemSpecifier=_numberingSystemSpecifier - In the implementation block
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg1 forPreferredLanguages:(id)arg2 ;
+(id)formattedMoneyAndNumbers:(id)arg1 country:(id)arg2 ;
+(void)syncPreferencesAndPostNotificationForLanguageChange;
+(void)syncPreferencesForLanguageOrLocaleChange;
+(void)postNotificationForLanguageChange;
+(void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(id)formattedTime:(id)arg1 ;
+(id)reloadLocale:(id)arg1 ;
+(id)baseLanguageIdentifierFromLanguageList:(id)arg1 ;
+(void)setLanguage:(id)arg1 ;
+(id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1 ;
+(double)sampleTime;
+(id)formattedDate:(id)arg1 ;
-(void)updateCell:(id)arg1 forPreferredLanguageAtIndex:(unsigned long long)arg2 ;
-(id)localizedLanguage:(id)arg1 ;
-(NSArray *)deviceLanguageGroup;
-(void)setRegionFormatGroup:(NSArray *)arg1 ;
-(id)language:(id)arg1 ;
-(void)showOfficialLanguageSheet:(id)arg1 ;
-(NSArray *)regionFormatGroup;
-(void)showLocaleSheet:(id)arg1 ;
-(void)setNumberingSystemSpecifier:(PSSpecifier *)arg1 ;
-(void)logStatistics;
-(id)locale:(id)arg1 ;
-(void)cancelChangeLanguage:(id)arg1 ;
-(PSSpecifier *)numberingSystemSpecifier;
-(BOOL)canEditLanguageAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(void)updateSelectionStyleForVisibleCells;
-(void)updateSpecifiersForLocaleRegionChange:(id)arg1 ;
-(void)reloadLocale;
-(void)setRegionFormatExampleGroup:(NSArray *)arg1 ;
-(void)setUpdatedAppleLanguages:(NSMutableArray *)arg1 ;
-(void)changeLanguage:(id)arg1 ;
-(void)toggleEdit;
-(NSMutableArray *)updatedAppleLanguages;
-(PSSpecifier *)addLanguageSpecifier;
-(unsigned long long)sectionIndexForTableView:(id)arg1 fromSuperSectionIndex:(unsigned long long)arg2 ;
-(BOOL)shouldReloadSpecifiers;
-(void)setCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)calendar:(id)arg1 ;
-(void)showLanguageSheet:(id)arg1 ;
-(id)numberingSystem:(id)arg1 ;
-(void)setNumberingSystem:(id)arg1 specifier:(id)arg2 ;
-(id)numberingSystemsTitles;
-(id)numberingSystemsShortTitles;
-(void)setShouldReloadSpecifiers:(BOOL)arg1 ;
-(NSArray *)preferredLanguagesGroup;
-(BOOL)changePrimaryLanguage;
-(void)setChangePrimaryLanguage:(BOOL)arg1 ;
-(void)setDeviceLanguageGroup:(NSArray *)arg1 ;
-(void)setAddLanguageSpecifier:(PSSpecifier *)arg1 ;
-(id)numberingSystemsValues;
-(NSArray *)regionFormatExampleGroup;
-(void)setPreferredLanguagesGroup:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)cancelEdits;
-(id)specifiers;
@end

