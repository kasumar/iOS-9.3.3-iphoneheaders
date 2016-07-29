/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDelegate <NSObject>
@optional
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 tinted:(out BOOL*)arg4;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
-(BOOL)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
-(BOOL)nowPlayingViewControllerCanLike:(id)arg1;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1;
-(void)nowPlayingViewControllerLike:(id)arg1;

@end

