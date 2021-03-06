/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <ETSettings/ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h>

@class FKFriendsManager, ABPeoplePickerNavigationController, PSSpecifier, NSString;

@interface ETBlockListController : PSListController <ABPeoplePickerNavigationControllerPrivateMemberCellDelegate> {

	FKFriendsManager* _friendsManager;
	ABPeoplePickerNavigationController* _peoplePickerController;
	void* _addressBook;
	PSSpecifier* _addNewSpecifier;
	long long _specifierStartIndex;
	BOOL _editing;
	BOOL _ignoreBlockListChangedNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_specifierForBlockedAddress:(id)arg1 ;
-(void)_updateEditDoneButton;
-(void)_editDoneButtonTapped:(id)arg1 ;
-(void)_blockListChanged;
-(void)_updateForEditingState;
-(void)_entryDetail:(id)arg1 ;
-(void)_deleteEntry:(id)arg1 ;
-(void)reloadContent;
-(id)_allPhoneAndEmailValuesForRecord:(void*)arg1 ;
-(void)_addEntryFromPeoplePickerForPerson:(void*)arg1 animateView:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(CFArrayRef)arg3 memberCell:(id)arg4 ;
-(void)_dismissPeoplePicker;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)_specifierForRowIndex:(long long)arg1 ;
-(id)specifiers;
-(void)_addEntry:(id)arg1 ;
@end

