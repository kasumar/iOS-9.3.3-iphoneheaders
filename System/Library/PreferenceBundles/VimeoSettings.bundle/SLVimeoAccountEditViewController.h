/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/VimeoSettings.bundle/VimeoSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount;

@interface SLVimeoAccountEditViewController : ACUIViewController {

	ACAccount* _account;
	BOOL _isPasswordDirty;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)_updatePasswordWithValueFromTextField;
-(void)_showAlertForError:(id)arg1 ;
-(void)_handlePasswordChangeWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_updateDoneButton;
-(id)specifiers;
@end

