/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface SBAppSwitcherSoftOutlineShadowView : UIView {

	UIView* _clippingView;
	UIImageView* _shadowImageView;

}

@property (assign,nonatomic) BOOL shouldClip; 
@property (assign,nonatomic) CGRect clippingFrame; 
@property (assign,nonatomic) double clippingCornerRadius; 
-(void)setShouldClip:(BOOL)arg1 ;
-(BOOL)shouldClip;
-(void)setClippingCornerRadius:(double)arg1 ;
-(double)clippingCornerRadius;
-(void)setClippingFrame:(CGRect)arg1 ;
-(CGRect)clippingFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

