/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UITableViewCellDeleteConfirmationControl_Legacy, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	long long _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UITableViewCellDeleteConfirmationControl_Legacy* _deleteConfirmationControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(void)dealloc;
-(id)editControl:(BOOL)arg1 ;
-(id)deleteConfirmationControl:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)reorderControl:(BOOL)arg1 ;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(BOOL)isDataRequired;
@end

