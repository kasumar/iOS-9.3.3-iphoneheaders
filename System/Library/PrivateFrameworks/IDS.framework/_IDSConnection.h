/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSAccountDelegate.h>

@class NSMapTable, IDSAccount, NSSet, NSString, NSMutableDictionary;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate> {

	id _messageContext;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	IDSAccount* _account;
	NSSet* _commands;
	NSString* _serviceToken;
	NSMutableDictionary* _pendingSends;
	unsigned _delegateCapabilities;
	BOOL _indirectDelegateCallouts;

}

@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) IDSAccount * account; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isActive;
-(void)_connect;
-(void)daemonConnected;
-(void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7 ;
-(void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8 ;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7 ;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6 ;
-(void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6 ;
-(void)_setTemporaryMessageContext:(id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 delegateContext:(id)arg4 ;
-(id)daemonListener;
-(id)daemonController;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(id)_activeDevice;
-(void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2 ;
-(id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4 ;
-(void)_resendPendingSends;
-(void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2 ;
-(BOOL)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 validateAliases:(BOOL)arg5 ;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(void)account:(id)arg1 devicesChanged:(id)arg2 ;
-(void)account:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)account:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)setDelegateCapabilities:(unsigned)arg1 ;
-(BOOL)sendServerMessage:(id)arg1 command:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(IDSAccount *)account;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
@end

