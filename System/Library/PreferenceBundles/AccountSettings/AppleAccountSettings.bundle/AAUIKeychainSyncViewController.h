/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NSArray, NSString;

@interface AAUIKeychainSyncViewController : PSListController {

	PSSpecifier* _switchCellSpecifier;
	NSMutableArray* _approvalSpecifiers;
	NSArray* _advancedSettingSpecifiers;
	int _keychainSyncStatus;
	int _keychainSyncNotificationToken;
	int _keychainViewNotificationToken;
	BOOL _isTogglingKeychainSync;
	NSString* _pendingApprovalText;
	id _restrictionChangeNotificationObserver;

}
-(id)_specifierForApproveButton;
-(id)_advancedSettingsSpecifiers;
-(void)_showResetKeychainDialog:(id)arg1 ;
-(void)_keychainSyncStatusDidChange;
-(int)_keychainSyncStatus;
-(id)_specifierForKeychainSwitchCell;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)_showApproveWithSecurityCodeDialog:(id)arg1 ;
-(void)_updateKeychainSyncStatusAndReloadSpecifiers:(BOOL)arg1 ;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_addApprovalPendingSpecifierIfNecessary;
-(id)_specifierForPendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(id)_specifierForResetKeychainButton;
-(id)_pendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(void)_setKeychainSyncEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isKeychainSyncEnabledForSpecifier:(id)arg1 ;
-(void)_handleKeychainSyncEnablingCompletionWithNewState:(int)arg1 error:(id)arg2 ;
-(void)_handleKeychainSyncDisablingCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_reloadParentSpecifier;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
@end

