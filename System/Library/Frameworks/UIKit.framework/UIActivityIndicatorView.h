/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, NSArray, NSString, UIImageView;

@interface UIActivityIndicatorView : UIView <NSCoding> {

	double _duration;
	BOOL _animating;
	long long _activityIndicatorViewStyle;
	long long _actualActivityIndicatorViewStyle;
	BOOL _hidesWhenStopped;
	BOOL _hasShadow;
	BOOL _clockWise;
	BOOL _spinning;
	BOOL _useArtwork;
	BOOL _useOutlineShadow;
	double _width;
	UIColor* _color;
	long long _spokeCount;
	UIColor* _shadowColor;
	double _innerRadius;
	long long _spokeFrameRatio;
	NSArray* _spokeImages;
	double _spinningDuration;
	NSString* _artBackupKeyString;
	NSString* _highlightArtBackupKeyString;
	UIImageView* _internalView;
	NSArray* _spokeHighlightImages;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;                  //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                                 //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                   //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) UIImageView * internalView;                          //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) double width;                                          //@synthesize width=_width - In the implementation block
@property (assign) BOOL hasShadow;                                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,nonatomic) long long spokeCount;                                  //@synthesize spokeCount=_spokeCount - In the implementation block
@property (assign,nonatomic) double innerRadius;                                    //@synthesize innerRadius=_innerRadius - In the implementation block
@property (assign,nonatomic) long long spokeFrameRatio;                             //@synthesize spokeFrameRatio=_spokeFrameRatio - In the implementation block
@property (readonly) NSArray * spokeImages;                                         //@synthesize spokeImages=_spokeImages - In the implementation block
@property (readonly) NSArray * spokeHighlightImages;                                //@synthesize spokeHighlightImages=_spokeHighlightImages - In the implementation block
@property (assign,nonatomic) BOOL clockWise;                                        //@synthesize clockWise=_clockWise - In the implementation block
@property (assign) BOOL spinning;                                                   //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) double spinningDuration;                               //@synthesize spinningDuration=_spinningDuration - In the implementation block
@property (assign,nonatomic) BOOL useArtwork;                                       //@synthesize useArtwork=_useArtwork - In the implementation block
@property (nonatomic,readonly) NSString * artBackupKeyString;                       //@synthesize artBackupKeyString=_artBackupKeyString - In the implementation block
@property (nonatomic,readonly) NSString * highlightArtBackupKeyString;              //@synthesize highlightArtBackupKeyString=_highlightArtBackupKeyString - In the implementation block
@property (assign,nonatomic) BOOL useOutlineShadow;                                 //@synthesize useOutlineShadow=_useOutlineShadow - In the implementation block
+(CGSize)size;
+(CGSize)defaultSizeForStyle:(long long)arg1 ;
+(BOOL)_isModernStyle:(long long)arg1 ;
+(id)_loadResourcesForStyle:(long long)arg1 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)_commonInit;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(CGSize)shadowOffset;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)shadowColor;
-(BOOL)isHighlighted;
-(double)width;
-(void)stopAnimation;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)startAnimation;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)_tearDownAnimation;
-(void)_setUpAnimation;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(long long)_internalStyleForStyle:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_feedTheGear;
-(id)_defaultColorForStyle:(long long)arg1 ;
-(id)_layoutInfosForStyle:(long long)arg1 ;
-(long long)_externalStyleForStyle:(long long)arg1 ;
-(BOOL)hidesWhenStopped;
-(BOOL)_canCustomize;
-(BOOL)_hasCustomColor;
-(long long)spokeCount;
-(long long)spokeFrameRatio;
-(double)_spokeWidthForGearWidth:(double)arg1 ;
-(double)_spokeLengthForGearWidth:(double)arg1 ;
-(double)_widthForGearWidth:(double)arg1 ;
-(double)_alphaValueForStep:(long long)arg1 ;
-(BOOL)_isModern;
-(id)_artBackupKeyWithHighlight:(BOOL)arg1 ;
-(id)_imageForStep:(long long)arg1 withColor:(id)arg2 ;
-(BOOL)_shouldGoToCustomStyle;
-(long long)_customStyleForStyle:(long long)arg1 ;
-(BOOL)_shouldGoBackToBaseStyle;
-(id)_generateModernImagesForImages:(id)arg1 color:(id)arg2 ;
-(BOOL)_isArtWorkBased;
-(id)_generateImagesForColor:(id)arg1 highlight:(BOOL)arg2 ;
-(id)_highlightColorForStyle:(long long)arg1 ;
-(void)_updateInternalViewFrameWithBounds:(CGRect)arg1 ;
-(BOOL)_canCustomizeStyle:(long long)arg1 ;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)setUseOutlineShadow:(BOOL)arg1 ;
-(void)setSpokeCount:(long long)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(void)setSpokeFrameRatio:(long long)arg1 ;
-(void)setClockWise:(BOOL)arg1 ;
-(void)setSpinningDuration:(double)arg1 ;
-(id)artBackupKey;
-(NSString *)highlightArtBackupKeyString;
-(id)_styleNameForStyle:(long long)arg1 ;
-(void)generateImages;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1 ;
-(double)innerRadius;
-(NSArray *)spokeImages;
-(BOOL)clockWise;
-(BOOL)spinning;
-(void)setSpinning:(BOOL)arg1 ;
-(double)spinningDuration;
-(BOOL)useArtwork;
-(void)setUseArtwork:(BOOL)arg1 ;
-(NSString *)artBackupKeyString;
-(UIImageView *)internalView;
-(BOOL)useOutlineShadow;
-(NSArray *)spokeHighlightImages;
@end

