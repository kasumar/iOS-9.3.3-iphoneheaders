/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <MapsLockScreen/SBAwayHeaderPluginView.h>

@class MNGuidanceManeuverView, MNGuidanceSignDistanceLabel, UILabel, NSArray, UIImage, UIImageView, NSAttributedString, TopBarTitleView, MNTrafficAlertView, NSString;

@interface MNDrivingWalkingLockScreenHeader : UIView <SBAwayHeaderPluginView> {

	MNGuidanceManeuverView* _maneuverView;
	MNGuidanceSignDistanceLabel* _distanceLabel;
	UILabel* _instructionsLabel;
	NSArray* _instructions;
	UIImage* _shieldImage;
	UIImageView* _shieldImageView;
	BOOL _isDimmed;
	BOOL _isAnimatingDimState;
	BOOL _centerLabels;
	BOOL _needsUpdateContainerFrameHeightForPad;
	NSAttributedString* _timeAttributedString;
	NSAttributedString* _etaAttributedString;
	TopBarTitleView* _topBarTitleView;
	MNTrafficAlertView* _trafficAlertView;
	NSString* _inProgressDistance;
	NSArray* _inProgressInstructions;
	CGPoint _shieldCenterPoint;

}

@property (nonatomic,readonly) MNGuidanceManeuverView * maneuverView;                              //@synthesize maneuverView=_maneuverView - In the implementation block
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,copy) NSString * distance; 
@property (nonatomic,copy) UIImage * shieldImage;                                                  //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint shieldCenterPoint;                                            //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
@property (nonatomic,copy) NSAttributedString * timeAttributedString;                              //@synthesize timeAttributedString=_timeAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * etaAttributedString;                               //@synthesize etaAttributedString=_etaAttributedString - In the implementation block
@property (assign,nonatomic) BOOL isDimmed;                                                        //@synthesize isDimmed=_isDimmed - In the implementation block
@property (assign,nonatomic) BOOL centerLabels;                                                    //@synthesize centerLabels=_centerLabels - In the implementation block
@property (getter=isShowingTrafficAlert,nonatomic,readonly) BOOL showingTrafficAlert; 
@property (nonatomic,readonly) SCD_Struct_MN6 metrics; 
@property (nonatomic,retain) TopBarTitleView * _topBarTitleView;                                   //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (nonatomic,retain) MNTrafficAlertView * _trafficAlertView;                               //@synthesize trafficAlertView=_trafficAlertView - In the implementation block
@property (assign,nonatomic) BOOL _isAnimatingDimState;                                            //@synthesize isAnimatingDimState=_isAnimatingDimState - In the implementation block
@property (nonatomic,copy) NSString * _inProgressDistance;                                         //@synthesize inProgressDistance=_inProgressDistance - In the implementation block
@property (nonatomic,copy) NSArray * _inProgressInstructions;                                      //@synthesize inProgressInstructions=_inProgressInstructions - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateContainerFrameHeightForPad;                           //@synthesize needsUpdateContainerFrameHeightForPad=_needsUpdateContainerFrameHeightForPad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEtaAttributedString:(NSAttributedString *)arg1 ;
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(id)legibilitySettingsForDimmed:(BOOL)arg1 ;
-(void)set_inProgressDistance:(NSString *)arg1 ;
-(void)set_inProgressInstructions:(NSArray *)arg1 ;
-(void)_updateColorsForDimState;
-(void)setNeedsUpdateContainerFrameHeightForPad:(BOOL)arg1 ;
-(BOOL)needsUpdateContainerFrameHeightForPad;
-(void)_updateLayoutForTrafficAlertVeiw;
-(long long)_interfaceOrientaton;
-(void)setCenterLabels:(BOOL)arg1 ;
-(void)showTrafficAlertWithType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)dismissTrafficAlert;
-(MNGuidanceManeuverView *)maneuverView;
-(void)setShieldCenterPoint:(CGPoint)arg1 ;
-(BOOL)languageIsWrittenRightToLeft;
-(void)setIsDimmed:(BOOL)arg1 ;
-(BOOL)isShowingTrafficAlert;
-(void)set_isAnimatingDimState:(BOOL)arg1 ;
-(NSAttributedString *)timeAttributedString;
-(NSAttributedString *)etaAttributedString;
-(NSString *)_inProgressDistance;
-(NSArray *)_inProgressInstructions;
-(BOOL)_isAnimatingDimState;
-(void)set_trafficAlertView:(MNTrafficAlertView *)arg1 ;
-(MNTrafficAlertView *)_trafficAlertView;
-(TopBarTitleView *)_topBarTitleView;
-(CGPoint)shieldCenterPoint;
-(void)setTimeAttributedString:(NSAttributedString *)arg1 ;
-(UIImage *)shieldImage;
-(void)set_topBarTitleView:(TopBarTitleView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(SCD_Struct_MN6)metrics;
-(void)update:(/*^block*/id)arg1 ;
-(void)setDistance:(NSString *)arg1 ;
-(NSString *)distance;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(int)maneuver;
-(void)updateIfNecessary:(BOOL)arg1 ;
-(void)setManeuver:(int)arg1 ;
-(BOOL)isDimmed;
-(BOOL)centerLabels;
@end

