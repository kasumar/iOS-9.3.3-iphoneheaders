/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDisplaySettings.h>

@protocol SBDisplaySettings <SBActivationSettings,SBDeactivationSettings,SBStateSettings,SBProcessSettings>
@end


@class SBActivationSettings, SBDeactivationSettings, SBStateSettings, SBProcessSettings, NSString;

@interface SBDisplaySettings : NSObject <SBDisplaySettings> {

	SBActivationSettings* _activationSettings;
	SBDeactivationSettings* _deactivationSettings;
	SBStateSettings* _stateSettings;
	SBProcessSettings* _processSettings;

}

@property (nonatomic,retain) SBStateSettings * stateSettings;                            //@synthesize stateSettings=_stateSettings - In the implementation block
@property (nonatomic,retain) SBActivationSettings * activationSettings;                  //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,retain) SBDeactivationSettings * deactivationSettings;              //@synthesize deactivationSettings=_deactivationSettings - In the implementation block
@property (nonatomic,retain) SBProcessSettings * processSettings;                        //@synthesize processSettings=_processSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2 ;
-(BOOL)boolForActivationSetting:(unsigned)arg1 ;
-(SBActivationSettings *)activationSettings;
-(void)applyActivationSettings:(id)arg1 ;
-(void)clearStateSettings;
-(void)clearActivationSettings;
-(void)clearProcessSettings;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(BOOL)boolForStateSetting:(unsigned)arg1 ;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(void)setFlag:(long long)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(long long)flagForActivationSetting:(unsigned)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(void)clearDeactivationSettings;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(void)applyDeactivationSettings:(id)arg1 ;
-(void)applyStateSettings:(id)arg1 ;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(long long)flagForStateSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForStateSetting:(unsigned)arg1 ;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(id)objectForProcessSetting:(long long)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyActivationSettings;
-(id)copyDeactivationSettings;
-(id)copyStateSettings;
-(id)copyProcessSettings;
-(SBDeactivationSettings *)deactivationSettings;
-(SBStateSettings *)stateSettings;
-(void)setStateSettings:(SBStateSettings *)arg1 ;
-(void)setActivationSettings:(SBActivationSettings *)arg1 ;
-(void)setDeactivationSettings:(SBDeactivationSettings *)arg1 ;
-(SBProcessSettings *)processSettings;
-(void)setProcessSettings:(SBProcessSettings *)arg1 ;
-(id)init;
-(NSString *)description;
@end

