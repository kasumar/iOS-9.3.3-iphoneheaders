/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayView.h>

@protocol SBLockScreenBuddyViewDelegate;
@class UILabel, SBUIAppleLogoView, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings, UIView, UIButton;

@interface SBLockScreenBuddyView : SBLockOverlayView {

	UILabel* _titleLabel;
	SBUIAppleLogoView* _logoView;
	BOOL _usesWhiteLogo;
	int _viewState;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	_UILegibilitySettings* _legibilitySettings;
	id<SBLockScreenBuddyViewDelegate> _delegate;
	unsigned long long _style;
	UIView* _activationInfoView;
	UIButton* _infoButton;
	UIView* _regulatoryInfoView;

}

@property (assign,nonatomic,__weak) id<SBLockScreenBuddyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                          //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIView * activationInfoView;                                    //@synthesize activationInfoView=_activationInfoView - In the implementation block
@property (nonatomic,retain) UIView * regulatoryInfoView;                                    //@synthesize regulatoryInfoView=_regulatoryInfoView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                       //@synthesize style=_style - In the implementation block
-(void)configureOverlayPropertiesForStyle:(unsigned long long)arg1 ;
-(void)_adjustTitleVisibilityForInfoViews;
-(void)_toggleViewState;
-(void)setActivationInfoView:(UIView *)arg1 ;
-(void)setRegulatoryInfoView:(UIView *)arg1 ;
-(void)setTitleLanguage:(id)arg1 ;
-(BOOL)isFakeLogoHidden;
-(UIView *)activationInfoView;
-(UIView *)regulatoryInfoView;
-(void)setViewState:(int)arg1 ;
-(void)setDelegate:(id<SBLockScreenBuddyViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SBLockScreenBuddyViewDelegate>)delegate;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)legibilitySettings;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setTitleString:(id)arg1 ;
-(id)underlayPropertiesFactory;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 ;
@end

