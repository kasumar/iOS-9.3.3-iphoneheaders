/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/PassbookSettings.bundle/PassbookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <NanoPassbookBridgeSettings/PKPassbookSettingsDelegate.h>

@class PKPassbookSettingsController, PKPassbookSettingsDefaultBehavior, NSString;

@interface PassbookSettingsListController : PSListController <PKPassbookSettingsDelegate> {

	PKPassbookSettingsController* _settingsController;
	PKPassbookSettingsDefaultBehavior* _defaultBehavior;
	BOOL _isVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshPasses;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)settingsControllerRequestsReloadSpecifiers:(id)arg1 ;
-(void)settingsController:(id)arg1 requestsReloadSpecifier:(id)arg2 ;
-(void)settingsController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)settingsController:(id)arg1 requestsAddCardPreflightWithCompletion:(/*^block*/id)arg2 ;
-(void)settingsController:(id)arg1 requestsDetailViewControllerForPass:(id)arg2 animated:(BOOL)arg3 ;
-(void)settingsController:(id)arg1 requestsPushViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)specifiers;
@end

