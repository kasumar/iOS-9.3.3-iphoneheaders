/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIControl {

	NSMutableArray* _levelViews;
	BOOL _showsLevelGutters;
	double _interLevelSpacing;
	double _levelCornerRadius;
	double _levelWidth;
	double _maximumLevelHeight;
	double _minimumLevelHeight;
	long long _numberOfLevels;
	long long _playbackState;
	UIColor* _levelGuttersColor;

}

@property (assign,nonatomic) double interLevelSpacing;                 //@synthesize interLevelSpacing=_interLevelSpacing - In the implementation block
@property (assign,nonatomic) double levelCornerRadius;                 //@synthesize levelCornerRadius=_levelCornerRadius - In the implementation block
@property (assign,nonatomic) double levelWidth;                        //@synthesize levelWidth=_levelWidth - In the implementation block
@property (assign,nonatomic) double maximumLevelHeight;                //@synthesize maximumLevelHeight=_maximumLevelHeight - In the implementation block
@property (assign,nonatomic) double minimumLevelHeight;                //@synthesize minimumLevelHeight=_minimumLevelHeight - In the implementation block
@property (assign,nonatomic) long long numberOfLevels;                 //@synthesize numberOfLevels=_numberOfLevels - In the implementation block
@property (assign,nonatomic) long long playbackState;                  //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL showsLevelGutters;                   //@synthesize showsLevelGutters=_showsLevelGutters - In the implementation block
@property (nonatomic,retain) UIColor * levelGuttersColor;              //@synthesize levelGuttersColor=_levelGuttersColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(long long)playbackState;
-(void)_reloadLevelViews;
-(void)_updateLevelAnimations;
-(void)setLevelCornerRadius:(double)arg1 ;
-(void)setLevelWidth:(double)arg1 ;
-(void)setMinimumLevelHeight:(double)arg1 ;
-(void)setNumberOfLevels:(long long)arg1 ;
-(void)setShowsLevelGutters:(BOOL)arg1 ;
-(void)setLevelGuttersColor:(UIColor *)arg1 ;
-(double)interLevelSpacing;
-(void)setInterLevelSpacing:(double)arg1 ;
-(double)levelCornerRadius;
-(double)levelWidth;
-(double)maximumLevelHeight;
-(double)minimumLevelHeight;
-(long long)numberOfLevels;
-(BOOL)showsLevelGutters;
-(UIColor *)levelGuttersColor;
-(void)setMaximumLevelHeight:(double)arg1 ;
-(void)setPlaybackState:(long long)arg1 ;
@end

