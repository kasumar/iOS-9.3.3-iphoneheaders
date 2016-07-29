/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <MobilePhoneSettings/PhoneSettingsListController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>

@class NSString, NSArray, TPSetPINViewController;

@interface PhoneSettingsController : PhoneSettingsListController <TPSetPINViewControllerDelegate> {

	NSString* _cachedMobileIdentity;
	MGNotificationTokenStructRef _capabilitiesChangedNotificationToken;
	NSArray* _allSpecifiers;
	TPSetPINViewController* _setPINViewController;

}

@property (retain) NSArray * allSpecifiers;                                    //@synthesize allSpecifiers=_allSpecifiers - In the implementation block
@property (retain) TPSetPINViewController * setPINViewController;              //@synthesize setPINViewController=_setPINViewController - In the implementation block
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(id)specifiers;
-(void)_updateCachedMobileIdentity;
-(void)_settingSaveError:(id)arg1 ;
-(void)_callStatusChanged:(id)arg1 ;
-(void)_simChanged:(id)arg1 ;
-(void)_updateSpecifiers:(BOOL)arg1 ;
-(void)_settingsResumed;
-(void)setAllSpecifiers:(NSArray *)arg1 ;
-(NSArray *)allSpecifiers;
-(void)_updateMyNumberSpecifiers;
-(void)_updateCarrierServiceSpecifiers;
-(BOOL)_shouldShowSpecifier:(id)arg1 ;
-(void)changeVoicemailPassword:(id)arg1 ;
-(void)setSetPINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)setPINViewController;
-(void)_handleVoicemailPasswordChangeTaskNotification:(id)arg1 ;
-(BOOL)shouldShowMyNumberEditor;
-(BOOL)_specifier:(id)arg1 isEqualToSpecifier:(id)arg2 ;
-(void)simRemoved;
-(void)setTTYEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)showRelayCalls;
-(void)setRelayCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getRelayCallsEnabled:(id)arg1 ;
-(void)showMyAccount:(id)arg1 ;
-(int)showCallGroup;
-(int)showCarrierSpacer;
-(int)showVoicemailPassword;
-(int)showSIMSpacer;
-(void)setMyNumber:(id)arg1 specifier:(id)arg2 ;
-(id)myNumber:(id)arg1 ;
@end

