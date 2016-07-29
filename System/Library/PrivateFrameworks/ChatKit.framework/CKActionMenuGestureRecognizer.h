/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {

	CKActionMenuGestureVelocitySample* _velocitySample;
	CKActionMenuGestureVelocitySample* _previousVelocitySample;
	double _lastTouchTime;
	CGPoint _lastScreenLocation;

}
+(id)actionMenuGestureRecognizer;
-(void)dealloc;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
@end

