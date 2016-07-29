/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer, CALayer, ISPlayer;

@interface ISPlayerLayer : CALayer {

	AVPlayerLayer* _videoLayer;
	CALayer* _photoLayer;
	BOOL _readyForDisplay;
	BOOL __needsUpdateReadyForDisplay;
	ISPlayer* _player;

}

@property (nonatomic,retain) ISPlayer * player;                                                                   //@synthesize player=_player - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;                                       //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,setter=_setNeedsUpateReadyForDisplay:,nonatomic) BOOL _needsUpdateReadyForDisplay;              //@synthesize _needsUpdateReadyForDisplay=__needsUpdateReadyForDisplay - In the implementation block
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayers;
-(void)setPlayer:(ISPlayer *)arg1 ;
-(ISPlayer *)player;
-(void)_setReadyForDisplay:(BOOL)arg1 ;
-(BOOL)isReadyForDisplay;
-(id)videoLayer;
-(id)photoLayer;
-(void)_invalidateIsReadyForDisplay;
-(void)_updateIsReadyForDisplayIfNeeded;
-(void)_removeExistingContent;
-(void)_setNeedsUpateReadyForDisplay:(BOOL)arg1 ;
-(BOOL)_needsUpdateReadyForDisplay;
@end

