/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mediaremoted/mediaremoted-Structs.h>
@interface MRDVolumeController : NSObject {

	BOOL _volumeWarningEnabled;
	float _currentVolume;
	float _volumeLimit;
	unsigned long long _warningState;

}

@property (nonatomic,readonly) float currentVolume;                        //@synthesize currentVolume=_currentVolume - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) float volumeLimit;                          //@synthesize volumeLimit=_volumeLimit - In the implementation block
@property (assign,nonatomic) unsigned long long warningState;              //@synthesize warningState=_warningState - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)setVolume:(float)arg1 error:(id*)arg2 ;
-(BOOL)adjustVolumeWithStepAmount:(float)arg1 error:(id*)arg2 ;
-(float)currentVolume;
-(float)volumeLimit;
-(unsigned long long)warningState;
-(void)setWarningState:(unsigned long long)arg1 ;
-(BOOL)volumeWarningEnabled;
@end

