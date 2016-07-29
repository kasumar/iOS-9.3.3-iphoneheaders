/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIResponderForwardable.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIResponder, UIWindow, UIView, NSMutableArray, NSString, NSArray, NSNumber;

@interface UITouch : NSObject <_UIResponderForwardable> {

	double _movementMagnitudeSquared;
	double _timestamp;
	long long _phase;
	unsigned long long _tapCount;
	long long _edgeType;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	CGPoint _preciseLocationInWindow;
	CGPoint _precisePreviousLocationInWindow;
	double _previousPressure;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	double _pathMajorRadius;
	double _majorRadiusTolerance;
	double _pressure;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
		unsigned _deliversUpdatesInTouchesMovedIsValid : 1;
		unsigned _deliversUpdatesInTouchesMoved : 1;
		unsigned _isPredictedTouch : 1;
	}  _touchFlags;
	BOOL _eaten;
	BOOL _needsForceUpdate;
	BOOL _hasForceUpdate;
	long long _forceCorrelationToken;
	double _maximumPossiblePressure;
	unsigned long long _senderID;
	IOHIDEventRef _hidEvent;
	double _altitudeAngle;
	long long _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	double _azimuthAngleInCADisplay;
	double _azimuthAngleInWindow;
	CGSize _displacement;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (assign,nonatomic) BOOL isTap; 
@property (assign,nonatomic) BOOL sentTouchesEnded; 
@property (assign,nonatomic) double majorRadius; 
@property (assign,nonatomic) double majorRadiusTolerance; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) UIView * warpedIntoView; 
@property (nonatomic,readonly) BOOL _respectsCharge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) long long phase; 
@property (nonatomic,readonly) unsigned long long tapCount; 
@property (assign,nonatomic) long long type;                                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double majorRadius;                                                                              //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (nonatomic,readonly) double majorRadiusTolerance;                                                                     //@synthesize majorRadiusTolerance=_majorRadiusTolerance - In the implementation block
@property (nonatomic,readonly) UIWindow * window; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double maximumPossibleForce; 
@property (assign,nonatomic) double altitudeAngle;                                                                              //@synthesize altitudeAngle=_altitudeAngle - In the implementation block
@property (nonatomic,readonly) NSNumber * estimationUpdateIndex; 
@property (nonatomic,readonly) long long estimatedProperties; 
@property (nonatomic,readonly) long long estimatedPropertiesExpectingUpdates; 
@property (assign,setter=_setPathIndex:,nonatomic) unsigned char _pathIndex;                                                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                                              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) double _pressure;                                                                                //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) long long _edgeType;                                                          //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEaten:,getter=_isEaten,nonatomic) BOOL _eaten;                                                     //@synthesize eaten=_eaten - In the implementation block
@property (assign,setter=_setDisplacement:,nonatomic) CGSize _displacement;                                                     //@synthesize displacement=_displacement - In the implementation block
@property (setter=_setPhaseChangeDelegate:,nonatomic,retain) id<_UITouchPhaseChangeDelegate> _phaseChangeDelegate;              //@synthesize _phaseChangeDelegate=__phaseChangeDelegate - In the implementation block
@property (setter=_setWindowServerHitTestWindow:,nonatomic,retain) UIWindow * _windowServerHitTestWindow;                       //@synthesize _windowServerHitTestWindow=__windowServerHitTestWindow - In the implementation block
@property (nonatomic,readonly) double azimuthAngle; 
@property (assign,setter=_setAzimuthAngleInCADisplay:,nonatomic) double azimuthAngleInCADisplay;                                //@synthesize azimuthAngleInCADisplay=_azimuthAngleInCADisplay - In the implementation block
@property (nonatomic,readonly) double azimuthAngleInWindow;                                                                     //@synthesize azimuthAngleInWindow=_azimuthAngleInWindow - In the implementation block
@property (assign,setter=_setIsPredictedTouch:,nonatomic) BOOL _isPredictedTouch; 
@property (assign,setter=_setNeedsForceUpdate:,nonatomic) BOOL _needsForceUpdate;                                               //@synthesize needsForceUpdate=_needsForceUpdate - In the implementation block
@property (assign,setter=_setHasForceUpdate:,nonatomic) BOOL _hasForceUpdate;                                                   //@synthesize hasForceUpdate=_hasForceUpdate - In the implementation block
@property (assign,setter=_setForceCorrelationToken:,nonatomic) long long _forceCorrelationToken;                                //@synthesize forceCorrelationToken=_forceCorrelationToken - In the implementation block
@property (assign,setter=_setMaximumPossiblePressure:,nonatomic) double _maximumPossiblePressure;                               //@synthesize maximumPossiblePressure=_maximumPossiblePressure - In the implementation block
@property (nonatomic,readonly) double _unclampedForce; 
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                                                 //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                                                      //@synthesize hidEvent=_hidEvent - In the implementation block
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(long long)arg2 view:(id)arg3 ;
+(void)_setShouldReverseAltitudeAngleSense:(BOOL)arg1 ;
-(CGPoint)previousLocationInNode:(id)arg1 ;
-(CGPoint)locationInNode:(id)arg1 ;
-(CGPoint)pu_locationInPresentationLayerOfView:(id)arg1 ;
-(double)_distanceFrom:(id)arg1 inView:(id)arg2 ;
-(NSString *)description;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setIsTap:(BOOL)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)_setPressure:(double)arg1 resetPrevious:(BOOL)arg2 ;
-(void)setTimestamp:(double)arg1 ;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1 ;
-(void)_clearGestureRecognizers;
-(void)_addGestureRecognizer:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)_setLocation:(CGPoint)arg1 preciseLocation:(CGPoint)arg2 inWindowResetPreviousLocation:(BOOL)arg3 ;
-(void)setMajorRadius:(double)arg1 ;
-(void)setMajorRadiusTolerance:(double)arg1 ;
-(BOOL)_respectsCharge;
-(UIView *)warpedIntoView;
-(void)setWarpedIntoView:(UIView *)arg1 ;
-(void)_setIsFirstTouchForView:(BOOL)arg1 ;
-(void)_updateMovementMagnitudeForLocation:(CGPoint)arg1 ;
-(id)_gestureRecognizers;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldDeliverTouchForTouchesMoved;
-(BOOL)_isFirstTouchForView;
-(BOOL)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
-(void)_updateMovementMagnitudeFromLocation:(CGPoint)arg1 toLocation:(CGPoint)arg2 ;
-(id)_phaseDescription;
-(CGPoint)_locationInWindow:(id)arg1 ;
-(CGPoint)_previousLocationInWindow:(id)arg1 ;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(long long)_compareIndex:(id)arg1 ;
-(BOOL)_isStationaryRelativeToTouches:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(UIView *)view;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(long long)phase;
-(BOOL)isTap;
-(BOOL)_isEaten;
-(void)_setEaten:(BOOL)arg1 ;
-(IOHIDEventRef)_hidEvent;
-(BOOL)_needsForceUpdate;
-(long long)_forceCorrelationToken;
-(id)_clone;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(void)_setNeedsForceUpdate:(BOOL)arg1 ;
-(void)_setHasForceUpdate:(BOOL)arg1 ;
-(long long)type;
-(double)force;
-(NSArray *)gestureRecognizers;
-(void)_setForwardablePhase:(long long)arg1 ;
-(BOOL)sentTouchesEnded;
-(void)_setPreviousTouch:(id)arg1 ;
-(CGPoint)preciseLocationInView:(id)arg1 ;
-(double)_pressure;
-(void)_updateWithChildEvent:(IOHIDEventRef)arg1 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
-(void)_setPathIndex:(unsigned char)arg1 ;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(void)_setType:(long long)arg1 ;
-(void)_setForceCorrelationToken:(long long)arg1 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setMaximumPossiblePressure:(double)arg1 ;
-(UIWindow *)_windowServerHitTestWindow;
-(CGSize)_displacement;
-(unsigned char)_pathIndex;
-(void)_setDisplacement:(CGSize)arg1 ;
-(void)_setWindowServerHitTestWindow:(id)arg1 ;
-(void)_setEdgeType:(long long)arg1 ;
-(unsigned long long)_senderID;
-(void)setSentTouchesEnded:(BOOL)arg1 ;
-(long long)_edgeType;
-(BOOL)isDelayed;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(double)majorRadius;
-(unsigned long long)tapCount;
-(long long)info;
-(float)_pathMajorRadius;
-(double)azimuthAngleInCADisplay;
-(double)altitudeAngle;
-(void)_setAltitudeAngle:(double)arg1 ;
-(void)_setAzimuthAngleInCADisplay:(double)arg1 ;
-(void)_setIsPredictedTouch:(BOOL)arg1 ;
-(long long)_forwardablePhase;
-(void)_computeAzimuthAngleInWindow;
-(CGVector)azimuthUnitVectorInView:(id)arg1 ;
-(double)_unclampedForce;
-(double)maximumPossibleForce;
-(BOOL)_supportsForce;
-(double)_maximumPossiblePressure;
-(double)_standardForceAmount;
-(void)setIsDelayed:(BOOL)arg1 ;
-(CGPoint)precisePreviousLocationInView:(id)arg1 ;
-(BOOL)_isPredictedTouch;
-(double)azimuthAngle;
-(double)azimuthAngleInView:(id)arg1 ;
-(void)_loadStateFromTouch:(id)arg1 ;
-(NSNumber *)estimationUpdateIndex;
-(long long)estimatedProperties;
-(long long)estimatedPropertiesExpectingUpdates;
-(BOOL)_edgeForcePending;
-(BOOL)_edgeForceActive;
-(unsigned char)_pathIdentity;
-(double)majorRadiusTolerance;
-(BOOL)_hasForceUpdate;
-(id<_UITouchPhaseChangeDelegate>)_phaseChangeDelegate;
-(void)_setPhaseChangeDelegate:(id)arg1 ;
-(double)azimuthAngleInWindow;
@end

