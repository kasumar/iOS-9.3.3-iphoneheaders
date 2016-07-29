/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIGestureRecognizerFailureRequirementDelegate;
@class _UIGestureRecognizerFailureMap, UIGestureRecognizer;

@interface _UIGestureRecognizerFailureRequirement : NSObject {

	_UIGestureRecognizerFailureMap* _failureMap;
	id<_UIGestureRecognizerFailureRequirementDelegate> _delegate;
	long long _state;

}

@property (nonatomic,retain) _UIGestureRecognizerFailureMap * failureMap;                              //@synthesize failureMap=_failureMap - In the implementation block
@property (assign,nonatomic) id<_UIGestureRecognizerFailureRequirementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer; 
-(void)setDelegate:(id<_UIGestureRecognizerFailureRequirementDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<_UIGestureRecognizerFailureRequirementDelegate>)delegate;
-(UIGestureRecognizer *)gestureRecognizer;
-(long long)state;
-(void)reset;
-(BOOL)isEnabled;
-(void)run;
-(_UIGestureRecognizerFailureMap *)failureMap;
-(void)completeWithEvent:(id)arg1 pressesEvent:(id)arg2 ;
-(BOOL)isWaitingForOtherFailureRequirements;
-(BOOL)shouldDependentFailureRequirementsFail;
-(void)setFailureMap:(_UIGestureRecognizerFailureMap *)arg1 ;
-(void)requiredFailureRequirementCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3 ;
-(void)allRelatedFailureRequirementsCompleted;
-(id)requiredFailureRequirements;
-(id)dependentFailureRequirements;
@end

