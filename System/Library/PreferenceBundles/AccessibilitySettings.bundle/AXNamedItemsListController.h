/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray;

@interface AXNamedItemsListController : AccessibilityBaseListController {

	NSMutableArray* _namedItems;
	BOOL _shouldIgnoreNextSettingsUpdate;

}

@property (nonatomic,readonly) SEL settingsGetter; 
@property (nonatomic,readonly) SEL settingsSetter; 
-(void)_updateIndexesOnSpecifiers;
-(SEL)settingsGetter;
-(BOOL)shouldAllowSelection;
-(id)nameForItem:(id)arg1 ;
-(void)_saveItems;
-(id)_itemName:(id)arg1 ;
-(void)_setItemName:(id)arg1 specifier:(id)arg2 ;
-(id)setName:(id)arg1 forItem:(id)arg2 ;
-(id)namedItemForSpecifier:(id)arg1 ;
-(void)didSaveItems;
-(id)namedItems;
-(BOOL)isNamedItemSpecifier:(id)arg1 ;
-(id)namedItemSpecifiers;
-(SEL)settingsSetter;
-(void)handleExternalSettingsChange;
-(BOOL)_isNamedItemSpecifierAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateEditButton;
-(BOOL)_shouldShowEditButton;
-(id)specifiers;
@end

