/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PLModalDimmingContained;
@class UIImageView, UIViewController, UIView;

@interface PLModalDimmingViewController : UIViewController {

	UIImageView* _vignetteView;
	UIViewController*<PLModalDimmingContained> _contentViewController;
	UIView* _wrapperView;

}

@property (nonatomic,retain) UIViewController*<PLModalDimmingContained> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIViewController*<PLModalDimmingContained>)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController*<PLModalDimmingContained>)arg1 ;
-(void)_updateWrapperView:(id)arg1 toOrientation:(long long)arg2 forViewController:(id)arg3 ;
-(void)_updateVignetteToOrientation:(long long)arg1 ;
-(void)presentWithCustomAnimation;
-(void)presentModalOnViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dismissWithCustomAnimation:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

