/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ETSettings/ETPeopleViewController.h>
#import <ETSettings/ETDeleteButtonDelegate.h>

@protocol ETSettingsPeopleViewControllerDelegate;
@class UILabel, ETDeleteButton, NSTimer;

@interface ETSettingsPeopleViewController : ETPeopleViewController <ETDeleteButtonDelegate> {

	unsigned long long _addPersonIndex;
	UILabel* _titleLabel;
	ETDeleteButton* _deleteButton;
	NSTimer* _deleteButtonAppearanceTimer;
	id<ETSettingsPeopleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ETSettingsPeopleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)_selectSlotAtIndex:(unsigned long long)arg1 includeSelectionIndicator:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)deleteSelectedPerson;
-(void)_groupTitleChanged;
-(void)_removeDeleteButton;
-(double)_titleLabelTopOffset;
-(double)_dialViewTopOffset;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)_deleteButtonAppearanceTimerFired;
-(void)_stopDeleteButtonAppearanceTimer;
-(void)_startDeleteButtonAppearanceTimerIfNecessary;
-(void)deleteButtonDidFinishHideAnimation:(id)arg1 ;
-(void)setDelegate:(id<ETSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<ETSettingsPeopleViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_deleteButtonTapped;
@end

