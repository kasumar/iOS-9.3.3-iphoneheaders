/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	double _progress;
	CALayer* _layer;
	CALayer* _toLayer;
	long long _swipeDirection;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;                     //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(long long)swipeDirection;
-(CALayer *)toLayer;
-(void)setToLayer:(CALayer *)arg1 ;
-(void)setSwipeDirection:(long long)arg1 ;
@end

