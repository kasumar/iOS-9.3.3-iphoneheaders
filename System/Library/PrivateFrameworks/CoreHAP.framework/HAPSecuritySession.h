/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPSecuritySessionDelegate, OS_dispatch_queue;
#import <CoreHAP/CoreHAP-Structs.h>
@class NSObject, NSData, NSMutableData;

@interface HAPSecuritySession : NSObject {

	id<HAPSecuritySessionDelegate> _delegate;
	unsigned long long _role;
	unsigned long long _resumeSessionID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _state;
	PairingSessionPrivateRef _pairingSession;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (__weak,readonly) id<HAPSecuritySessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                               //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long resumeSessionID;                    //@synthesize resumeSessionID=_resumeSessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) PairingSessionPrivateRef pairingSession;                 //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) NSData * inputKey;                                       //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;                              //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                                      //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;                             //@synthesize outputNonce=_outputNonce - In the implementation block
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id<HAPSecuritySessionDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)close;
-(void)_invalidate;
-(void)open;
-(unsigned long long)role;
-(BOOL)_initializeSetupSession:(unsigned long long)arg1 ;
-(void)setInputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(void)setResumeSessionID:(unsigned long long)arg1 ;
-(PairingSessionPrivateRef)pairingSession;
-(void)_notifyOpening;
-(void)_processSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(void)_handleSetupExchangeComplete;
-(id)_inputInfo;
-(id)_outputInfo;
-(void)_notifyOpened;
-(void)_initiateClientSessionSetupExchange;
-(NSData *)outputKey;
-(NSMutableData *)outputNonce;
-(NSData *)inputKey;
-(NSMutableData *)inputNonce;
-(id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1 ;
-(id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2 ;
-(void)receivedSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)resumeSessionID;
-(void)setPairingSession:(PairingSessionPrivateRef)arg1 ;
-(void)closeWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
@end
