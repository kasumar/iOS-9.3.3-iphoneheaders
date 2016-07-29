/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <libobjc.A.dylib/CATHTTPMessageParserDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol CATRemoteConnectionDelegate;
@class CATHTTPMessageParser, NSMutableArray, NSTimer, NSError, NSMutableData, NSArray, NSString, CATRemoteConnectionSocketOptions, NSInputStream, NSOutputStream;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {

	CATHTTPMessageParser* mMessageParser;
	long long mState;
	NSMutableArray* mPendingSendDataContexts;
	NSTimer* mConnectionTimeoutTimer;
	NSError* mInterruptionError;
	NSMutableData* mReadBuffer;
	NSArray* mTrustedCertificates;
	long long mPeerTrustState;
	BOOL _usesSSL;
	id<CATRemoteConnectionDelegate> _delegate;
	NSString* _name;
	double _connectionTimeoutInterval;
	CATRemoteConnectionSocketOptions* _socketOptions;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (assign,nonatomic,__weak) id<CATRemoteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL usesSSL;                                                 //@synthesize usesSSL=_usesSSL - In the implementation block
@property (nonatomic,readonly) SecTrustRef peerTrust; 
@property (assign,nonatomic) double connectionTimeoutInterval;                             //@synthesize connectionTimeoutInterval=_connectionTimeoutInterval - In the implementation block
@property (nonatomic,copy) CATRemoteConnectionSocketOptions * socketOptions;               //@synthesize socketOptions=_socketOptions - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                  //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                                //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<CATRemoteConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<CATRemoteConnectionDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(NSOutputStream *)outputStream;
-(CATRemoteConnectionSocketOptions *)socketOptions;
-(BOOL)usesSSL;
-(void)setUsesSSL:(BOOL)arg1 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)connectionShouldSendData;
-(BOOL)secureUsingIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3 ;
-(void)delegateDidSecureUsingClientIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)delegateDidFailToSecureUsingClientIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)delegateDidSecureUsingServerIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)delegateDidFailToSecureUsingServerIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)connectionDidInterruptWithError:(id)arg1 ;
-(double)connectionTimeoutInterval;
-(void)connectionTimedOut;
-(void)sendDataDidFail:(id)arg1 withError:(id)arg2 ;
-(void)delegateDidClose;
-(BOOL)evaluatePeerTrust:(SecTrustRef)arg1 ;
-(BOOL)trySendingData:(id)arg1 error:(id*)arg2 ;
-(void)sendDataDidSucceed:(id)arg1 ;
-(void)delegateDidSendData:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(void)delegateDidReceiveData:(id)arg1 ;
-(void)configureStreamSocketOptions;
-(void)delegateDidOpen;
-(void)tryEvaluatingPeerTrustWithStream:(id)arg1 ;
-(void)connectionDidReceiveData;
-(void)messageParser:(id)arg1 didParseData:(id)arg2 ;
-(SecTrustRef)peerTrust;
-(void)sendData:(id)arg1 userInfo:(id)arg2 ;
-(void)secureUsingClientIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)secureUsingServerIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)setConnectionTimeoutInterval:(double)arg1 ;
-(void)setSocketOptions:(CATRemoteConnectionSocketOptions *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(NSInputStream *)inputStream;
@end

