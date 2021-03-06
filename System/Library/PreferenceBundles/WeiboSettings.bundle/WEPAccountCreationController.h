/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol WEAccountCreationDelegate;
@class NSString, PSTextFieldSpecifier, PSSpecifier;

@interface WEPAccountCreationController : ACUIViewController {

	NSString* _screenName;
	NSString* _email;
	NSString* _password;
	NSString* _verify;
	NSString* _gender;
	BOOL _geoEnabled;
	PSTextFieldSpecifier* _emailSpecifier;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	id<WEAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WEAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)verifyWithSpecifier:(id)arg1 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(BOOL)_haveEnoughValuesForValidation;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentPasswordTooShortAlert;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(BOOL)_validateValues;
-(BOOL)_isScreenNameValid;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setGeotagAccountSetting:(BOOL)arg1 ;
-(void)_legalTermsOfServiceLinkTapped:(id)arg1 ;
-(BOOL)_isEmailAddressValid;
-(void)_signUpButtonClicked:(id)arg1 ;
-(void)setScreenName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentPasswordTooLongAlert;
-(id)screenNameWithSpecifier:(id)arg1 ;
-(void)_createAccount;
-(void)_presentInvalidEmailAddressAlert;
-(void)_presentPasswordVerifyDoNotMatchAlert;
-(id)emailWithSpecifier:(id)arg1 ;
-(id)genderWithSpecifier:(id)arg1 ;
-(void)setGender:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentPasswordTooSimpleAlert;
-(BOOL)_isPasswordBlackListed;
-(void)_presentScreenNameInvalidAlert;
-(void)_presentErrorCreatingAccount;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_incrementNewAccountCounter;
-(void)_presentResponseError:(id)arg1 ;
-(void)_presentScreenNameTooLongAlert;
-(id)_localizedMessageForErrorCode:(id)arg1 ;
-(void)setDelegate:(id<WEAccountCreationDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<WEAccountCreationDelegate>)delegate;
-(void)viewDidLoad;
-(id)gender;
-(void)setGender:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)_updateDoneButton;
-(id)specifiers;
-(void)propertyValueChanged:(id)arg1 ;
-(void)updateNavButtons;
@end

