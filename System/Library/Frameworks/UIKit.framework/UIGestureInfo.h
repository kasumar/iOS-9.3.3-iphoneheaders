/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIGestureAnimation, UIScrollAnimation;

@interface UIGestureInfo : NSObject {

	id delegate;
	int enabledGestures;
	int rotationState;
	int zoomState;
	int panState;
	CGPoint startGestureInner;
	CGPoint startGestureOuter;
	CGPoint startScrollPoint;
	CGPoint endScrollPoint;
	CGSize visibleSize;
	CGRect centerRect;
	UIGestureAnimation* rotationAnimation;
	float rotationDegrees;
	float recentRotationDegrees;
	float minDegrees;
	float maxDegrees;
	float startDegrees;
	float endDegrees;
	UIGestureAnimation* zoomAnimation;
	int zoomRubberBandHysteresisCount;
	float zoomScale;
	float startScale;
	float endScale;
	float unadjustedScale;
	float zoomMultiplier;
	float minScale;
	float maxScale;
	CGPoint zoomFailureWindowPoint;
	float zoomFailureDuration;
	float zoomFailureStartScale;
	float zoomAnimationProgress;
	UIScrollAnimation* scrollAnimation;
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	}  flags;

}
-(void)dealloc;
-(id)init;
@end

