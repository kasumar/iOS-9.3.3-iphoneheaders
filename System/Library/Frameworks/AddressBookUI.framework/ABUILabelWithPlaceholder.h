/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIColor, UIFont;

@interface ABUILabelWithPlaceholder : UIView {

	UILabel* _label;
	BOOL _isPlaceholderActive;
	NSString* _placeholder;
	NSString* _actualText;
	UIColor* _actualTextColor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) UIColor * highlightedTextColor; 
@property (assign,nonatomic) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) UIFont * font; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)sizeToFit;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(id)label;
-(UIColor *)highlightedTextColor;
-(NSString *)placeholder;
-(void)_setActualTextColor:(id)arg1 ;
-(void)_setActualText:(id)arg1 ;
-(double)labelLeftEdgeInset;
-(CGRect)_labelFrameForBounds:(CGRect)arg1 ;
@end

