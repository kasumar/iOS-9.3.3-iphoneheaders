/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsScoreboardView.h>

@class ACSportsMatchupLineScoreView, NSMutableArray, UIScrollView, UILabel, SiriUIKeyline;

@interface ACSportsPeriodicScoreboardView : ACSportsScoreboardView {

	ACSportsMatchupLineScoreView* _totalLineScoreView;
	NSMutableArray* _lineScoreViews;
	UIScrollView* _lineScoreScrollView;
	UILabel* _firstTeamNameLabel;
	UILabel* _secondTeamNameLabel;
	SiriUIKeyline* _middleKeyline;
	SiriUIKeyline* _firstTeamKeyline;
	SiriUIKeyline* _secondTeamKeyline;
	double _legendHeight;
	double _unifiedLegendHeight;

}

@property (assign,nonatomic) double legendHeight;                     //@synthesize legendHeight=_legendHeight - In the implementation block
@property (assign,nonatomic) double unifiedLegendHeight;              //@synthesize unifiedLegendHeight=_unifiedLegendHeight - In the implementation block
+(id)totalLineScorePeriodName;
+(long long)extraLineScoreColumns;
+(double)totalLineScoreLeftPadding;
+(double)lineScoreRightPadding;
+(BOOL)isCondensedScoreView;
-(void)didChangeMatchupFromMatchup:(id)arg1 ;
-(void)setLegendHeight:(double)arg1 ;
-(void)configureLineScoreView:(id)arg1 isTotal:(BOOL)arg2 ;
-(unsigned long long)numberOfLineScores;
-(double)unifiedLegendHeight;
-(double)legendHeight;
-(double)lineScoreHeight;
-(void)setUnifiedLegendHeight:(double)arg1 ;
-(void)prepareForAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
