/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIFloatingContentViewDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImageView, _UIFloatingContentView, UIVisualEffectView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView, UIFont, NSArray, NSString, NSDictionary, UIColor, UIImage, NSAttributedString;

@interface UIButton : UIControl <ABText, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate, NSCoding> {

	unsigned long long _externalFlatEdge;
	CFDictionaryRef _contentLookup;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _titleEdgeInsets;
	UIEdgeInsets _imageEdgeInsets;
	UIImageView* _backgroundView;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _contentBackdropView;
	UIImageView* _imageView;
	UILabel* _titleView;
	BOOL _initialized;
	unsigned long long _lastDrawingControlState;
	UITapGestureRecognizer* _selectGestureRecognizer;
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
		unsigned titleFrozen : 1;
		unsigned resendTraitToImageViews : 2;
		unsigned animateNextHighlightChange : 1;
		unsigned blurEnabled : 1;
		unsigned visualEffectViewEnabled : 1;
		unsigned suppressAccessibilityUnderline : 1;
		unsigned requiresLayoutForPropertyChange : 1;
	}  _buttonFlags;
	UIView* _effectiveContentView;
	_UIButtonMaskAnimationView* _maskAnimationView;
	UIView* _selectionView;
	UIFont* _lazyTitleViewFont;
	NSArray* _contentConstraints;
	UIEdgeInsets _internalTitlePaddingInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets; 
@property (assign,nonatomic) BOOL reversesTitleShadowWhenHighlighted; 
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) BOOL adjustsImageWhenDisabled; 
@property (assign,nonatomic) BOOL showsTouchWhenHighlighted; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,readonly) NSString * currentTitle; 
@property (nonatomic,readonly) UIColor * currentTitleColor; 
@property (nonatomic,readonly) UIColor * currentTitleShadowColor; 
@property (nonatomic,readonly) UIImage * currentImage; 
@property (nonatomic,readonly) UIImage * currentBackgroundImage; 
@property (nonatomic,readonly) NSAttributedString * currentAttributedTitle; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain,readonly) UIColor * _currentImageColor; 
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge; 
@property (assign,setter=_setWantsAccessibilityUnderline:,nonatomic) BOOL _wantsAccessibilityUnderline; 
@property (setter=_setContentConstraints:,nonatomic,copy) NSArray * _contentConstraints;                                   //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (assign,setter=_setInternalTitlePaddingInsets:,nonatomic) UIEdgeInsets _internalTitlePaddingInsets;              //@synthesize internalTitlePaddingInsets=_internalTitlePaddingInsets - In the implementation block
+(id)mediaControlsBuyButtonWithStyle:(long long)arg1 ;
+(id)buttonWithType:(long long)arg1 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 ;
+(id)_defaultNormalTitleColor;
+(id)_defaultNormalTitleShadowColor;
+(id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(BOOL)_buttonTypeIsModernUI:(long long)arg1 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(double)arg4 ;
+(id)_selectedIndicatorImage;
+(id)_infoLightImage;
+(id)_detailDisclosureImage;
+(id)_plusImage;
+(id)_infoDarkImage;
+(id)_exclamationMarkImage;
+(id)_questionMarkImage;
+(id)_checkmarkImage;
+(id)_minusImage;
+(id)_xImage;
+(id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 ;
+(id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)_maps_setImageNamed:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_maps_setBackgroundImageNamed:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_mediaControlsBuyButtonTouchDown:(id)arg1 ;
-(void)_mediaControlsBuyButtonTouchUp:(id)arg1 ;
-(void)mpu_configureButtonWithTextDrawingContext:(id)arg1 ;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)pu_setTitle:(id)arg1 withFallback:(/*^block*/id)arg2 forState:(unsigned long long)arg3 ;
-(void)pu_setRTLAwareContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_mapkit_accessoryControlToExtendWithCallout;
-(void)cam_updateContentInsetsToCenterImageWithinMinimumSize:(CGSize)arg1 ;
-(void)ab_addConferenceIcon;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)_scriptingInfo;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)title;
-(long long)_buttonType;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)image;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)_font;
-(long long)_lineBreakMode;
-(id)_encodableSubviews;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
-(void)tintColorDidChange;
-(void)interactionTintColorDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(void)_updateTitleView;
-(id)_titleView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitleShadowOffset:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)_setFrame:(CGRect)arg1 deferLayout:(BOOL)arg2 ;
-(CGRect)_selectedIndicatorBounds;
-(id)_imageView;
-(void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(void)setAdjustsImageWhenDisabled:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isTitleFrozen;
-(void)_setFont:(id)arg1 ;
-(void)_setTitleFrozen:(BOOL)arg1 ;
-(void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)setDisabledDimsImage:(BOOL)arg1 ;
-(void)setShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1 ;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(void)_setVisualEffectViewEnabled:(BOOL)arg1 backgroundColor:(id)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(id)_createPreparedImageViewWithFrame:(CGRect)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(id)_contentBackdropView;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(BOOL)_isModernButton;
-(BOOL)_isExternalRoundedRectButton;
-(id)_externalUnfocusedBorderColor;
-(id)font;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_clippedHighlightBounds;
-(unsigned long long)_controlEventsForActionTriggered;
-(double)_highlightCornerRadius;
-(long long)buttonType;
-(void)updateConstraints;
-(UIImageView *)imageView;
-(id)_effectiveContentView;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_floatingContentView;
-(id)viewForLastBaselineLayout;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(id)_contentForState:(unsigned long long)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(long long)lineBreakMode;
-(id)_layoutDebuggingTitle;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setAutosizesToFit:(BOOL)arg1 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_installSelectGestureRecognizer;
-(void)_selectGestureChanged:(id)arg1 ;
-(NSString *)currentTitle;
-(UIImage *)currentImage;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)_setupBackgroundView;
-(void)setShowPressFeedback:(BOOL)arg1 ;
-(void)_titleAttributesChanged;
-(id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(BOOL*)arg2 ;
-(void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(id)titleShadowColorForState:(unsigned long long)arg1 ;
-(id)attributedTitleForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)_setContentConstraints:(id)arg1 ;
-(void)_invalidateContentConstraints;
-(void)_applyAppropriateChargeForButtonType;
-(void)_takeContentFromArchivableContent:(id)arg1 ;
-(BOOL)_shouldHaveFloatingAppearance;
-(id)_archivableContent:(id*)arg1 ;
-(void)_updateBackgroundImageView;
-(void)_layoutBackgroundImageView;
-(void)_updateImageView;
-(void)_layoutImageView;
-(void)_layoutTitleView;
-(void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2 ;
-(BOOL)autosizesToFit;
-(CGPoint)pressFeedbackPosition;
-(BOOL)_canHaveTitle;
-(void)_setupTitleView;
-(void)_setupImageView;
-(BOOL)_hasDrawingStyle;
-(BOOL)_isEffectivelyDisabledExternalRoundedRectButton;
-(id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(BOOL*)arg2 ;
-(BOOL)_hasHighlightColor;
-(BOOL)_isExternalRoundedRectButtonWithPressednessState;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(double)_selectedIndicatorAlpha;
-(BOOL)_textNeedsCompositingModeWhenSelected;
-(BOOL)_imageNeedsCompositingModeWhenSelected;
-(unsigned long long)_externalFlatEdge;
-(CGRect)_highlightBoundsForDrawingStyle;
-(id)_borderColorForState:(unsigned long long)arg1 ;
-(void)_prepareMaskAnimationViewIfNecessary;
-(id)_transitionAnimationWithKeyPath:(id)arg1 ;
-(double)_borderWidthForState:(unsigned long long)arg1 bounds:(CGRect)arg2 ;
-(id)_fadeOutAnimationWithKeyPath:(id)arg1 ;
-(void)_updateMaskState;
-(id)_externalFocusedTitleColor;
-(id)_externalTitleColorForState:(unsigned long long)arg1 ;
-(id)_externalBorderColorForState:(unsigned long long)arg1 ;
-(double)_drawingStrokeForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)_outsetInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_highlightBounds;
-(id)_titleForState:(unsigned long long)arg1 ;
-(id)_titleColorForState:(unsigned long long)arg1 ;
-(id)_shadowColorForState:(unsigned long long)arg1 ;
-(id)_attributedTitleForState:(unsigned long long)arg1 ;
-(id)_imageColorForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)_combinedContentPaddingInsets;
-(UIEdgeInsets)titleEdgeInsets;
-(CGRect)_titleRectForContentRect:(CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2 ;
-(UIEdgeInsets)imageEdgeInsets;
-(void)_setContentHuggingPriorities:(CGSize)arg1 ;
-(id)_titleOrImageViewForBaselineLayout;
-(BOOL)_likelyToHaveTitle;
-(void)_setupTitleViewRequestingLayout:(BOOL)arg1 ;
-(CGRect)_highlightRectForImageRect:(CGRect)arg1 ;
-(CGRect)_highlightRectForTextRect:(CGRect)arg1 ;
-(BOOL)adjustsImageWhenHighlighted;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)adjustsImageWhenDisabled;
-(BOOL)_wantsContentBackdropView;
-(void)_updateContentBackdropView;
-(void)_beginTitleAnimation;
-(id)_letterpressStyleForState:(unsigned long long)arg1 ;
-(BOOL)_requiresLayoutForPropertyChange;
-(void)_layoutContentBackdropView;
-(void)_setupDrawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_shouldUpdatePressedness;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_setupPressednessForState:(unsigned long long)arg1 ;
-(CGSize)_titleShadowOffset;
-(id)_newImageViewWithFrame:(CGRect)arg1 ;
-(BOOL)_wantsAccessibilityUnderline;
-(id)_newLabelWithFrame:(CGRect)arg1 ;
-(void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2 ;
-(double)_drawingStrokeForStyle:(long long)arg1 ;
-(void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForStroke:(double)arg1 ;
-(long long)_externalDrawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1 ;
-(id)_externalImageColorForState:(unsigned long long)arg1 ;
-(BOOL)_hasImageForProperty:(id)arg1 ;
-(BOOL)reversesTitleShadowWhenHighlighted;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_setExternalFlatEdge:(unsigned long long)arg1 ;
-(UIColor *)currentTitleColor;
-(UIColor *)_currentImageColor;
-(UIColor *)currentTitleShadowColor;
-(UIImage *)currentBackgroundImage;
-(NSAttributedString *)currentAttributedTitle;
-(BOOL)_visualEffectViewEnabled;
-(BOOL)_blurEnabled;
-(CGSize)titleShadowOffset;
-(void)setTitleShadowOffset:(CGSize)arg1 ;
-(void)_setWantsAccessibilityUnderline:(BOOL)arg1 ;
-(void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1 ;
-(void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForState:(unsigned long long)arg1 ;
-(void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(NSArray *)_contentConstraints;
-(UIEdgeInsets)_internalTitlePaddingInsets;
-(void)_setInternalTitlePaddingInsets:(UIEdgeInsets)arg1 ;
@end

