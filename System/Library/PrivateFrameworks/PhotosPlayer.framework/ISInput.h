/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ISInputObserver;
@class NSObject, ISPlayer, NSHashTable;

@interface ISInput : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	id<ISInputObserver> _observer;
	BOOL _enabled;
	BOOL __isPerfomingChanges;
	BOOL __didChange;
	float _value;
	float _secondaryValue;
	float _tertiaryValue;
	long long _inputType;
	long long _signalID;
	ISPlayer* _player;
	NSHashTable* __changeObservers;

}

@property (nonatomic,readonly) long long inputType;                                               //@synthesize inputType=_inputType - In the implementation block
@property (nonatomic,readonly) float value;                                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) float secondaryValue;                                              //@synthesize secondaryValue=_secondaryValue - In the implementation block
@property (nonatomic,readonly) float tertiaryValue;                                               //@synthesize tertiaryValue=_tertiaryValue - In the implementation block
@property (nonatomic,readonly) long long signalID;                                                //@synthesize signalID=_signalID - In the implementation block
@property (nonatomic,__weak,readonly) ISPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSHashTable * _changeObservers;                                    //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerfomingChanges;              //@synthesize _isPerfomingChanges=__isPerfomingChanges - In the implementation block
@property (assign,setter=_setDidChange:,nonatomic) BOOL _didChange;                               //@synthesize _didChange=__didChange - In the implementation block
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(void)_invalidate;
-(void)signal;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSHashTable *)_changeObservers;
-(void)setPlayer:(ISPlayer *)arg1 ;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)playerDidChange;
-(ISPlayer *)player;
-(BOOL)_didChange;
-(long long)inputType;
-(float)secondaryValue;
-(float)tertiaryValue;
-(BOOL)_isPerfomingChanges;
-(void)_setDidChange:(BOOL)arg1 ;
-(void)setSecondaryValue:(float)arg1 ;
-(void)setTertiaryValue:(float)arg1 ;
-(long long)signalID;
@end

