/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MusicHairlineView : UIView {

	UIView* _lineView;
	UIColor* _lineColor;
	long long _verticalAlignment;

}

@property (nonatomic,retain) UIColor * lineColor;                      //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)music_inheritedLayoutInsetsDidChange;
@end

