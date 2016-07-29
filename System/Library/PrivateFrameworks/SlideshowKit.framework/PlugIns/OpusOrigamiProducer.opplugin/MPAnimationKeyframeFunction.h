/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {

	double _duration;
	NSString* _function;
	NSDictionary* _functionParameters;
	double _functionTimeOffset;
	double _functionTimeFactor;
	double _innerEaseInControl;
	double _innerEaseOutControl;

}

@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * function;                            //@synthesize function=_function - In the implementation block
@property (nonatomic,copy) NSDictionary * functionParameters;              //@synthesize functionParameters=_functionParameters - In the implementation block
@property (assign,nonatomic) double functionTimeOffset;                    //@synthesize functionTimeOffset=_functionTimeOffset - In the implementation block
@property (assign,nonatomic) double functionTimeFactor;                    //@synthesize functionTimeFactor=_functionTimeFactor - In the implementation block
@property (assign,nonatomic) double innerEaseInControl;                    //@synthesize innerEaseInControl=_innerEaseInControl - In the implementation block
@property (assign,nonatomic) double innerEaseOutControl;                   //@synthesize innerEaseOutControl=_innerEaseOutControl - In the implementation block
+(id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 withDuration:(double)arg3 ;
+(id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4 ;
-(id)keyframe;
-(id)initKeyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4 ;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setInnerEaseInControl:(double)arg1 ;
-(double)innerEaseInControl;
-(double)functionTimeFactor;
-(double)functionTimeOffset;
-(NSDictionary *)functionParameters;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)setInnerEaseOutControl:(double)arg1 ;
-(double)innerEaseOutControl;
-(NSString *)function;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
@end

