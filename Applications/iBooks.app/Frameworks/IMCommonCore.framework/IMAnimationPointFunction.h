/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class CAMediaTimingFunction, IMAnimationFloatFunction;

@interface IMAnimationPointFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	IMAnimationFloatFunction* _xFunction;
	IMAnimationFloatFunction* _yFunction;
	CGPoint _startValue;
	CGPoint _endValue;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGPoint startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGPoint endValue;                                    //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * xFunction;                //@synthesize xFunction=_xFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * yFunction;                //@synthesize yFunction=_yFunction - In the implementation block
-(CGPoint)solveForTime:(double)arg1 ;
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGPoint)arg2 endRect:(CGPoint)arg3 speed:(double)arg4 ;
-(IMAnimationFloatFunction *)xFunction;
-(IMAnimationFloatFunction *)yFunction;
-(void)setXFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setYFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(CGPoint)arg1 ;
-(void)setEndValue:(CGPoint)arg1 ;
-(CGPoint)endValue;
-(CGPoint)startValue;
@end

