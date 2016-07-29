/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDPlaylistsViewController.h>

@class MCDTableViewController;

@interface MCDPlaylistsBrowserViewController : MCDPlaylistsViewController {

	MCDTableViewController* _viewController;

}

@property (nonatomic,retain) MCDTableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setViewController:(MCDTableViewController *)arg1 ;
-(MCDTableViewController *)viewController;
-(void)_limitedUIDidChange;
@end

