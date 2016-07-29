/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIKBBackdropView, NSString;

@interface UIKeyboardCandidateGridHeader : UIView {

	UILabel* _inlineTextLabel;
	double _inlineTextRightMargin;
	UIButton* _toggleButton;
	UIKBBackdropView* _backdropView;

}

@property (nonatomic,copy) NSString * inlineText; 
@property (assign,nonatomic) double inlineTextRightMargin;                 //@synthesize inlineTextRightMargin=_inlineTextRightMargin - In the implementation block
@property (nonatomic,retain) UIButton * toggleButton;                      //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) UILabel * inlineTextLabel;                    //@synthesize inlineTextLabel=_inlineTextLabel - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(void)setInlineText:(NSString *)arg1 ;
-(NSString *)inlineText;
-(void)setInlineTextLabel:(UILabel *)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UILabel *)inlineTextLabel;
-(double)inlineTextRightMargin;
-(UIButton *)toggleButton;
-(void)setInlineTextRightMargin:(double)arg1 ;
@end

