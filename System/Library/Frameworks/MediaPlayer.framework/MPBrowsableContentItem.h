/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPContentItem.h>

@interface MPBrowsableContentItem : MPContentItem

@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
@property (assign,nonatomic) float playbackProgress; 
-(void)setContainer:(BOOL)arg1 ;
-(float)playbackProgress;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setPlaybackProgress:(float)arg1 ;
-(BOOL)isPlayable;
-(BOOL)isContainer;
@end

