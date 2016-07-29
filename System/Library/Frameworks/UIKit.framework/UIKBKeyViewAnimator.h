/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBKeyViewAnimator : NSObject {

	BOOL _disabled;

}

@property (assign,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldPurgeKeyViews; 
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 ;
-(void)reset;
-(BOOL)disabled;
-(Class)_keyViewClassForSpecialtyKey:(id)arg1 ;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldPurgeKeyViews;
-(Class)keyViewClassForKey:(id)arg1 traits:(id)arg2 ;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(CGSize)arg2 ;
-(void)endTransitionForKeyView:(id)arg1 ;
-(id)keycapMeshTransformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(id)keycapNullTransform;
-(id)keycapPrimaryStandardTransform;
-(id)keycapAlternateStandardTransform;
-(id)keycapLeftStandardTransform;
-(id)keycapRightStandardTransform;
-(id)keycapPrimaryExitTransform;
-(id)keycapLeftSelectPrimaryTransform;
-(id)keycapLeftSelectLeftTransform;
-(id)keycapLeftSelectRightTransform;
-(id)keycapRightSelectPrimaryTransform;
-(id)keycapRightSelectLeftTransform;
-(id)keycapRightSelectRightTransform;
-(void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(BOOL)arg3 ;
-(void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 ;
@end

