/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitCore/WLSocketHandler.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, WLDeviceDiscoverySocketHandlerDelegate;
@class NSString, NSObject, WLSourceDevice;

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler <NSXMLParserDelegate> {

	NSString* _srpPassword;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _writeQueue;
	unsigned long long _state;
	WLSourceDevice* _sourceDevice;
	BOOL _handshakeDataSent;
	int _sockfd;
	id<WLDeviceDiscoverySocketHandlerDelegate> _delegate;

}

@property (nonatomic,readonly) int sockfd;                                                            //@synthesize sockfd=_sockfd - In the implementation block
@property (assign,nonatomic,__weak) id<WLDeviceDiscoverySocketHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WLDeviceDiscoverySocketHandlerDelegate>)arg1 ;
-(id<WLDeviceDiscoverySocketHandlerDelegate>)delegate;
-(void)suspend;
-(void)resume;
-(void)close;
-(void)invalidateWithError:(id)arg1 ;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_observeDataReadEvent;
-(void)handleDataReadEventWithSocket:(int)arg1 ;
-(id)_commandStringWithData:(id)arg1 ;
-(id)_okResponseData;
-(void)handleReceivedData:(id)arg1 ;
-(void)_performSRPAuthenticationAndHandshake;
-(BOOL)_generateSourceDeviceFromHandshakeData:(id)arg1 ;
-(id)_handshakeResponseData;
-(void)_handleHandshakeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3 ;
-(id)_handshakeCommandData;
-(int)sockfd;
@end

