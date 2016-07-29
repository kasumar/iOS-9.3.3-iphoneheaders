/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class TPRevealingRingView, UIColor, CALayer, NSString;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {

	TPRevealingRingView* _revealingRingView;
	unsigned character;
	UIColor* _color;
	CALayer* _glyphLayer;
	CALayer* _highlightedGlyphLayer;

}

@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) TPRevealingRingView * revealingRingView;              //@synthesize revealingRingView=_revealingRingView - In the implementation block
@property (assign,nonatomic) double alphaOutsideAndInsideRing; 
@property (retain) CALayer * glyphLayer;                                             //@synthesize glyphLayer=_glyphLayer - In the implementation block
@property (retain) CALayer * highlightedGlyphLayer;                                  //@synthesize highlightedGlyphLayer=_highlightedGlyphLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character; 
+(CGSize)defaultSize;
+(double)horizontalPadding;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3 ;
+(id)imageForCharacter:(unsigned)arg1 ;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 ;
+(double)highlightCrossfadeNormalBeginTime;
+(double)highlightCrossfadeHighlightBeginTime;
+(double)highlightCrossfadeNormalFadeDuration;
+(double)highlightCrossfadeHighlightFadeDuration;
+(double)unhighlightCrossfadeNormalBeginTime;
+(double)unhighlightCrossfadeHighlightBeginTime;
+(double)unhighlightCrossfadeNormalFadeDuration;
+(double)unhighlightCrossfadeHighlightFadeDuration;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(double)outerCircleDiameter;
+(BOOL)usesBoldAssets;
+(UIEdgeInsets)paddingOutsideRing;
+(double)verticalPadding;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initForCharacter:(unsigned)arg1 ;
-(TPRevealingRingView *)revealingRingView;
-(void)setGlyphLayer:(CALayer *)arg1 ;
-(void)setHighlightedGlyphLayer:(CALayer *)arg1 ;
-(void)touchDown;
-(void)touchUp;
-(void)touchCancelled;
-(CALayer *)glyphLayer;
-(CALayer *)highlightedGlyphLayer;
-(void)setUsesColorDodgeBlending;
-(void)setUsesColorBurnBlending;
-(double)alphaOutsideAndInsideRing;
-(void)setAlphaOutsideAndInsideRing:(double)arg1 ;
-(unsigned)character;
-(id)defaultColor;
-(void)setCharacter:(unsigned)arg1 ;
@end

