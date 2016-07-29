/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountCreationControlling.h>

@class ACAccountStore, PSSpecifier, PSViewController, SLGoogleWebAuthController, NSString;

@interface GoogleAccountCreationController : NSObject <ACUIAccountCreationControlling> {

	ACAccountStore* _accountStore;
	PSSpecifier* _specifier;
	PSViewController* _viewController;
	/*^block*/id _completion;
	SLGoogleWebAuthController* _webAuthController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_validateUniquenessAndAddAccountWithUsername:(id)arg1 fullUserName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_showDuplicateAccountAlertForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAccountCreationWithSpecifier:(id)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

