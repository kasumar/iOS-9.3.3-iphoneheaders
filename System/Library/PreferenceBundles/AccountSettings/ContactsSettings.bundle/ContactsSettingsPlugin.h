/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ContactsSettings.bundle/ContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsSettings/ContactsSettings-Structs.h>
#import <libobjc.A.dylib/ACUISettingsPluginProtocol.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol ACUISettingsPluginParentProtocol, OS_dispatch_queue;
@class NSMutableArray, PSSpecifier, PSViewController, UIAlertController, UIPopoverController, CNContactPickerViewController, NSObject, NSString;

@interface ContactsSettingsPlugin : NSObject <ACUISettingsPluginProtocol, UIActionSheetDelegate, CNContactPickerDelegate, UIPopoverControllerDelegate> {

	void* _addressBook;
	NSMutableArray* _currentSpecifiers;
	PSSpecifier* _SIMImportSpacerSpecifier;
	PSSpecifier* _SIMImportSpecifier;
	PSSpecifier* _MeCardSpecifier;
	PSSpecifier* _ContactsSortOrderSpecifier;
	PSSpecifier* _PersonNameOrderSpecifier;
	PSSpecifier* _ContactsInMailSpecifier;
	PSViewController*<ACUISettingsPluginParentProtocol> _parentController;
	NSMutableArray* _contactStores;
	NSMutableArray* _contactStoreNames;
	long long _contactStoresCount;
	int _meCardLastCheckedSequenceNumber;
	CTServerConnectionRef _ctServerConnection;
	UIAlertController* _loadingContacts;
	CFDictionaryRef _importButtonIndexToStoreID;
	int _importStoreID;
	BOOL _shouldShowSIMImport;
	UIPopoverController* _meCardPopover;
	CNContactPickerViewController* _meCardPicker;
	NSObject*<OS_dispatch_queue> _addressBookQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)windowDidRotate:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(CTServerConnectionRef)_ctServerConnection;
-(id)footerText;
-(id)initWithParentController:(id)arg1 ;
-(id)headerText;
-(id)specifiers;
-(void)_rootControllerDidSuspend;
-(void)_dismissMeCardPickerAnimated:(BOOL)arg1 ;
-(BOOL)_importAlreadyInProgress;
-(void)_updateSIMImportVisibility;
-(void)_updateABStoresAndNames;
-(void)_updateSIMImportSpecifier:(BOOL)arg1 ;
-(void)_setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(void)_stopListeningForSIMPhonebookNotifications;
-(void)_noteImportEnded;
-(void)_erroredDuringSIMPhonebookFetch;
-(id)_simPhonebookEntryAtIndex:(int)arg1 ;
-(void)_noteImportStarted;
-(void)_fetchSIMPhonebook;
-(void)_beginImportToStoreID:(int)arg1 ;
-(void)_reloadMeCardCellIfVisible;
-(void)_showMeCardPopover;
-(void)_synchronizeNanoUserDefault:(id)arg1 ;
-(void)setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(id)defaultContactsName:(id)arg1 ;
-(id)contactStoreTitlesForSpecifier:(id)arg1 ;
-(void)_phonebookSelected;
-(void)_phonebookAvailable;
-(void)importFromSIM:(id)arg1 ;
-(void)_clearSpecifiers;
-(void)_SIMStatusChanged;
-(id)meCardName:(id)arg1 ;
-(void)showMeCardPicker:(id)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
-(id)contactsInMailEnabled:(id)arg1 ;
-(void)setContactsInMailEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)shouldLoadSpecifiersLazily;
@end

