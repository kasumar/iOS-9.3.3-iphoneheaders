/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISVideoVolumeControllerDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer;

@interface ISVideoVolumeController : NSObject {

	struct {
		BOOL respondsToVolumeDidChange;
	}  _delegateFlags;
	float __volumeRampStartValue;
	float __targetVolume;
	ISWrappedAVPlayer* _player;
	id<ISVideoVolumeControllerDelegate> _delegate;
	long long __volumeRampRequestNumber;
	double __volumeRampStartTime;
	double __volumeRampDuration;

}

@property (nonatomic,__weak,readonly) ISWrappedAVPlayer * player;                                                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic,__weak) id<ISVideoVolumeControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setVolumeRampRequestNumber:,nonatomic) long long _volumeRampRequestNumber;              //@synthesize _volumeRampRequestNumber=__volumeRampRequestNumber - In the implementation block
@property (assign,setter=_setVolumeRampStartTime:,nonatomic) double _volumeRampStartTime;                         //@synthesize _volumeRampStartTime=__volumeRampStartTime - In the implementation block
@property (assign,setter=_setVolumeRampStartValue:,nonatomic) float _volumeRampStartValue;                        //@synthesize _volumeRampStartValue=__volumeRampStartValue - In the implementation block
@property (assign,setter=_setVolumeRampDuration:,nonatomic) double _volumeRampDuration;                           //@synthesize _volumeRampDuration=__volumeRampDuration - In the implementation block
@property (assign,setter=_setTargetVolume:,nonatomic) float _targetVolume;                                        //@synthesize _targetVolume=__targetVolume - In the implementation block
-(void)setDelegate:(id<ISVideoVolumeControllerDelegate>)arg1 ;
-(id<ISVideoVolumeControllerDelegate>)delegate;
-(ISWrappedAVPlayer *)player;
-(void)setVolume:(float)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 withRampDuration:(double)arg2 ;
-(long long)_volumeRampRequestNumber;
-(void)_setVolumeRampRequestNumber:(long long)arg1 ;
-(void)_setVolumeRampStartTime:(double)arg1 ;
-(void)_setVolumeRampDuration:(double)arg1 ;
-(void)_setVolumeRampStartValue:(float)arg1 ;
-(void)_setTargetVolume:(float)arg1 ;
-(float)_targetVolume;
-(void)_tickRampVolumeWithRampRequestNumber:(long long)arg1 ;
-(double)_volumeRampStartTime;
-(double)_volumeRampDuration;
-(float)_volumeRampStartValue;
@end

