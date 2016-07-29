/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) const CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
+(id)normalizedKeyframeAnimationWithKeyPath:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
-(const CGPathRef)path;
-(void)setCalculationMode:(NSString *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(NSArray *)values;
-(NSArray *)keyTimes;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(NSArray *)timingFunctions;
-(NSArray *)tensionValues;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(NSArray *)biasValues;
-(void)setBiasValues:(NSArray *)arg1 ;
-(NSString *)calculationMode;
-(void)CA_prepareRenderValue;
-(void)setTensionValues:(NSArray *)arg1 ;
@end

