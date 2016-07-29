/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/ABPickerViewController.h>
#import <libobjc.A.dylib/ABSimpleTextInputViewControllerDelegate.h>

@class NSString, NSArray, NSIndexPath;

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate> {

	NSString* _selectedService;
	NSString* _customService;
	NSArray* _defaultServices;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy) NSString * selectedService;              //@synthesize selectedService=_selectedService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultService;
+(id)defaultServices;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSelectedService:(NSString *)arg1 ;
-(void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2 ;
-(id)selectServiceTitle;
-(id)addCustomServiceButtonLabel;
-(id)addCustomServiceTitle;
-(id)addCustomServicePlaceholder;
-(NSString *)selectedService;
-(void)setStyleProvider:(id)arg1 ;
@end

