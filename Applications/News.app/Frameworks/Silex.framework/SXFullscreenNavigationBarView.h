/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIView.h>

@protocol SXFullscreenNavigationBarViewDelegate;
@class UIView, UIButton;

@interface SXFullscreenNavigationBarView : UIView {

	BOOL _expanded;
	id<SXFullscreenNavigationBarViewDelegate> _delegate;
	UIView* _backgroundView;
	UIButton* _button;

}

@property (assign,nonatomic,__weak) id<SXFullscreenNavigationBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL expanded;                                                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
-(void)createBackgroundView;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(void)createDoneButton;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIButton *)button;
-(void)setDelegate:(id<SXFullscreenNavigationBarViewDelegate>)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id<SXFullscreenNavigationBarViewDelegate>)delegate;
-(void)didMoveToSuperview;
-(UIView *)backgroundView;
-(BOOL)expanded;
-(void)doneButtonPressed:(id)arg1 ;
@end

