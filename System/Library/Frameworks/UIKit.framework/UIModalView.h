/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIModalViewDelegate;
@class UILabel, UIToolbar, UIWindow, NSMutableArray, UIView, NSString;

@interface UIModalView : UIView <UITextFieldDelegate> {

	id<UIModalViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	double _startX;
	double _startY;
	id _context;
	long long _cancelButton;
	long long _defaultButton;
	long long _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	long long _suspendTag;
	long long _dismissButtonIndex;
	double _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _dimView;
	UIView* _sheetView;
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	}  _modalViewFlags;

}

@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic,__weak) id<UIModalViewDelegate> delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)noteOrientationChangingTo:(long long)arg1 ;
+(CGSize)minimumSize;
+(id)_popupAlertBackground;
+(id)visibleAlert;
+(BOOL)atLeastOneAlertVisible;
+(id)topMostAlert;
-(void)drawRect:(CGRect)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)context;
-(BOOL)canBecomeFirstResponder;
-(id)tableView;
-(long long)numberOfRows;
-(BOOL)_isAnimating;
-(void)layout;
-(id)subtitle;
-(id)textFieldAtIndex:(long long)arg1 ;
-(double)_maxHeight;
-(id)defaultButton;
-(void)setDefaultButton:(id)arg1 ;
-(id)_defaultButton;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)userDidCancelPopoverView:(id)arg1 ;
-(id)keyboard;
-(void)setSubtitle:(id)arg1 ;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(void)setContext:(id)arg1 ;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(BOOL)runsModal;
-(long long)textFieldCount;
-(id)textField;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)setTaglineText:(id)arg1 ;
-(id)_addButtonWithTitleText:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(void)_setDefaultButton:(id)arg1 ;
-(long long)buttonCount;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(BOOL)groupsTextFields;
-(void)popupAlertAnimated:(BOOL)arg1 atOffset:(double)arg2 ;
-(void)popupAlertAnimated:(BOOL)arg1 ;
-(void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2 ;
-(void)presentSheetFromBehindView:(id)arg1 ;
-(void)presentSheetFromAboveView:(id)arg1 ;
-(void)presentSheetInView:(id)arg1 ;
-(void)presentSheetToAboveView:(id)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 ;
-(void)presentSheetFromButtonBar:(id)arg1 ;
-(void)_performPopup:(BOOL)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(long long)_currentOrientation;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)setSuspendTag:(long long)arg1 ;
-(long long)suspendTag;
-(void)setTitleMaxLineCount:(long long)arg1 ;
-(long long)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(long long)arg1 ;
-(long long)bodyMaxLineCount;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(BOOL)tableShouldShowMinimumContent;
-(void)setShowsOverSpringBoardAlerts:(BOOL)arg1 ;
-(BOOL)showsOverSpringBoardAlerts;
-(BOOL)_canShowAlerts;
-(BOOL)isBodyTextTruncated;
-(void)setDimView:(id)arg1 ;
-(id)_dimView;
-(CGSize)backgroundSize;
-(void)setNumberOfRows:(long long)arg1 ;
-(void)setAlertSheetStyle:(int)arg1 ;
-(int)alertSheetStyle;
-(void)setDimsBackground:(BOOL)arg1 ;
-(BOOL)dimsBackground;
-(void)setRunsModal:(BOOL)arg1 ;
-(CGRect)titleRect;
-(double)_buttonHeight;
-(long long)numberOfLinesInTitle;
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)arg1 ;
-(void)_prepareToBeReplaced;
-(BOOL)_isSBAlert;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_alertSheetTextFieldReturn:(id)arg1 ;
-(void)_buttonClicked:(id)arg1 ;
-(id)buttons;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(BOOL)_needsKeyboard;
-(void)_cancelAnimated:(BOOL)arg1 ;
-(void)_temporarilyHideAnimated:(BOOL)arg1 ;
-(void)_layoutIfNeeded;
-(void)_growAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_cleanupAfterPopupAnimation;
-(void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupInitialFrame;
-(void)_repopup;
-(void)_hideAnimated:(BOOL)arg1 ;
-(void)_performPopoutAnimationAnimated:(BOOL)arg1 ;
-(void)_rotatingAnimationDidStop:(id)arg1 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_layoutPopupAlertWithOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_appSuspended:(id)arg1 ;
-(void)_setAlertSheetStyleFromButtonBar:(id)arg1 ;
-(void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupTitleStyle;
-(double)_titleHorizontalInset;
-(double)_titleVerticalTopInset;
-(double)_titleVerticalBottomInset;
-(double)_bottomVerticalInset;
-(void)_truncateViewHeight:(id)arg1 toFitInFrame:(CGRect)arg2 withMinimumHeight:(double)arg3 ;
-(void)_createTitleLabelIfNeeded;
-(void)setDestructiveButton:(id)arg1 ;
-(id)destructiveButton;
-(BOOL)_manualKeyboardIsVisible;
-(void)_repopupNoAnimation;
-(BOOL)_dimsBackground;
-(void)popupAlertAnimated:(BOOL)arg1 fromBarButtonItem:(id)arg2 ;
-(void)_slideSheetOut:(BOOL)arg1 ;
-(void)setBlocksInteraction:(BOOL)arg1 ;
-(BOOL)blocksInteraction;
-(id)bodyTextView;
-(id)taglineTextView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIModalViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id<UIModalViewDelegate>)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(long long)defaultButtonIndex;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isVisible;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5 ;
@end

