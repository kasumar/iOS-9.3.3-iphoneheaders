/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDLikeButton : MCDPlayModeButton {

	UIImage* _heartImage;
	UIImage* _heartFilledImage;

}

@property (nonatomic,retain) UIImage * heartImage;                    //@synthesize heartImage=_heartImage - In the implementation block
@property (nonatomic,retain) UIImage * heartFilledImage;              //@synthesize heartFilledImage=_heartFilledImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)colorForTouchFocusLayerSelected;
-(UIImage *)heartFilledImage;
-(UIImage *)heartImage;
-(void)setHeartImage:(UIImage *)arg1 ;
-(void)setHeartFilledImage:(UIImage *)arg1 ;
@end

