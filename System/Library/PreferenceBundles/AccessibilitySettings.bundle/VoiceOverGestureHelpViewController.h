/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>

@class VoiceOverGestureHelpView;

@interface VoiceOverGestureHelpViewController : PSViewController {

	VoiceOverGestureHelpView* _gestureHelpView;

}

@property (nonatomic,retain) VoiceOverGestureHelpView * gestureHelpView;              //@synthesize gestureHelpView=_gestureHelpView - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_didChooseHelpMode:(id)arg1 ;
-(VoiceOverGestureHelpView *)gestureHelpView;
-(id)_titleForHelpMode:(long long)arg1 ;
-(id)_applicableHelpModes;
-(void)setGestureHelpView:(VoiceOverGestureHelpView *)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

