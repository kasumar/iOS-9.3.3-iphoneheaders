/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextField.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView;

@interface UISearchBarTextField : UITextField {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	BOOL __preventSelectionViewActivation;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;              //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(id)textInputTraits;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)_becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(void)_removeEffectsBackgroundViews;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(void)_activateSelectionView;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(CGRect)_suffixFrame;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(BOOL)_preventSelectionViewActivation;
-(long long)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
@end

