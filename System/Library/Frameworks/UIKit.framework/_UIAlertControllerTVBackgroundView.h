/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class UIView, _UIFloatingShadowView, NSMutableDictionary, NSString;

@interface _UIAlertControllerTVBackgroundView : UIView <UIAlertControllerBackgroundView> {

	BOOL _isHighlighted;
	BOOL _isPressed;
	UIView* _backgroundView;
	_UIFloatingShadowView* _shadowView;
	NSMutableDictionary* _alphas;
	BOOL _shouldUseTintColorAsBackgroundColor;
	BOOL _shouldShowShadow;

}

@property (assign,nonatomic) BOOL shouldUseTintColorAsBackgroundColor;              //@synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL shouldShowShadow;                                 //@synthesize shouldShowShadow=_shouldShowShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAlpha:(double)arg1 forState:(unsigned long long)arg2 ;
-(void)setShouldUseTintColorAsBackgroundColor:(BOOL)arg1 ;
-(double)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(void)setShouldShowShadow:(BOOL)arg1 ;
-(double)alphaForState:(unsigned long long)arg1 ;
-(BOOL)shouldUseTintColorAsBackgroundColor;
-(BOOL)shouldShowShadow;
@end

