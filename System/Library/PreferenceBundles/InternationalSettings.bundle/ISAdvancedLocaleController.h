/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface ISAdvancedLocaleController : PSListController {

	BOOL _automaticLocaleDisabled;
	id _proposedLegacyRightToLeftEnabled;

}

@property (assign,nonatomic) BOOL automaticLocaleDisabled;                     //@synthesize automaticLocaleDisabled=_automaticLocaleDisabled - In the implementation block
@property (nonatomic,retain) id proposedLegacyRightToLeftEnabled;              //@synthesize proposedLegacyRightToLeftEnabled=_proposedLegacyRightToLeftEnabled - In the implementation block
-(void)reloadLocale;
-(void)cancelRightToLeftLegacyMode:(id)arg1 ;
-(id)automatic:(id)arg1 ;
-(BOOL)shouldShowLegacyRightToLeftSpecifier;
-(BOOL)automaticLocaleDisabled;
-(void)setAutomaticLocaleDisabled:(BOOL)arg1 ;
-(void)setProposedLegacyRightToLeftEnabled:(id)arg1 ;
-(id)proposedLegacyRightToLeftEnabled;
-(id)legacyRightToLeftEnabled:(id)arg1 ;
-(void)setAutomatic:(id)arg1 specifier:(id)arg2 ;
-(void)setLegacyRightToLeftEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)confirmRightToLeftLegacyMode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

