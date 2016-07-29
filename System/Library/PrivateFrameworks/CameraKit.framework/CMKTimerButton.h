/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKExpandableMenuButton.h>

@protocol CMKTimerButtonDelegate;
@class UIImageView;

@interface CMKTimerButton : CMKExpandableMenuButton {

	BOOL _hideOffWhenCollapsed;
	id<CMKTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (assign,nonatomic,__weak) id<CMKTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)setDelegate:(id<CMKTimerButtonDelegate>)arg1 ;
-(id<CMKTimerButtonDelegate>)delegate;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(id)headerView;
-(void)_commonCMKTimerButtonInitialization;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)_glyphView;
-(BOOL)hideOffWhenCollapsed;
-(id)hiddenIndexesWhileCollapsed;
@end
