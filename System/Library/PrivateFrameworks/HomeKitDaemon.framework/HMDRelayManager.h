/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDNetworkMonitorDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegateHomeKit.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, HMDHome, NSObject, IDSService, NSHashTable, NSMutableArray, NSURLSession, HMDNetworkMonitor;

@interface HMDRelayManager : NSObject <HMDNetworkMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate> {

	BOOL _supported;
	BOOL _enabled;
	BOOL _networkReachable;
	unsigned long long _currentState;
	NSString* _controllerIdentifier;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	IDSService* _idsService;
	NSHashTable* _delegates;
	NSHashTable* _relayAccessories;
	NSMutableArray* _relayStreams;
	NSURLSession* _urlSession;
	HMDNetworkMonitor* _networkMonitor;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                        //@synthesize home=_home - In the implementation block
@property (assign,getter=isSupported,nonatomic) BOOL supported;                            //@synthesize supported=_supported - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * controllerIdentifier;                                //@synthesize controllerIdentifier=_controllerIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                   //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) IDSService * idsService;                                    //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                    //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSHashTable * relayAccessories;                             //@synthesize relayAccessories=_relayAccessories - In the implementation block
@property (nonatomic,readonly) NSMutableArray * relayStreams;                              //@synthesize relayStreams=_relayStreams - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                  //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) HMDNetworkMonitor * networkMonitor;                         //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (assign,getter=isNetworkReachable,nonatomic) BOOL networkReachable;              //@synthesize networkReachable=_networkReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isSupported;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(IDSService *)idsService;
-(NSHashTable *)delegates;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)initWithHome:(id)arg1 ;
-(void)addRelayAccessory:(id)arg1 ;
-(void)removeRelayAccessory:(id)arg1 ;
-(void)addUserToRelayAccessories:(id)arg1 consentTokens:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startAccessories:(id)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)accessory:(id)arg1 didUpdateEnabledState:(BOOL)arg2 ;
-(void)accessoryDidActivate:(id)arg1 ;
-(void)accessoryDidPair:(id)arg1 ;
-(NSString *)controllerIdentifier;
-(NSURLSession *)urlSession;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(void)_updateCurrentState;
-(void)_handleRelayManagerUnsupported;
-(void)_handleRelayManagerEnabling;
-(void)_handleRelayManagerEnabled;
-(void)_handleRelayManagerDisabled;
-(void)_updateControllerIdentifier;
-(BOOL)_enableRelayForAccessory:(id)arg1 ;
-(void)_setupRelayForAccessory:(id)arg1 ;
-(void)_handleAccessoryEnabled:(id)arg1 ;
-(void)requestPairingWithRelayAccessories:(id)arg1 ;
-(void)_disableRelayForAccessory:(id)arg1 ;
-(void)_tearDownRelayForAccessory:(id)arg1 ;
-(void)_handleNotifyingDelegatesOfControllerIdentifierUpdate:(id)arg1 ;
-(void)setControllerIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)relayStreams;
-(NSHashTable *)relayAccessories;
-(void)_requestPairingWithAccessories:(id)arg1 ;
-(void)_requestConsentTokensForAccessoryIdentifiers:(id)arg1 administratorIdentifier:(id)arg2 ;
-(id)_consentTokenForConsentTokenAttributes:(id)arg1 matchedAccessory:(id*)arg2 error:(id*)arg3 ;
-(void)_accessTokensForConsentTokens:(id)arg1 user:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accessTokenForAccessTokenAttributes:(id)arg1 consentTokens:(id)arg2 matchedConsentToken:(id*)arg3 error:(id*)arg4 ;
-(void)_activateAccessory:(id)arg1 ;
-(void)_pairAccessory:(id)arg1 ;
-(id)_relayStreamForAccessory:(id)arg1 ;
-(void)_sendAccessoryReport:(id)arg1 reportIdentifier:(id)arg2 ;
-(HMDNetworkMonitor *)networkMonitor;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(void)__resumeAllStreams;
-(void)__suspendAllStreams;
-(void)_requestUserReportAccessory:(id)arg1 reportIdentifier:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryReportMessage:(id)arg3 controllerID:(id)arg4 accessoryID:(id)arg5 context:(id)arg6 ;
@end

