/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/MPUAutoupdatingTextContainer.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/_UILayoutBaselineUpdating.h>
#import <UIKit/_UIFloatingContentViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyInputPrivate.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextInput.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UICascadingTextStorage, UIImage, UIView, UITextInputTraits, UIButton, UITextFieldBorderView, UITextFieldBackgroundView, _UIFloatingContentView, UIVisualEffectView, _UIDetachedFieldEditorBackgroundView, UITextFieldLabel, UIImageView, UILabel, UITextInteractionAssistant, UITapGestureRecognizer, UISystemInputViewController, UITextFieldAtomBackgroundView, NSLayoutConstraint, _UIBaselineLayoutStrut, UIColor, NSString, UIFont, NSAttributedString, MPUTextContainerContentSizeUpdater, NSDictionary, NSIndexSet, UITextRange, UITextPosition;

@interface UITextField : UIControl <MPUAutoupdatingTextContainer, ABText, UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, UIKeyInputPrivate, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding> {

	_UICascadingTextStorage* _textStorage;
	long long _borderStyle;
	double _minimumFontSize;
	id _delegate;
	UIImage* _background;
	UIImage* _disabledBackground;
	long long _clearButtonMode;
	UIView* _leftView;
	long long _leftViewMode;
	UIView* _rightView;
	long long _rightViewMode;
	UITextInputTraits* _traits;
	UITextInputTraits* _nonAtomTraits;
	double _fullFontSize;
	UIEdgeInsets _padding;
	NSRange _selectionRangeWhenNotEditing;
	int _scrollXOffset;
	int _scrollYOffset;
	float _progress;
	UIButton* _clearButton;
	CGSize _clearButtonOffset;
	CGSize _leftViewOffset;
	CGSize _rightViewOffset;
	UITextFieldBorderView* _backgroundView;
	UITextFieldBorderView* _disabledBackgroundView;
	UITextFieldBackgroundView* _systemBackgroundView;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _contentBackdropView;
	_UIDetachedFieldEditorBackgroundView* _fieldEditorBackgroundView;
	UIVisualEffectView* _fieldEditorEffectView;
	UITextFieldLabel* _displayLabel;
	UITextFieldLabel* _placeholderLabel;
	UITextFieldLabel* _dictationLabel;
	UITextFieldLabel* _suffixLabel;
	UITextFieldLabel* _prefixLabel;
	UIImageView* _iconView;
	UILabel* _label;
	double _labelOffset;
	UITextInteractionAssistant* _interactionAssistant;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UISystemInputViewController* _systemInputViewController;
	UITextFieldAtomBackgroundView* _atomBackgroundView;
	struct {
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsPlaceholderOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned explicitAlignment : 1;
		unsigned implementsCustomDrawing : 1;
		unsigned needsClearing : 1;
		unsigned suppressContentChangedNotification : 1;
		unsigned allowsEditingTextAttributes : 1;
		unsigned usesAttributedText : 1;
		unsigned backgroundViewState : 2;
		unsigned clearingBehavior : 2;
		unsigned overridePasscodeStyle : 1;
		unsigned shouldResignWithoutUpdate : 1;
		unsigned blurEnabled : 1;
		unsigned disableFocus : 1;
		unsigned disableRemoteTextEditing : 1;
	}  _textFieldFlags;
	BOOL _deferringBecomeFirstResponder;
	BOOL _avoidBecomeFirstResponder;
	BOOL _setSelectionRangeAfterFieldEditorIsAttached;
	BOOL _animateNextHighlightChange;
	BOOL _tvUseVibrancy;
	NSLayoutConstraint* _baselineLayoutConstraint;
	_UIBaselineLayoutStrut* _baselineLayoutLabel;
	UIColor* _tvCustomTextColor;

}

@property (assign,setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:,nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long borderStyle;                                                                                                                                        //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,nonatomic) BOOL clearsOnBeginEditing; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumFontSize;                                                                                                                                       //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate;                                                                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * background;                                                                                                                                         //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImage * disabledBackground;                                                                                                                                 //@synthesize disabledBackground=_disabledBackground - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (assign,nonatomic) long long clearButtonMode;                                                                                                                                    //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (nonatomic,retain) UIView * leftView;                                                                                                                                            //@synthesize leftView=_leftView - In the implementation block
@property (assign,nonatomic) long long leftViewMode;                                                                                                                                       //@synthesize leftViewMode=_leftViewMode - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                                                                                                                           //@synthesize rightView=_rightView - In the implementation block
@property (assign,nonatomic) long long rightViewMode;                                                                                                                                      //@synthesize rightViewMode=_rightViewMode - In the implementation block
@property (retain) UIView * inputView;                                                                                                                                                     //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion; 
@property (setter=_setBaselineLayoutConstraint:,nonatomic,retain) NSLayoutConstraint * _baselineLayoutConstraint;                                                                          //@synthesize baselineLayoutConstraint=_baselineLayoutConstraint - In the implementation block
@property (setter=_setBaselineLayoutLabel:,nonatomic,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;                                                                                //@synthesize baselineLayoutLabel=_baselineLayoutLabel - In the implementation block
@property (assign,nonatomic) BOOL _tvUseVibrancy;                                                                                                                                          //@synthesize tvUseVibrancy=_tvUseVibrancy - In the implementation block
@property (nonatomic,retain) UIColor * _tvCustomTextColor;                                                                                                                                 //@synthesize tvCustomTextColor=_tvCustomTextColor - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
+(BOOL)_isDisplayingShortcutViewController;
+(BOOL)_isCompatibilityTextField;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)pk_setPlaceholderColor:(id)arg1 ;
-(id)pk_placeholderColor;
-(void)showRightViewForEditing;
-(void)removeRightViews;
-(BOOL)isReallyFirstResponder;
-(MPUTextContainerContentSizeUpdater *)MPU_contentSizeUpdater;
-(BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
-(void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1 ;
-(void)configureFromScriptTextField:(id)arg1 ;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(void)_cnui_applyContactStyle;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_scriptingInfo;
-(BOOL)_isPasscodeStyle;
-(double)_passcodeStyleAlpha;
-(void)_updateForPasscodeAppearance;
-(void)_setOverridePasscodeStyle:(BOOL)arg1 ;
-(BOOL)_overridePasscodeStyle;
-(void)_setPasscodeStyleAlpha:(double)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UITextFieldDelegate>)delegate;
-(id)_backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_inputController;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(BOOL)isEditable;
-(void)setEnabled:(BOOL)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)_windowBecameKey;
-(id)_encodableSubviews;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(BOOL)_canDrawContent;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tintColorDidChange;
-(void)interactionTintColorDidChange;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(CGSize)shadowOffset;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)shadowColor;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(void)_updateLabel;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(UIFont *)font;
-(BOOL)isEditing;
-(id)textLabel;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_fieldEditor;
-(BOOL)_shouldObscureInput;
-(CGPoint)_originForTextFieldLabel:(id)arg1 ;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)fieldEditorDidChange:(id)arg1 ;
-(NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_sanitizeText:(id)arg1 ;
-(void)selectAllFromFieldEditor:(id)arg1 ;
-(id)textInputTraits;
-(UIColor *)textColor;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(UIView *)textInputView;
-(void)willDetachFieldEditor:(id)arg1 ;
-(BOOL)detachFieldEditor:(id)arg1 ;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(CGRect)editRect;
-(void)willAttachFieldEditor:(id)arg1 ;
-(void)attachFieldEditor:(id)arg1 ;
-(long long)textAlignment;
-(void)didAttachFieldEditor:(id)arg1 ;
-(NSDictionary *)typingAttributes;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(BOOL)hasText;
-(void)clearText;
-(NSRange)insertFilteredText:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(UITextRange *)selectedTextRange;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(unsigned long long)characterOffsetAtPoint:(CGPoint)arg1 ;
-(BOOL)hasMarkedText;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)_ownsInputAccessoryView;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(UIView *)inputAccessoryView;
-(BOOL)_restoreFirstResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_nonDestructivelyResignFirstResponder;
-(UIView *)inputView;
-(id)_effectiveContentView;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_floatingContentView;
-(id)viewForLastBaselineLayout;
-(void)setLabel:(id)arg1 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(id)webView;
-(id)_proxyTextInput;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(void)layoutTilesNow;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_lookup:(CGPoint)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(BOOL)hasSelection;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(BOOL)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setInputView:(UIView *)arg1 ;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)minimumFontSize;
-(void)setShadowBlur:(double)arg1 ;
-(double)shadowBlur;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)setBorderStyle:(long long)arg1 ;
-(CGRect)iconRect;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(CGRect)_availableTextRectExcludingButtonsForBounds:(CGRect)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)setUndoEnabled:(BOOL)arg1 ;
-(void)setTextCentersVertically:(BOOL)arg1 ;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(BOOL)_isDisplayingLookupViewController;
-(void)_uninstallSelectGestureRecognizer;
-(void)_installSelectGestureRecognizer;
-(void)_selectGestureChanged:(id)arg1 ;
-(UIImage *)background;
-(void)setBackground:(UIImage *)arg1 ;
-(void)_updateContentBackdropView;
-(BOOL)_blurEnabled;
-(NSString *)placeholder;
-(CGSize)_leftViewOffset;
-(void)_setLeftViewOffset:(CGSize)arg1 ;
-(CGSize)clearButtonOffset;
-(void)setClearButtonOffset:(CGSize)arg1 ;
-(float)paddingTop;
-(void)setPaddingTop:(float)arg1 ;
-(void)setRightViewMode:(long long)arg1 ;
-(void)_setRightViewOffset:(CGSize)arg1 ;
-(void)_setDisableFocus:(BOOL)arg1 ;
-(BOOL)_partsShouldBeMini;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(id)_systemBackgroundView;
-(void)__resumeBecomeFirstResponder;
-(void)_activateSelectionView;
-(id)_placeholderLabel;
-(void)setLeftViewMode:(long long)arg1 ;
-(id)_defaultPromptString;
-(void)setDisabledBackground:(UIImage *)arg1 ;
-(void)setClearButtonMode:(long long)arg1 ;
-(id)searchText;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)_clearButton;
-(void)_updateButtons;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(float)paddingLeft;
-(BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1 ;
-(BOOL)_fieldEditorAttached;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(BOOL)_hasSuffixField;
-(CGRect)_suffixFrame;
-(BOOL)_showsLeftView;
-(long long)_currentTextAlignment;
-(float)paddingRight;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(long long)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(id)_text;
-(int)clearingBehavior;
-(void)setDrawsAsAtom:(BOOL)arg1 ;
-(void)setClearingBehavior:(int)arg1 ;
-(BOOL)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(void)_setSuffix:(id)arg1 withColor:(id)arg2 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(unsigned long long)offsetInMarkedTextForSelection:(id)arg1 ;
-(float)paddingBottom;
-(void)setPaddingBottom:(float)arg1 ;
-(void)_forceObscureAllText;
-(void)setClearsOnBeginEditing:(BOOL)arg1 ;
-(id)_placeholderView;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(void)_updateBaselineInformationDependentOnBounds;
-(CGSize)_textSize;
-(void)_selectionMayChange:(id)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(BOOL)_inPopover;
-(void)_drawTextInRect:(CGRect)arg1 forLabel:(id)arg2 ;
-(void)setAtomStyle:(int)arg1 ;
-(void)_setBaselineLayoutConstraint:(id)arg1 ;
-(id)createTextLabelWithTextColor:(id)arg1 ;
-(CGRect)_frameForLabel:(id)arg1 inTextRect:(CGRect)arg2 ;
-(void)_updateTextColorForFocusedState;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(void)createPlaceholderIfNecessary;
-(void)_updateTextLabel;
-(void)_updateForTintColor;
-(BOOL)clearsOnBeginEditing;
-(void)_stopObservingFieldEditorScroll;
-(void)_setNeedsStyleRecalc;
-(void)_sizeChanged:(BOOL)arg1 ;
-(CGSize)_textSizeUsingFullFontSize:(BOOL)arg1 ;
-(void)_createBaselineLayoutLabelIfNecessary;
-(long long)clearButtonMode;
-(id)clearButton;
-(BOOL)_shouldEndEditing;
-(void)scrollTextFieldToVisible;
-(void)_initialScrollDidFinish:(id)arg1 ;
-(void)setSelectionRange:(NSRange)arg1 ;
-(id)customOverlayContainer;
-(void)_syncTypingAttributesWithDefaultAttribute:(id)arg1 ;
-(double)actualMinimumFontSize;
-(float)_marginTopForBounds:(CGRect)arg1 ;
-(id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3 ;
-(void)_updateAtomTextColor;
-(CGRect)clearButtonRect;
-(BOOL)_showsClearButton:(BOOL)arg1 ;
-(BOOL)_showsRightView;
-(void)setFont:(id)arg1 fullFontSize:(float)arg2 ;
-(BOOL)_heightShouldBeMini;
-(long long)borderStyle;
-(BOOL)_hasContent;
-(BOOL)_showsAtomBackground;
-(CGRect)_atomBackgroundViewFrame;
-(BOOL)_showsClearButtonWhenEmpty;
-(CGRect)_baselineLeftViewRectForBounds:(CGRect)arg1 ;
-(double)_baselineLayoutConstraintConstantForBounds:(CGRect)arg1 ;
-(void)_setUpBaselineLayoutConstraintsForBounds:(CGRect)arg1 ;
-(BOOL)_isShowingPlaceholder;
-(BOOL)_tvUseVibrancy;
-(BOOL)clearsPlaceholderOnBeginEditing;
-(CGRect)_prefixFrame;
-(void)_updatePlaceholderPosition;
-(void)_updateAtomBackground;
-(void)_updateAutosizeStyleIfNeeded;
-(void)_layoutLabels;
-(void)_layoutContent;
-(CGRect)borderRectForBounds:(CGRect)arg1 ;
-(id)_attributedText;
-(BOOL)_textNeedsSanitizing:(id)arg1 ;
-(void)finishedSettingTextOrAttributedText;
-(void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)set_tvUseVibrancy:(BOOL)arg1 ;
-(void)set_tvCustomTextColor:(UIColor *)arg1 ;
-(void)_setTextColor:(id)arg1 focusStateChange:(BOOL)arg2 ;
-(void)_invalidateBaselineLayoutConstraints;
-(id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2 ;
-(void)finishedSettingPlaceholder;
-(void)_setActualRightView:(id)arg1 ;
-(void)_setActualLeftView:(id)arg1 ;
-(void)_setActualRightViewMode:(long long)arg1 ;
-(void)_setActualLeftViewMode:(long long)arg1 ;
-(float)_marginTop;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
-(void)drawSuffixInRect:(CGRect)arg1 ;
-(void)drawPrefixInRect:(CGRect)arg1 ;
-(void)drawDictationLabelInRect:(CGRect)arg1 ;
-(void)_applicationResuming:(id)arg1 ;
-(long long)_blurEffectStyleForAppearance;
-(void)_updateFieldEditorBackgroundViewLayout:(BOOL)arg1 ;
-(void)_endedEditing;
-(void)drawBorder:(CGRect)arg1 ;
-(BOOL)_implementsCustomDrawing;
-(BOOL)isUndoEnabled;
-(CGRect)adjustedCaretRectForCaretRect:(CGRect)arg1 ;
-(id)_insertDictationResultPlaceholderOverlay;
-(UIColor *)_tvCustomTextColor;
-(void)_createInteractionAssistant;
-(BOOL)_isShowingPrefix;
-(id)actualFont;
-(CGPoint)_scrollOffset;
-(CGSize)_rightViewOffset;
-(void)_setSystemBackgroundViewActive:(BOOL)arg1 ;
-(id)_textLabelView;
-(NSDictionary *)defaultTextAttributes;
-(void)_updateSuffix:(id)arg1 ;
-(void)_setPrefix:(id)arg1 ;
-(void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1 ;
-(long long)leftViewMode;
-(long long)rightViewMode;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(id)_dictationInterpretations;
-(void)setAutoresizesTextToFit:(BOOL)arg1 ;
-(void)setTextAutorresizesToFit:(BOOL)arg1 ;
-(void)setClearButtonStyle:(int)arg1 ;
-(CGRect)textRect;
-(void)setInactiveHasDimAppearance:(BOOL)arg1 ;
-(void)_clearSelectionUI;
-(void)_resetSelectionUI;
-(void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1 ;
-(void)setLabelOffset:(float)arg1 ;
-(id)selectedAttributedText;
-(void)_setBackgroundStrokeColor:(id)arg1 ;
-(void)_setBackgroundFillColor:(id)arg1 ;
-(void)_setBackgroundStrokeWidth:(double)arg1 ;
-(NSLayoutConstraint *)_baselineLayoutConstraint;
-(_UIBaselineLayoutStrut *)_baselineLayoutLabel;
-(void)_setBaselineLayoutLabel:(id)arg1 ;
-(UIImage *)disabledBackground;
@end

