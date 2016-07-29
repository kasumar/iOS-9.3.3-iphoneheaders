/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject {

	MRAction* _action;
	double _startValue;
	double _lastValue;
	NSDictionary* _animationAttributes;

}

@property (nonatomic,retain) MRAction * action;                       //@synthesize action=_action - In the implementation block
@property (assign) double startValue;                                 //@synthesize startValue=_startValue - In the implementation block
@property (assign) double lastValue;                                  //@synthesize lastValue=_lastValue - In the implementation block
@property (readonly) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
@property (readonly) BOOL isArmed; 
-(void)setLastValue:(double)arg1 ;
-(void)disarm;
-(BOOL)isArmed;
-(double)lastValue;
-(double)rearmIfNeededWithDefaultValue:(double)arg1 ;
-(NSDictionary *)animationAttributes;
-(void)dealloc;
-(MRAction *)action;
-(void)setAction:(MRAction *)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(double)startValue;
@end
