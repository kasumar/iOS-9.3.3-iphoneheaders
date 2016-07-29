/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBUIPluginViewControllerInterface;
@class UIViewController, UIView, UIScreen;

@interface SBAssistantRootViewController : UIViewController {

	UIViewController*<SBUIPluginViewControllerInterface> _assistantViewController;
	UIView* _contentView;
	UIView* _clippingView;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIView * clippingView;                                                               //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIViewController*<SBUIPluginViewControllerInterface> assistantController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (nonatomic,retain) UIScreen * screen;                                                                     //@synthesize screen=_screen - In the implementation block
-(void)setAssistantController:(UIViewController*<SBUIPluginViewControllerInterface>)arg1 ;
-(UIView *)clippingView;
-(UIViewController*<SBUIPluginViewControllerInterface>)assistantController;
-(UIScreen *)screen;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)setScreen:(UIScreen *)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(UIView *)contentView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
@end

