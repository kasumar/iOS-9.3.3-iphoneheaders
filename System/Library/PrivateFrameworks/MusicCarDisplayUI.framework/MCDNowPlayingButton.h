/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDNowPlayingButton : UIButton {

	CALayer* _leadingBorder;
	CALayer* _focusColorLayer;
	CGSize _layoutFrameSize;
	BOOL _hidesLeadingBorder;

}

@property (assign,nonatomic) BOOL hidesLeadingBorder;              //@synthesize hidesLeadingBorder=_hidesLeadingBorder - In the implementation block
+(id)buttonWithHeight:(double)arg1 ;
+(id)wrappingViewForButton:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)focusedViewDidChange;
-(void)sizeToFit;
-(void)setHidesLeadingBorder:(BOOL)arg1 ;
-(BOOL)hidesLeadingBorder;
@end

