/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKCalendarItemEditItemDelegate <NSObject>
@optional
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
-(id)viewControllerForEditItem:(id)arg1;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2;
-(void)editItemDidStartEditing:(id)arg1;
-(void)editItemDidEndEditing:(id)arg1;
-(void)editItem:(id)arg1 didSaveFromDetailViewController:(BOOL)arg2;
-(void)editItemTextChanged:(id)arg1;
-(void)editItemRequiresHeightChange:(id)arg1;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
-(long long)rowNumberForEditItem:(id)arg1;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(/*^block*/id)arg3;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 forSubitem:(unsigned long long)arg5;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(BOOL)arg2;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1;

@required
-(id)defaultAlertTitleForEditItem:(id)arg1;

@end

