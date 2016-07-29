/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallCapabilitiesXPCClient.h>

@protocol TUCallCapabilitiesXPCClient <NSObject>
@required
-(void)capabilityStateUpdated:(id)arg1;

@end

#import <libobjc.A.dylib/TUCallCapabilitiesXPCServerActions.h>

@protocol OS_dispatch_queue, TUCallCapabilitiesXPCServer, OS_dispatch_semaphore;
@class TUCallCapabilitiesState, NSObject, NSXPCConnection, NSString;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {

	int _token;
	TUCallCapabilitiesState* _state;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	id<TUCallCapabilitiesXPCServer> _server;
	NSObject*<OS_dispatch_semaphore> _stateSemaphore;

}

@property (nonatomic,retain) TUCallCapabilitiesState * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int token;                                                    //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) id<TUCallCapabilitiesXPCServer> server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> stateSemaphore;              //@synthesize stateSemaphore=_stateSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(TUCallCapabilitiesState *)state;
-(void)setState:(TUCallCapabilitiesState *)arg1 ;
-(id<TUCallCapabilitiesXPCServer>)server;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(void)setToken:(int)arg1 ;
-(void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(void)setVoLTECallingEnabled:(BOOL)arg1 ;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 ;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
-(void)requestPinFromPrimaryDevice;
-(void)cancelPinRequestFromPrimaryDevice;
-(id)initWithServer:(id)arg1 ;
-(void)capabilityStateUpdated:(id)arg1 ;
-(void)setStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_retrieveStateForInitialUpdate:(BOOL)arg1 ;
-(void)invalidateXPCConnection;
-(NSObject*<OS_dispatch_semaphore>)stateSemaphore;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_updateState:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRelayCallingEnabled:(BOOL)arg1 ;
-(void)setServer:(id<TUCallCapabilitiesXPCServer>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

