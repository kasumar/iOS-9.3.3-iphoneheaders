/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AirPortAssistantController : NSObject {

	id _delegate;
	id _viewController;
	id _context;
	NSString* _configuredSSID;
	NSDictionary* _unconfiguredWACDevices;

}

@property (assign,nonatomic) id<AirPortAssistantControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * configuredSSID;                                              //@synthesize configuredSSID=_configuredSSID - In the implementation block
@property (retain) NSDictionary * unconfiguredWACDevices;                                  //@synthesize unconfiguredWACDevices=_unconfiguredWACDevices - In the implementation block
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
+(id)sharedInstance;
+(BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 viewController:(id)arg4 ;
+(id)assistantUIViewControllerWithParameters:(id)arg1 ;
+(void)cancelAirPortAssistantController;
+(BOOL)isAirPlayDevice:(id)arg1 ;
+(BOOL)isSTAOnlyDevice:(id)arg1 ;
+(BOOL)isGenericMFiAccessory:(id)arg1 ;
+(BOOL)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 ;
-(void)setDelegate:(id<AirPortAssistantControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AirPortAssistantControllerDelegate>)delegate;
-(id)context;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)setContext:(id)arg1 ;
-(void)wirelessScanDone:(id)arg1 ;
-(void)assistantCompleteWithResult:(int)arg1 ;
-(void)setConfiguredSSID:(NSString *)arg1 ;
-(void)updateWACListeners;
-(id)WACDeviceFromScanInfo:(id)arg1 ;
-(void)setUnconfiguredWACDevices:(NSDictionary *)arg1 ;
-(NSDictionary *)unconfiguredWACDevices;
-(int)start2_4WiFiScan;
-(void)stop2_4WiFiScan;
-(int)configureUIViewControllerWithParameters:(id)arg1 ;
-(NSString *)configuredSSID;
@end

