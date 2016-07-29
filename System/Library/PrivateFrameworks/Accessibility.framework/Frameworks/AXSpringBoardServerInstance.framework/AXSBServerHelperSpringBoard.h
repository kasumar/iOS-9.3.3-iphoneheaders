/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <AXSpringBoardServerInstance/__AXSBServerHelperSpringBoard_super.h>

@interface AXSBServerHelperSpringBoard : __AXSBServerHelperSpringBoard_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityBackboardSnarfedMenuDownAtTimestamp:(unsigned long long)arg1 ;
-(BOOL)isMenuDoubleTapAllowed;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_menuButtonUp:(IOHIDEventRef)arg1 ;
-(void)_accessibilitySetLastMenuSnarfTimeValue:(id)arg1 ;
-(double)_menuHoldTime;
-(id)_accessibilityLastMenuSnarfTimeValue;
@end

