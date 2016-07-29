/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WACUIHostProtocol <NSObject>
@required
-(void)backendDidStopSearchWithError:(id)arg1;
-(void)dismissWithStatus:(int)arg1;
-(void)_signalPresentationComplete;
-(void)wifiDidShutdown;
-(void)backendDidStartSearchWithError:(id)arg1;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
-(void)updateState:(long long)arg1;

@end
