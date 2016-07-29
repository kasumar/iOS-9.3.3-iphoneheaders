/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDDebug, CDDXPCConnection;

@interface CDDPluginConnection : NSObject {

	CDDebug* _debug;
	unsigned long long _clientId;
	CDDXPCConnection* _connection;

}

@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(CDDXPCConnection *)connection;
-(id)messageWithError:(id*)arg1 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)registerForSignoffWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(CDDebug *)debug;
-(unsigned long long)clientId;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
@end

