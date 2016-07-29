/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBFocusGuideDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class UIView, UITextInputTraits, NSMutableDictionary, NSString;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {

	UIView* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	BOOL m_typingDisabled;
	BOOL m_minimized;
	BOOL m_respondingToImplGeometryChange;
	long long m_orientation;
	long long m_idiom;
	BOOL m_hasExplicitOrientation;
	BOOL m_disableTouchInput;
	BOOL m_useRecentsAlert;
	NSMutableDictionary* m_focusGuides;
	UIEdgeInsets m_unfocusedFocusGuideOutsets;
	BOOL _hasImpendingCursorLocation;
	unsigned long long _impendingCursorLocation;

}

@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL caretVisible; 
@property (assign,nonatomic) long long keyboardIdiom; 
@property (assign,nonatomic) BOOL typingEnabled; 
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@property (assign,nonatomic) BOOL showsCandidatesInline; 
@property (assign,nonatomic) BOOL hasImpendingCursorLocation;                         //@synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long impendingCursorLocation;              //@synthesize impendingCursorLocation=_impendingCursorLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(id)activeKeyboard;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ;
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
+(CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1 ;
+(BOOL)isInHardwareKeyboardMode;
+(void)removeAllDynamicDictionaries;
+(id)activeKeyboardForScreen:(id)arg1 ;
+(void)clearActiveForScreen:(id)arg1 ;
+(void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2 ;
+(void)_clearActiveKeyboard;
+(void)initImplementationNow;
+(CGRect)defaultFrameForInterfaceOrientation:(long long)arg1 ;
+(BOOL)isOnScreen;
+(BOOL)respondsToProxGesture;
+(BOOL)shouldMinimizeForHardwareKeyboard;
+(BOOL)splitKeyboardEnabled;
-(BOOL)_isAutomaticKeyboard;
-(id)_getCurrentKeyplaneName;
-(id)_getCurrentKeyboardName;
-(id)_getLocalizedInputMode;
-(void)_setAutocorrects:(BOOL)arg1 ;
-(id)_getAutocorrection;
-(BOOL)_hasCandidates;
-(long long)_positionInCandidateList:(id)arg1 ;
-(id)_baseKeyForRepresentedString:(id)arg1 ;
-(id)_keyplaneForKey:(id)arg1 ;
-(id)_keyplaneNamed:(id)arg1 ;
-(void)_changeToKeyplane:(id)arg1 ;
-(void)_setUndocked:(BOOL)arg1 ;
-(void)_setSplit:(BOOL)arg1 ;
-(id)_touchPoint:(CGPoint)arg1 ;
-(id)_typeCharacter:(id)arg1 withError:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)_setInputMode:(id)arg1 ;
-(void)_acceptCurrentCandidate;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)manualKeyboardWasOrderedOut;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(BOOL)isActive;
-(long long)interfaceOrientation;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_deactivateForBackgrounding;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(CGSize)_sensitivitySize;
-(long long)_focusedSound;
-(id)targetWindow;
-(BOOL)_mayRemainFocused;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)canBecomeFocused;
-(BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2 ;
-(void)focusedViewDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)deactivate;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)updateLayout;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)activate;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)displayLayer:(id)arg1 ;
-(BOOL)isMinimized;
-(void)acceptAutocorrection;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(BOOL)_disableTouchInput;
-(BOOL)shouldSaveMinimizationState;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(BOOL)arg1 ;
-(void)setCaretVisible:(BOOL)arg1 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(void)removeAutocorrectPrompt;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)minimize;
-(void)setMinimized:(BOOL)arg1 ;
-(void)maximize;
-(BOOL)isAutomatic;
-(BOOL)canDismiss;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)caretBlinks;
-(void)setCorrectionLearningAllowed:(BOOL)arg1 ;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(void)responseContextDidChange;
-(BOOL)returnKeyEnabled;
-(BOOL)caretVisible;
-(id)_initWithFrame:(CGRect)arg1 lazily:(BOOL)arg2 ;
-(void)clearActivePerScreenIfNeeded;
-(BOOL)isActivePerScreen;
-(void)setupKeyFocusGuides;
-(void)autoAdjustOrientation;
-(void)clearSnapshot;
-(void)takeSnapshot;
-(void)setHasImpendingCursorLocation:(BOOL)arg1 ;
-(BOOL)hasImpendingCursorLocation;
-(unsigned long long)impendingCursorLocation;
-(unsigned long long)cursorLocation;
-(void)updateFocusMarginsUpToView:(id)arg1 ;
-(void)updateKeyFocusGuides;
-(BOOL)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2 ;
-(void)setImpendingCursorLocation:(unsigned long long)arg1 ;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 fromView:(id)arg2 ;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(BOOL)disableInteraction;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1 ;
-(void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1 ;
-(void)didFocusGuideWithHeading:(unsigned long long)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(id)initWithDefaultSize;
-(id)initLazily;
-(BOOL)hasAutocorrectPrompt;
-(id)defaultTextInputTraits;
-(BOOL)typingEnabled;
-(void)setTypingEnabled:(BOOL)arg1 ;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(void)_setPreferredHeight:(double)arg1 ;
-(BOOL)showPredictionBar;
-(void)setShowPredictionBar:(BOOL)arg1 ;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)_setPasscodeOutlineAlpha:(double)arg1 ;
-(void)_setDisableTouchInput:(BOOL)arg1 ;
-(BOOL)_useRecentsAlert;
-(void)_setUseRecentsAlert:(BOOL)arg1 ;
-(BOOL)showsCandidatesInline;
-(void)setShowsCandidatesInline:(BOOL)arg1 ;
-(long long)keyboardIdiom;
-(void)setKeyboardIdiom:(long long)arg1 ;
@end
