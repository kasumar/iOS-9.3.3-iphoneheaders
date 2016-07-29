/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SiriUIBorderedLabelView, SKUIItemOfferButton;

@interface SiriMoviesMovieInfoView : UIView {

	UILabel* _runtimeLabel;
	UILabel* _runtimeValueLabel;
	SiriUIBorderedLabelView* _ratingView;
	int _style;
	SKUIItemOfferButton* _buyOnITunesButton;
	SKUIItemOfferButton* _rentOnITunesButton;

}

@property (nonatomic,readonly) SKUIItemOfferButton * buyOnITunesButton;               //@synthesize buyOnITunesButton=_buyOnITunesButton - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * rentOnITunesButton;              //@synthesize rentOnITunesButton=_rentOnITunesButton - In the implementation block
@property (assign,nonatomic) int style;                                               //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(BOOL)arg2 ;
-(SKUIItemOfferButton *)rentOnITunesButton;
-(id)_runtimeStringForMinutes:(long long)arg1 ;
-(SKUIItemOfferButton *)buyOnITunesButton;
-(double)infoViewWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
@end

