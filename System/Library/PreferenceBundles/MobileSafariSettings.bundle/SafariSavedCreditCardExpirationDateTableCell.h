/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPickerView, UIPopoverController, NSNumberFormatter, NSString;

@interface SafariSavedCreditCardExpirationDateTableCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {

	UIPickerView* _pickerView;
	UIPopoverController* _popoverController;
	NSNumberFormatter* _monthNumberFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_pickerView;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(BOOL)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)inputView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_updateDetailTextLabel;
-(id)_pickerTitleFont;
-(id)_monthNumberFormatter;
@end

