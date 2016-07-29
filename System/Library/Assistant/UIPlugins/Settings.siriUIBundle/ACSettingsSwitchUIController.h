/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <Settings/ACSettingsUpdateDelegate.h>

@class SASettingBoolSnippet, ACSettingsSwitchSetting, ACSettingsSwitchView, NSString;

@interface ACSettingsSwitchUIController : SiriUISnippetViewController <ACSettingsUpdateDelegate> {

	SASettingBoolSnippet* _snippet;
	ACSettingsSwitchSetting* _setting;
	ACSettingsSwitchView* _settingView;
	BOOL _waitingForSettingInitialState;
	BOOL _shouldSetSettingDueToFirstAppearance;
	BOOL _shouldSetSettingDueToTap;
	BOOL _shouldSetSettingDueToExternalChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController;
-(void)_settingChangedExternally:(id)arg1 ;
-(void)_setSettingIfNeeded:(BOOL)arg1 ;
-(void)_setSettingFromSwitchTapIfNeeded;
-(void)_setSettingFromExternalChangeIfNeeded;
-(void)_switchTapped:(id)arg1 ;
-(BOOL)_waitingOnSettingState;
-(void)settingChangedExternally:(id)arg1 ;
-(void)_bluetoothAvailabilityChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSnippet:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(BOOL)removedAfterDialogProgresses;
@end

