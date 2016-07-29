/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <SpringBoard/SBActivationSettings.h>
#import <SpringBoard/SBDeactivationSettings.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBLayoutElementProviding.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementProviding> {

	NSString* _identifier;
	long long _layoutRole;
	SBActivationSettings* _activationSettings;
	SBDeactivationSettings* _deactivationSettings;
	long long _mainDisplayPreferredInterfaceOrientation;

}

@property (nonatomic,copy) NSString * identifier;                                                                                                                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long layoutRole;                                                                                                                                                   //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,__weak,readonly) id<SBDisplay> representedDisplay; 
@property (nonatomic,readonly) SBActivationSettings * activationSettings;                                                                                                                            //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,readonly) SBDeactivationSettings * deactivationSettings;                                                                                                                        //@synthesize deactivationSettings=_deactivationSettings - In the implementation block
@property (assign,setter=_setMainDisplayPreferredInterfaceOrientation:,getter=_mainDisplayPreferredInterfaceOrientation,nonatomic) long long _mainDisplayPreferredInterfaceOrientation;              //@synthesize mainDisplayPreferredInterfaceOrientation=_mainDisplayPreferredInterfaceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * layoutIdentifier; 
@property (nonatomic,readonly) unsigned long long supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned long long layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
@property (nonatomic,copy,readonly) id entityGenerator; 
+(id)entity;
-(BOOL)isPrimarySwitcherEntity;
-(BOOL)isStarkNowPlayingEntity;
-(id)workspaceApplication;
-(BOOL)isApplicationEntity;
-(BOOL)isPlaceholderEntity;
-(BOOL)isDeactivatingEntity;
-(BOOL)isHomeScreenEntity;
-(BOOL)isSideSwitcherEntity;
-(BOOL)isAlertEntity;
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2 ;
-(BOOL)boolForActivationSetting:(unsigned)arg1 ;
-(SBActivationSettings *)activationSettings;
-(void)applyActivationSettings:(id)arg1 ;
-(void)clearActivationSettings;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(long long)flagForActivationSetting:(unsigned)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)clearDeactivationSettings;
-(BOOL)supportsLayoutRole:(long long)arg1 ;
-(void)applyDeactivationSettings:(id)arg1 ;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(id)copyActivationSettings;
-(id)copyDeactivationSettings;
-(long long)preferredInterfaceOrientationOnDisplay:(id)arg1 ;
-(id)layoutElement;
-(BOOL)hasSameIdentityAsElement:(id)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(id)initWithDisplayChangeSettings:(id)arg1 ;
-(id<SBDisplay>)representedDisplay;
-(/*^block*/id)_generator;
-(SBDeactivationSettings *)deactivationSettings;
-(id)layoutElementForRole:(long long)arg1 ;
-(BOOL)isAnalagousToEntity:(id)arg1 ;
-(NSString *)layoutIdentifier;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(BOOL)_supportsPresentationAtAnySize;
-(BOOL)_supportsDynamicResizing;
-(long long)_mainDisplayPreferredInterfaceOrientation;
-(void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(Class)viewControllerClass;
-(unsigned long long)layoutAttributes;
-(void)setLayoutRole:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)layoutRole;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1 ;
@end

