/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIColor, SUTableCellContentView, SUItemOfferButton, UIBezierPath, SUCellConfiguration;

@interface SUTableCell : UITableViewCell {

	UIColor* _bottomBorderColor;
	SUTableCellContentView* _configurationView;
	unsigned _hideHighlight : 1;
	SUItemOfferButton* _itemOfferButton;
	SCD_Struct_SU3 _position;
	UIColor* _topBorderColor;
	long long _editState;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;                               //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) int clipCorners; 
@property (nonatomic,readonly) UIBezierPath * clippingPath; 
@property (nonatomic,retain) SUCellConfiguration * configuration; 
@property (assign,nonatomic) BOOL drawAsDisabled; 
@property (assign,nonatomic) BOOL highlightsOnlyContentView; 
@property (nonatomic,retain,readonly) SUItemOfferButton * itemOfferButton; 
@property (assign,nonatomic) SCD_Struct_SU3 position;                                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL showHighlight; 
@property (nonatomic,retain) UIColor * topBorderColor;                                  //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) BOOL usesSubviews; 
@property (assign,nonatomic) long long editState;                                       //@synthesize editState=_editState - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPosition:(SCD_Struct_SU3)arg1 ;
-(BOOL)_canDrawContent;
-(SCD_Struct_SU3)position;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(int)clipCorners;
-(void)setClipCorners:(int)arg1 ;
-(SUCellConfiguration *)configuration;
-(BOOL)highlightsOnlyContentView;
-(BOOL)drawAsDisabled;
-(void)setDrawAsDisabled:(BOOL)arg1 ;
-(void)setHighlightsOnlyContentView:(BOOL)arg1 ;
-(BOOL)usesSubviews;
-(id)copyPurchaseAnimationView;
-(void)setEditState:(long long)arg1 ;
-(UIBezierPath *)clippingPath;
-(void)setShowHighlight:(BOOL)arg1 ;
-(void)setUsesSubviews:(BOOL)arg1 ;
-(BOOL)showHighlight;
-(long long)editState;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(SUItemOfferButton *)itemOfferButton;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
@end

