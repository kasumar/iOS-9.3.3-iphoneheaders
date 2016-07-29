/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSLock, NSString, NSMutableArray, AXAccessQueue;

@interface AXIPCClient : NSObject {

	CFMachPortRef _serverPort;
	NSLock* _serverPortLock;
	unsigned _assignedServerMachPort;
	/*^block*/id _portDeathHandler;
	float _timeout;
	NSString* _clientIdentifier;
	CFRunLoopSourceRef _clientSource;
	unsigned long long _connectionAttempts;
	NSMutableArray* _outstandingAsyncRequests;
	BOOL _connected;
	BOOL shouldRegisterCallbackSourceOnMainRunloop;
	BOOL _usesPerPidLookup;
	unsigned clientCallbackPort;
	int _pid;
	NSString* _serviceName;
	NSMutableArray* _postConnectionTasks;
	AXAccessQueue* _connectionQueue;
	CFRunLoopSourceRef clientCallbackSource;
	AXAccessQueue* _portDeathAccessQueue;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;                           //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL usesPerPidLookup;                                       //@synthesize usesPerPidLookup=_usesPerPidLookup - In the implementation block
@property (assign,nonatomic) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned serviceMachPort; 
@property (nonatomic,copy) id portDeathHandler;                                           //@synthesize portDeathHandler=_portDeathHandler - In the implementation block
@property (nonatomic,retain) AXAccessQueue * portDeathAccessQueue;                        //@synthesize portDeathAccessQueue=_portDeathAccessQueue - In the implementation block
@property (assign,nonatomic) float timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned clientCallbackPort; 
@property (nonatomic,readonly) CFRunLoopSourceRef clientCallbackSource; 
@property (assign,nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop; 
@property (assign,nonatomic) CFMachPortRef serverPort;                                    //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,retain) NSMutableArray * postConnectionTasks;                        //@synthesize postConnectionTasks=_postConnectionTasks - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionQueue;                             //@synthesize connectionQueue=_connectionQueue - In the implementation block
+(void)initialize;
+(id)allClients;
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(void)_commonInit;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(void)_serverDied;
-(void)setTimeout:(float)arg1 ;
-(void)sendSimpleMessage:(id)arg1 ;
-(id)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)sendAsyncMessage:(id)arg1 replyOnQueue:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)sendSimpleMessage:(id)arg1 withError:(id*)arg2 ;
-(void)setPortDeathHandler:(id)arg1 ;
-(void)setShouldRegisterCallbackSourceOnMainRunloop:(BOOL)arg1 ;
-(BOOL)connectWithError:(id*)arg1 ;
-(unsigned)clientCallbackPort;
-(CFRunLoopSourceRef)clientCallbackSource;
-(BOOL)sendAsyncMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(BOOL)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2 ;
-(void)setPostConnectionTasks:(NSMutableArray *)arg1 ;
-(void)setConnectionQueue:(AXAccessQueue *)arg1 ;
-(void)setPortDeathAccessQueue:(AXAccessQueue *)arg1 ;
-(void)_registerWithServer;
-(BOOL)shouldRegisterCallbackSourceOnMainRunloop;
-(BOOL)verifyConnectionExists;
-(BOOL)usesPerPidLookup;
-(BOOL)_handleErrorWithMessage:(id)arg1 machError:(int)arg2 outError:(id*)arg3 ;
-(BOOL)_verifyConnectionWithError:(id*)arg1 ;
-(BOOL)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)_prepareToSendMessage:(id)arg1 withError:(id*)arg2 prepSuccessHandler:(/*^block*/id)arg3 ;
-(id)_createRegistrationWithReplyMachPort:(unsigned)arg1 forAsyncReplyOnQueue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(AXAccessQueue *)portDeathAccessQueue;
-(id)portDeathHandler;
-(NSMutableArray *)postConnectionTasks;
-(void)_attemptToEstablishConnection;
-(unsigned)serviceMachPort;
-(BOOL)disconnectWithError:(id*)arg1 ;
-(void)establishConnectionWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)_descriptionForMachError:(int)arg1 ;
-(CFMachPortRef)serverPort;
-(void)setServerPort:(CFMachPortRef)arg1 ;
-(void)setUsesPerPidLookup:(BOOL)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setConnected:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(float)timeout;
-(AXAccessQueue *)connectionQueue;
-(BOOL)isConnected;
-(void)setServiceName:(NSString *)arg1 ;
@end

