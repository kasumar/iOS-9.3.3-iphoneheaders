/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol TPStarkHardPauseButtonDelegate;
@interface TPStarkInCallHardPauseButton : UIButton {

	id<TPStarkHardPauseButtonDelegate> _delegate;

}

@property (assign) id<TPStarkHardPauseButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<TPStarkHardPauseButtonDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id<TPStarkHardPauseButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)hardPausePressed;
@end

