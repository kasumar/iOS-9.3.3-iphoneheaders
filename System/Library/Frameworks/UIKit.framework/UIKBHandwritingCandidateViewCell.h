/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class TIKeyboardCandidate, UILabel, UIKBThemedView;

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {

	TIKeyboardCandidate* _candidate;
	SCD_Struct_UI40 _visualStyling;
	UILabel* _label;
	UILabel* _secondaryLabel;
	UIKBThemedView* _themedView;

}

@property (nonatomic,copy) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI40 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UILabel * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
+(double)systemFontSize;
+(double)widthForCandidate:(id)arg1 visualStyling:(SCD_Struct_UI40)arg2 ;
+(BOOL)needsThemedView;
+(id)labelFontForText:(id)arg1 ;
+(id)secondaryLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)reloadData;
-(UIEdgeInsets)edgeInsets;
-(BOOL)_canDrawContent;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI40)arg1 ;
-(SCD_Struct_UI40)visualStyling;
-(TIKeyboardCandidate *)candidate;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(void)updateLabels;
-(id)textLabelColor;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)updateThemedView;
@end

