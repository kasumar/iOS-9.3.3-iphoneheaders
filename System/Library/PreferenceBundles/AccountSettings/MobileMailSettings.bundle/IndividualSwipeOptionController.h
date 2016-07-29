/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDataSourcePrivate.h>

@class NSString;

@interface IndividualSwipeOptionController : PSListItemsController <UITableViewDataSource, UITableViewDataSourcePrivate> {

	BOOL _showArchiveFooter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)listItemSelected:(id)arg1 ;
-(id)itemsFromParent;
-(BOOL)_canSelectOptionAtIndex:(unsigned long long)arg1 ;
@end

