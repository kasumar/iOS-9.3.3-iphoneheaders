/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAssetPlayerTimeSupport
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) BOOL isPlaying; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setStartTime:(double)arg1;
-(void)setTime:(double)arg1;
-(double)time;
-(double)startTime;
-(void)setIsPlaying:(BOOL)arg1;
-(BOOL)isPlaying;

@end

