/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL hasSeenACaseLatchCoverOnce; 
@property (nonatomic,readonly) BOOL disableHomeButton; 
@property (nonatomic,readonly) BOOL useHardwareSwitchAsOrientationLock; 
@property (nonatomic,readonly) BOOL disableProximitySensor; 
-(void)setDisableProximitySensor:(BOOL)arg1 ;
-(BOOL)disableProximitySensor;
-(void)setUseHardwareSwitchAsOrientationLock:(BOOL)arg1 ;
-(BOOL)useHardwareSwitchAsOrientationLock;
-(void)setHasSeenACaseLatchCoverOnce:(BOOL)arg1 ;
-(BOOL)hasSeenACaseLatchCoverOnce;
-(void)setDisableHomeButton:(BOOL)arg1 ;
-(BOOL)disableHomeButton;
-(void)_bindAndRegisterDefaults;
@end

