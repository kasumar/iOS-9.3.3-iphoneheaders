/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	id<_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchObserver:(id<_MKUserInteractionGestureRecognizerTouchObserver>)arg1 ;
-(id<_MKUserInteractionGestureRecognizerTouchObserver>)touchObserver;
@end

