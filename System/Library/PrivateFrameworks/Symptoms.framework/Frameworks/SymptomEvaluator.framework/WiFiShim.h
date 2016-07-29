/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface WiFiShim : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _registeredForCallbacks;
	BOOL _registeredForLQMCallbacks;
	id<WiFiShimDelegate> _delegate;

}

@property (nonatomic,retain) id<WiFiShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)setDelegate:(id<WiFiShimDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<WiFiShimDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WiFiManagerClientRef)wifiManager;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(id)ssidForInterfaceWithName:(id)arg1 ;
-(id)bssidForInterfaceWithName:(id)arg1 ;
-(void)registerForCallbacks;
-(void)unregisterForCallbacks;
-(void)_unregisterForLQMCallbacks;
-(void)_registerForLQMCallbacks;
-(void)_wifiDeviceRefresh;
@end

