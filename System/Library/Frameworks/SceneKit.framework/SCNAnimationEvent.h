/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNAnimationEvent : NSObject {

	double _eventTime;
	/*^block*/id _eventBlock;

}
+(id)animationEventWithKeyTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setEventBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)eventBlock;
@end

