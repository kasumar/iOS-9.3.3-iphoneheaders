/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface _UIDocumentPickerManagementViewController : UITableViewController {

	NSArray* _allPickers;
	NSArray* _fileTypes;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSArray * allPickers;                 //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;                  //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)_doneButtonPressed;
-(NSArray *)allPickers;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)setFileTypes:(NSArray *)arg1 ;
-(NSArray *)fileTypes;
-(void)setAllPickers:(NSArray *)arg1 ;
-(void)switchToggled:(id)arg1 ;
@end

