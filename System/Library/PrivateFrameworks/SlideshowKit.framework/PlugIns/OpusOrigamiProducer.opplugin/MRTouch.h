/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableArray, NSArray;

@interface MRTouch : NSObject {

	NSMutableArray* _gestureRecognizers;
	int _phase;
	double _timestamp;
	unsigned long long _tapCount;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
@property (assign,nonatomic) int phase;                                //@synthesize phase=_phase - In the implementation block
@property (readonly) NSArray * gestureRecognizers; 
+(id)touchWithUITouch:(id)arg1 inView:(id)arg2 ;
+(id)touchWithLocation:(CGPoint)arg1 timestamp:(double)arg2 tapCount:(unsigned long long)arg3 ;
-(id)initWithUITouch:(id)arg1 inView:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(double)timestamp;
-(int)phase;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPhase:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSArray *)gestureRecognizers;
-(unsigned long long)tapCount;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
@end

