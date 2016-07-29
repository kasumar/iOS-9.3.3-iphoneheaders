/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoClockBridgeSettings/NanoClockBridgeSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField, NSString;

@interface NCBSMonogramEntryViewController : PSListController <UITextFieldDelegate, UIAlertViewDelegate> {

	UITextField* _monogramEntry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomMonogram:(id)arg1 specifier:(id)arg2 ;
-(id)customMonogram:(id)arg1 ;
-(void)_resetEntryField;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

