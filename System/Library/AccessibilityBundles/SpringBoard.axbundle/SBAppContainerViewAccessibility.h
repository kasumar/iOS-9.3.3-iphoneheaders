/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/__SBAppContainerViewAccessibility_super.h>

@interface SBAppContainerViewAccessibility : __SBAppContainerViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_axAnnotateAffordanceView;
-(id)_axAffordanceView;
-(void)setWantsPinResizeGrabber:(BOOL)arg1 withPercent:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end
