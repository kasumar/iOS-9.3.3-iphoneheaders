/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView {

	UIView* _contentView;
	double _visibleHeight;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double visibleHeight;              //@synthesize visibleHeight=_visibleHeight - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(id)initWithContentView:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
@end

