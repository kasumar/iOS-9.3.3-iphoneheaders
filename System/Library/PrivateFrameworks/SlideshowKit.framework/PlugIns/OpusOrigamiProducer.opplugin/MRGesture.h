/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRHitBlob;

@interface MRGesture : NSObject {

	MRHitBlob* _hitBlob;
	double _linearScaleAtStart;
	double _slideRotationAtStart;
	double _slideScaleAtStart;
	double _currentRotation;
	double _currentScale;
	CGPoint _locationInViewAtStart;
	CGPoint _locationInSlideAtStart;
	CGPoint _slideCenterAtStart;
	CGPoint _currentTranslation;

}

@property (retain) MRHitBlob * hitBlob;                         //@synthesize hitBlob=_hitBlob - In the implementation block
@property (assign) CGPoint locationInViewAtStart;               //@synthesize locationInViewAtStart=_locationInViewAtStart - In the implementation block
@property (assign) CGPoint locationInSlideAtStart;              //@synthesize locationInSlideAtStart=_locationInSlideAtStart - In the implementation block
@property (assign) double linearScaleAtStart;                   //@synthesize linearScaleAtStart=_linearScaleAtStart - In the implementation block
@property (assign) CGPoint slideCenterAtStart;                  //@synthesize slideCenterAtStart=_slideCenterAtStart - In the implementation block
@property (assign) double slideRotationAtStart;                 //@synthesize slideRotationAtStart=_slideRotationAtStart - In the implementation block
@property (assign) double slideScaleAtStart;                    //@synthesize slideScaleAtStart=_slideScaleAtStart - In the implementation block
@property (assign) CGPoint currentTranslation;                  //@synthesize currentTranslation=_currentTranslation - In the implementation block
@property (assign) double currentRotation;                      //@synthesize currentRotation=_currentRotation - In the implementation block
@property (assign) double currentScale;                         //@synthesize currentScale=_currentScale - In the implementation block
-(double)currentRotation;
-(double)currentScale;
-(MRHitBlob *)hitBlob;
-(CGPoint)locationInViewAtStart;
-(void)setSlideCenterAtStart:(CGPoint)arg1 ;
-(void)setSlideRotationAtStart:(double)arg1 ;
-(void)setSlideScaleAtStart:(double)arg1 ;
-(void)setLinearScaleAtStart:(double)arg1 ;
-(double)linearScaleAtStart;
-(void)setLocationInSlideAtStart:(CGPoint)arg1 ;
-(void)setCurrentTranslation:(CGPoint)arg1 ;
-(void)setCurrentRotation:(double)arg1 ;
-(void)setCurrentScale:(double)arg1 ;
-(double)slideRotationAtStart;
-(CGPoint)locationInSlideAtStart;
-(CGPoint)slideCenterAtStart;
-(double)slideScaleAtStart;
-(void)setLocationInViewAtStart:(CGPoint)arg1 ;
-(id)initWithHitBlob:(id)arg1 ;
-(void)setHitBlob:(MRHitBlob *)arg1 ;
-(void)dealloc;
-(CGPoint)currentTranslation;
@end

