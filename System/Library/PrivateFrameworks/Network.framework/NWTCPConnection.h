/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_tcp_connection;
@class NWEndpoint, NWParameters, NSObject, NSArray, NWPath, NSData, NSError, NSString;

@interface NWTCPConnection : NSObject <NWPrettyDescription> {

	BOOL _viable;
	BOOL _hasBetterPath;
	BOOL _trustInvalidCerts;
	long long _state;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_tcp_connection> _internalConnection;
	id _delegate;
	NSArray* _certificateChain;
	SSLCertificate* _coreTLSCertificateChain;
	_SecKey* _privateKey;
	tls_private_keyRef _coreTLSPrivateKey;

}

@property (assign) long long state;                                              //@synthesize state=_state - In the implementation block
@property (getter=isViable) BOOL viable;                                         //@synthesize viable=_viable - In the implementation block
@property (assign) BOOL hasBetterPath;                                           //@synthesize hasBetterPath=_hasBetterPath - In the implementation block
@property (retain) NWEndpoint * endpoint;                                        //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWPath * connectedPath; 
@property (readonly) NWEndpoint * localAddress; 
@property (readonly) NWEndpoint * remoteAddress; 
@property (readonly) NSData * txtRecord; 
@property (readonly) NSError * error; 
@property (readonly) NWParameters * parameters;                                  //@synthesize parameters=_parameters - In the implementation block
@property (copy,readonly) NSString * privateDescription; 
@property (readonly) BOOL TFOSucceeded; 
@property (retain) NSObject*<OS_tcp_connection> internalConnection;              //@synthesize internalConnection=_internalConnection - In the implementation block
@property (__weak) id delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL trustInvalidCerts;                                       //@synthesize trustInvalidCerts=_trustInvalidCerts - In the implementation block
@property (retain) NSArray * certificateChain;                                   //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign) SSLCertificate* coreTLSCertificateChain;                      //@synthesize coreTLSCertificateChain=_coreTLSCertificateChain - In the implementation block
@property (assign) _SecKey* privateKey;                                          //@synthesize privateKey=_privateKey - In the implementation block
@property (assign) tls_private_keyRef coreTLSPrivateKey;                         //@synthesize coreTLSPrivateKey=_coreTLSPrivateKey - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)stringFromNWTCPConnectionState:(long long)arg1 ;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(NSString *)privateDescription;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NSArray *)certificateChain;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setupEventHandler;
-(BOOL)hasBetterPath;
-(BOOL)isViable;
-(void)setViable:(BOOL)arg1 ;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 timeout:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)trustInvalidCerts;
-(void)handlePeerCertificateTrustEvaluationWithHandshake:(tls_handshake_sRef)arg1 resumptionHandler:(/*^block*/id)arg2 ;
-(void)setCoreTLSPrivateKey:(tls_private_keyRef)arg1 ;
-(NWPath *)connectedPath;
-(void)setInternalConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(BOOL)fillOutTCPConnectionInfo:(tcp_connection_info*)arg1 ;
-(int)setRequiredPropertiesOnHandshake:(tls_handshake_sRef)arg1 fromTrust:(SecTrustRef)arg2 ;
-(void)setHasBetterPath:(BOOL)arg1 ;
-(SecTrustRef)createTrustEvaluationFromCertificateChain:(id)arg1 peerHostname:(id)arg2 ;
-(NSObject*<OS_tcp_connection>)internalConnection;
-(void)cleanupPreviousTLSIdentity;
-(NSData *)txtRecord;
-(void)writeClose;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)startInternal;
-(BOOL)TFOSucceeded;
-(void)handleIdentityRequestWithHandshake:(tls_handshake_sRef)arg1 resumptionHandler:(/*^block*/id)arg2 ;
-(tls_private_keyRef)coreTLSPrivateKey;
-(id)initWithAcceptedInternalConnection:(id)arg1 ;
-(void)setTrustInvalidCerts:(BOOL)arg1 ;
-(void)write:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readLength:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)setRequiredPropertiesOnHandshake:(tls_handshake_sRef)arg1 fromIdentity:(SecIdentityRef)arg2 certificateChain:(id)arg3 ;
-(SSLCertificate*)coreTLSCertificateChain;
-(void)readToPattern:(id)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithUpgradeForConnection:(id)arg1 ;
-(void)setCoreTLSCertificateChain:(SSLCertificate*)arg1 ;
-(void)handlePrepareTLSHandshake:(tls_handshake_sRef)arg1 TLSRecord:(tls_record_sRef)arg2 ;
-(NSError *)error;
-(NWEndpoint *)remoteAddress;
-(NWEndpoint *)localAddress;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(_SecKey*)privateKey;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(void)setPrivateKey:(_SecKey*)arg1 ;
@end

