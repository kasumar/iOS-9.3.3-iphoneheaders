/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, NSString;

@interface NPTOBridgeAmountChooser : UITableViewController <PSController> {

	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (assign,nonatomic) UIViewController*<PSController> parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                             //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_syncedAmount;
-(void)_setSyncedAmount:(unsigned long long)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)suspend;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSRootController *)rootController;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(BOOL)canBeShownFromSuspendedState;
@end

