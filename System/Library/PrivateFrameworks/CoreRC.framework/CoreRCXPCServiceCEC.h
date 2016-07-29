/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCEC
@required
-(void)performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)performDeckControlSetDeckStatusAsync:(unsigned long long)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)performInactiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performRefreshDevicesAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performRequestActiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)performSetPowerStatus:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryLocalInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3;

@end

