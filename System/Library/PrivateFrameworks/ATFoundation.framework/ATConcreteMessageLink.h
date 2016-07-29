/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATMessageLink.h>
#import <ATFoundation/ATSocketDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class ATSocket, ATMessageParser, NSMapTable, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject, NSString, ATSignatureProvider;

@interface ATConcreteMessageLink : ATMessageLink <ATSocketDelegate> {

	ATSocket* _socket;
	ATMessageParser* _parser;
	NSMapTable* _outputStreamsToInputStreams;
	NSMutableDictionary* _sentRequestsByID;
	NSMutableDictionary* _receivedRequestsByID;
	NSMutableDictionary* _receivedResponsesByID;
	NSMutableDictionary* _completionHandlersByRequestID;
	NSMutableDictionary* _completionHandlersByResponseID;
	NSMutableDictionary* _requestWritersByID;
	NSMutableDictionary* _responseWritersByID;
	NSMutableSet* _streamReaders;
	NSMutableSet* _streamWriters;
	NSMutableDictionary* _requestHandlersByDataClass;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_source> _requestTimeoutTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _handlerAccessQueue;
	NSString* _identifier;
	BOOL _initialized;
	BOOL _open;
	int _endpointType;
	long long _idleTimeoutExceptionCount;
	long long _keepAliveExceptionCount;
	ATSignatureProvider* _signatureProvider;
	unsigned _nextMessageID;
	double _lastActivityTime;
	NSString* _guid;

}

@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int endpointType;                                     //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double lastActivityTime;                              //@synthesize lastActivityTime=_lastActivityTime - In the implementation block
@property (nonatomic,readonly) ATSocket * socket;                                  //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) ATSignatureProvider * signatureProvider;              //@synthesize signatureProvider=_signatureProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)close;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(BOOL)open;
-(NSString *)guid;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(BOOL)isInitialized;
-(ATSocket *)socket;
-(id)initWithSocket:(id)arg1 ;
-(void)_processIncomingMessage:(id)arg1 ;
-(unsigned)_nextRequestID;
-(void)_prepareStreamReaderForMessage:(id)arg1 ;
-(BOOL)_sendMessage:(id)arg1 error:(id*)arg2 ;
-(void)_invokeCompletionHandlerForResponseID:(unsigned long long)arg1 withError:(id)arg2 ;
-(void)_processIncomingRequest:(id)arg1 ;
-(void)_processIncomingDataRequest:(id)arg1 ;
-(void)_processIncomingResponse:(id)arg1 ;
-(void)_processIncomingPartialResponse:(id)arg1 ;
-(void)_processIncomingDataResponse:(id)arg1 ;
-(void)sendPartialResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(ATSignatureProvider *)signatureProvider;
-(int)endpointType;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSignatureProvider:(ATSignatureProvider *)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3 ;
-(void)socketDidClose:(id)arg1 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)addKeepAliveException;
-(void)removeKeepAliveException;
-(void)addTimeoutException;
-(void)removeTimeoutException;
-(void)setEndpointType:(int)arg1 ;
-(void)setLastActivityTime:(double)arg1 ;
-(BOOL)idleTimeoutEnabled;
-(double)lastActivityTime;
-(void)_checkMessageTimeouts;
-(BOOL)isOpen;
@end

