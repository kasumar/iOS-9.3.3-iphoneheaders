/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, NSString, PSSpecifier, PSTableCellHighlightContext, UILongPressGestureRecognizer;

@interface PSTableCell : UITableViewCell {

	id _value;
	UIImageView* _checkedImageView;
	BOOL _checked;
	BOOL _shouldHideTitle;
	NSString* _hiddenTitle;
	int _alignment;
	SEL _pAction;
	id _pTarget;
	BOOL _cellEnabled;
	PSSpecifier* _specifier;
	long long _type;
	BOOL _lazyIcon;
	BOOL _lazyIconDontUnload;
	BOOL _lazyIconForceSynchronous;
	NSString* _lazyIconAppID;
	BOOL _reusedCell;
	PSTableCellHighlightContext* _customHighlightContext;
	BOOL _forceHideDisclosureIndicator;
	BOOL _isCopyable;
	UILongPressGestureRecognizer* _longTapRecognizer;

}

@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) BOOL reusedCell;                                               //@synthesize reusedCell=_reusedCell - In the implementation block
@property (assign,nonatomic) BOOL forceHideDisclosureIndicator;                             //@synthesize forceHideDisclosureIndicator=_forceHideDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL isCopyable;                                               //@synthesize isCopyable=_isCopyable - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longTapRecognizer;              //@synthesize longTapRecognizer=_longTapRecognizer - In the implementation block
+(id)reuseIdentifierForSpecifier:(id)arg1 ;
+(Class)cellClassForSpecifier:(id)arg1 ;
+(id)stringFromCellType:(long long)arg1 ;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
+(id)reuseIdentifierForBasicCellTypes:(long long)arg1 ;
+(long long)cellTypeFromString:(id)arg1 ;
+(double)defaultCellHeight;
+(long long)cellStyle;
-(id)_automationID;
-(id)scriptingInfoWithChildren;
-(void)setAlignment:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(SEL)action;
-(id)title;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)target;
-(BOOL)canBecomeFirstResponder;
-(id)titleLabel;
-(void)setAction:(SEL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)_contentString;
-(void)copy:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(double)textFieldOffset;
-(BOOL)isChecked;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setReusedCell:(BOOL)arg1 ;
-(void)forceSynchronousIconLoadOnNextIconLoad;
-(void)cellRemovedFromView;
-(BOOL)canBeChecked;
-(void)highlightCellForDuration:(double)arg1 animateUnighlight:(BOOL)arg2 ;
-(void)_invalidateHighlightContext;
-(id)_copyableText;
-(void)_updateAccessoryTypeForSpecifier:(id)arg1 ;
-(void)longPressed:(id)arg1 ;
-(void)setShouldHideTitle:(BOOL)arg1 ;
-(id)blankIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)lazyIconQueue:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)setCellTarget:(id)arg1 ;
-(void)setCellAction:(SEL)arg1 ;
-(id)cellTarget;
-(SEL)cellAction;
-(void)setForceHideDisclosureIndicator:(BOOL)arg1 ;
-(id)titleTextLabel;
-(id)getIcon;
-(BOOL)cellEnabled;
-(BOOL)reusedCell;
-(BOOL)forceHideDisclosureIndicator;
-(BOOL)isCopyable;
-(void)setIsCopyable:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)longTapRecognizer;
-(void)setLongTapRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)valueLabel;
-(id)iconImageView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

