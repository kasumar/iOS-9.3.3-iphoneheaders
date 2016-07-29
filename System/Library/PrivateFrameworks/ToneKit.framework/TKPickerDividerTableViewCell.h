/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UIColor;

@interface TKPickerDividerTableViewCell : UITableViewCell {

	UIView* _dividerView;
	long long _contentBackdropOverlayBlendMode;

}

@property (nonatomic,retain) UIColor * contentBackgroundColor; 
@property (assign,nonatomic) long long contentBackdropOverlayBlendMode; 
@property (setter=_setDividerView:,nonatomic,retain) UIView * _dividerView;                                                       //@synthesize dividerView=_dividerView - In the implementation block
@property (assign,setter=_setContentBackdropOverlayBlendMode:,nonatomic) long long _contentBackdropOverlayBlendMode;              //@synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(CGRect)_dividerViewFrame;
-(void)_setDividerView:(id)arg1 ;
-(UIView *)_dividerView;
-(long long)_contentBackdropOverlayBlendMode;
-(void)_setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(long long)contentBackdropOverlayBlendMode;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
@end

