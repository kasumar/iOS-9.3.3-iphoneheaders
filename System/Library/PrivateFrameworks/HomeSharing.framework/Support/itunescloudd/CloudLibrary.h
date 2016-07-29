/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSString, CloudLibraryConnection, HSConnectionConfiguration, CloudPendingChangesCoordinator, NSObject, SSAuthenticateRequest, SSURLBag;

@interface CloudLibrary : NSObject <SSAuthenticateRequestDelegate> {

	BOOL _failedToConnect;
	BOOL _loginRequestInFlight;
	NSString* _libraryIdentifier;
	CloudLibraryConnection* _underlyingConnection;
	HSConnectionConfiguration* _configuration;
	CloudPendingChangesCoordinator* _pendingChangesCoordinator;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_group> _connectionGroup;
	NSObject*<OS_dispatch_queue> _asynchronousRequestsAccessQueue;
	/*^block*/id _connectionCompletionHandler;
	SSAuthenticateRequest* _connectionAuthenticationRequest;
	SSURLBag* _storeURLBag;

}

@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                                       //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,retain) CloudLibraryConnection * underlyingConnection;                             //@synthesize underlyingConnection=_underlyingConnection - In the implementation block
@property (nonatomic,readonly) HSConnectionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CloudPendingChangesCoordinator * pendingChangesCoordinator;              //@synthesize pendingChangesCoordinator=_pendingChangesCoordinator - In the implementation block
@property (assign,nonatomic) BOOL failedToConnect;                                                      //@synthesize failedToConnect=_failedToConnect - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> connectionGroup;                              //@synthesize connectionGroup=_connectionGroup - In the implementation block
@property (assign,nonatomic) BOOL loginRequestInFlight;                                                 //@synthesize loginRequestInFlight=_loginRequestInFlight - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> asynchronousRequestsAccessQueue;              //@synthesize asynchronousRequestsAccessQueue=_asynchronousRequestsAccessQueue - In the implementation block
@property (nonatomic,copy) id connectionCompletionHandler;                                              //@synthesize connectionCompletionHandler=_connectionCompletionHandler - In the implementation block
@property (nonatomic,retain) SSAuthenticateRequest * connectionAuthenticationRequest;                   //@synthesize connectionAuthenticationRequest=_connectionAuthenticationRequest - In the implementation block
@property (nonatomic,retain) SSURLBag * storeURLBag;                                                    //@synthesize storeURLBag=_storeURLBag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(id)_bagKey;
-(void)setConnectionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setAsynchronousRequestsAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SSAuthenticateRequest *)connectionAuthenticationRequest;
-(void)_enqueueFailedOperation:(id)arg1 ;
-(void)_enqueuePendingOperation:(id)arg1 ;
-(void)_ensureConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)_continueConnectingToLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnectionAuthenticationRequest:(SSAuthenticateRequest *)arg1 ;
-(CloudPendingChangesCoordinator *)pendingChangesCoordinator;
-(BOOL)loginRequestInFlight;
-(NSObject*<OS_dispatch_group>)connectionGroup;
-(void)setLoginRequestInFlight:(BOOL)arg1 ;
-(void)setUnderlyingConnection:(CloudLibraryConnection *)arg1 ;
-(void)setFailedToConnect:(BOOL)arg1 ;
-(void)_performPendingOperations;
-(void)_connectToLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_connectToLibraryWithCompletionHandler:(/*^block*/id)arg1 allowRetry:(BOOL)arg2 ;
-(SSURLBag *)storeURLBag;
-(void)setStoreURLBag:(SSURLBag *)arg1 ;
-(BOOL)_isEnabledWithURLBag:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)asynchronousRequestsAccessQueue;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cancelAllOperations;
-(HSConnectionConfiguration *)configuration;
-(id)_account;
-(NSString *)libraryIdentifier;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(CloudLibraryConnection *)underlyingConnection;
-(void)setConnectionCompletionHandler:(id)arg1 ;
-(id)connectionCompletionHandler;
-(BOOL)failedToConnect;
@end

