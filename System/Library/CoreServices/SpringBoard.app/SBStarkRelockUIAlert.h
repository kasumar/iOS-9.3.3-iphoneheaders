/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>

@interface SBStarkRelockUIAlert : SBAlertAdapter {

	BOOL _animatingDismiss;

}
-(BOOL)shouldPendAlertItemsWhileActive;
-(id)_animationFactory;
-(void)_animateDismiss;
-(void)_dismissAndLock;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)hasTranslucentBackground;
-(void)handleAutoLock;
-(BOOL)handleLockButtonPressed;
@end

