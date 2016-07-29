/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
-(long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1;

@end

