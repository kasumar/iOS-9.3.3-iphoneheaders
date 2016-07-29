/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISInputObserver.h>

@protocol ISInputControllerDelegate;
@class NSMutableSet, NSMapTable, NSSet, NSString;

@interface ISInputController : NSObject <ISInputObserver> {

	NSMutableSet* _inputs;
	BOOL __shouldVitalityPlayBack;
	float _playRate;
	float _volume;
	float _timeOffset;
	float _vitalityPlayRate;
	float _vitalityHintPlayRate;
	float _hintProgress;
	long long _playbackState;
	/*^block*/id _vitalityPlaybackEndHandler;
	id<ISInputControllerDelegate> _delegate;
	NSMapTable* __lastVitalitySignalIDByInput;

}

@property (assign,nonatomic) long long playbackState;                                                      //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) float playRate;                                                               //@synthesize playRate=_playRate - In the implementation block
@property (assign,nonatomic) float volume;                                                                 //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) float timeOffset;                                                             //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) float vitalityPlayRate;                                                       //@synthesize vitalityPlayRate=_vitalityPlayRate - In the implementation block
@property (assign,nonatomic) float vitalityHintPlayRate;                                                   //@synthesize vitalityHintPlayRate=_vitalityHintPlayRate - In the implementation block
@property (nonatomic,copy) id vitalityPlaybackEndHandler;                                                  //@synthesize vitalityPlaybackEndHandler=_vitalityPlaybackEndHandler - In the implementation block
@property (nonatomic,readonly) NSSet * inputs; 
@property (assign,nonatomic) float hintProgress;                                                           //@synthesize hintProgress=_hintProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ISInputControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMapTable * _lastVitalitySignalIDByInput;                                  //@synthesize _lastVitalitySignalIDByInput=__lastVitalitySignalIDByInput - In the implementation block
@property (assign,setter=_setShouldVitalityPlayBack:,nonatomic) BOOL _shouldVitalityPlayBack;              //@synthesize _shouldVitalityPlayBack=__shouldVitalityPlayBack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ISInputControllerDelegate>)arg1 ;
-(id)init;
-(id<ISInputControllerDelegate>)delegate;
-(float)timeOffset;
-(void)_updateState;
-(void)_setPlaybackState:(long long)arg1 ;
-(long long)playbackState;
-(void)addInput:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
-(NSSet *)inputs;
-(float)volume;
-(void)_setTimeOffset:(float)arg1 ;
-(void)_setVitalityPlayRate:(float)arg1 ;
-(void)_setHintProgress:(float)arg1 ;
-(void)_setPlayRate:(float)arg1 ;
-(float)playRate;
-(float)hintProgress;
-(float)vitalityPlayRate;
-(float)vitalityHintPlayRate;
-(void)inputDidChange:(id)arg1 ;
-(void)removeAllInputs;
-(id)vitalityPlaybackEndHandler;
-(BOOL)_shouldVitalityPlayBack;
-(NSMapTable *)_lastVitalitySignalIDByInput;
-(void)_vitalityPlaybackDidEnd;
-(void)_setVolume:(float)arg1 ;
-(void)_setVitalityHintPlayRate:(float)arg1 ;
-(void)_setVitalityPlaybackEndHandler:(/*^block*/id)arg1 ;
-(void)_setShouldVitalityPlayBack:(BOOL)arg1 ;
@end

