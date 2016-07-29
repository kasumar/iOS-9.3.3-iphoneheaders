/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/SYChangeSerializer.h>
#import <libobjc.A.dylib/SYChangeTrackingWithErrors.h>

@protocol OS_dispatch_queue, SYStoreDelegate, SYSerialization;
@class NSObject, SYService, SYStoreSessionOwner, SYStoreResetSessionOwner, SYAtomicFIFO, SYPersistentStore, NSDictionary, NSString;

@interface SYStore : NSObject <SYServiceDelegate, SYChangeSerializer, SYChangeTrackingWithErrors> {

	NSObject*<OS_dispatch_queue> _qosTargetQueue;
	struct {
		unsigned delegateWillUpdate : 1;
		unsigned delegateWillUpdateWithCount : 1;
		unsigned delegateDidUpdate : 1;
		unsigned delegateDidCompleteFullSync : 1;
		unsigned delegateAllObjectsDeleted : 1;
		unsigned delegateAllObjects : 1;
		unsigned delegateShouldPerformInitialSync : 1;
		unsigned delegateBeginSyncingAllObjects : 1;
		unsigned delegateShouldDeleteOnFailedSync : 1;
		unsigned delegateErrorInFullSync : 1;
		unsigned delegateStoreEncounteredError : 1;
		unsigned delegateDidPair : 1;
		unsigned delegateDidUnpair : 1;
		unsigned delegateSentMessage : 1;
		unsigned delegatePeerProcessedMessage : 1;
		unsigned delegateSentLastSyncMessage : 1;
	}  _flags;
	BOOL _allowsDeletes;
	id<SYStoreDelegate> _delegate;
	id<SYSerialization> _serializer;
	long long _maxBytesInFlight;
	SYService* _syService;
	SYStoreSessionOwner* _sessionOwner;
	SYStoreResetSessionOwner* _pendingResetSessionOwner;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	SYAtomicFIFO* _sessionQueue;
	SYPersistentStore* _persistentStore;

}

@property (nonatomic,readonly) BOOL inDeltaSync; 
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic,__weak) id<SYStoreDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double timeToLive; 
@property (nonatomic,retain) id<SYSerialization> serializer;                                   //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic) long long maxBytesInFlight;                                       //@synthesize maxBytesInFlight=_maxBytesInFlight - In the implementation block
@property (nonatomic,copy) NSDictionary * customIDSDeliveryOptions; 
@property (assign,nonatomic) BOOL allowsDeletes;                                               //@synthesize allowsDeletes=_allowsDeletes - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) unsigned deliveryQOS; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL hasCompletedFullSync; 
@property (nonatomic,readonly) SYService * syService;                                          //@synthesize syService=_syService - In the implementation block
@property (nonatomic,retain) SYStoreSessionOwner * sessionOwner;                               //@synthesize sessionOwner=_sessionOwner - In the implementation block
@property (nonatomic,retain) SYStoreResetSessionOwner * pendingResetSessionOwner;              //@synthesize pendingResetSessionOwner=_pendingResetSessionOwner - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) SYAtomicFIFO * sessionQueue;                                    //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,readonly) SYPersistentStore * persistentStore;                            //@synthesize persistentStore=_persistentStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)inDeltaSync;
-(void)willBeginDeltaSync;
-(void)didEndDeltaSync;
-(SYPersistentStore *)persistentStore;
-(void)setDelegate:(id<SYStoreDelegate>)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id<SYStoreDelegate>)delegate;
-(long long)state;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(double)timeToLive;
-(void)setTimeToLive:(double)arg1 ;
-(void)transaction:(/*^block*/id)arg1 ;
-(BOOL)resume:(id*)arg1 ;
-(void)updateObject:(id)arg1 ;
-(id<SYSerialization>)serializer;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5 ;
-(id)encodeSYObject:(id)arg1 ;
-(id)decodeSYObject:(id)arg1 ;
-(id)dataFromChange:(id)arg1 ;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2 ;
-(unsigned)deliveryQOS;
-(void)_signalNextQueuedSession;
-(void)_enqueueDeltaSessionWithChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(/*^block*/id)arg5 ;
-(BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(BOOL)allowsDeletes;
-(BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)_transaction:(/*^block*/id)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(/*^block*/id)arg5 ;
-(void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2 ;
-(void)setSerializer:(id<SYSerialization>)arg1 ;
-(void)_startIncomingSession:(id)arg1 ;
-(BOOL)_startResetSyncSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2 ;
-(BOOL)addObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2 ;
-(void)addObject:(id)arg1 context:(id)arg2 ;
-(void)updateObject:(id)arg1 context:(id)arg2 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 ;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5 ;
-(id)initWithServiceName:(id)arg1 priority:(long long)arg2 isMasterStore:(BOOL)arg3 ;
-(NSDictionary *)customIDSDeliveryOptions;
-(void)setCustomIDSDeliveryOptions:(NSDictionary *)arg1 ;
-(void)setDeliveryQOS:(unsigned)arg1 ;
-(BOOL)hasCompletedFullSync;
-(void)transaction:(/*^block*/id)arg1 handlingError:(/*^block*/id)arg2 ;
-(void)transaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transaction:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)transaction:(/*^block*/id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)blockingTransaction:(/*^block*/id)arg1 ;
-(void)blockingTransaction:(/*^block*/id)arg1 handlingError:(/*^block*/id)arg2 ;
-(void)transaction:(/*^block*/id)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 ;
-(void)setNeedsFullSync;
-(void)service:(id)arg1 incomingData:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 identifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(long long)maxBytesInFlight;
-(void)setMaxBytesInFlight:(long long)arg1 ;
-(void)setAllowsDeletes:(BOOL)arg1 ;
-(SYService *)syService;
-(SYStoreSessionOwner *)sessionOwner;
-(void)setSessionOwner:(SYStoreSessionOwner *)arg1 ;
-(SYStoreResetSessionOwner *)pendingResetSessionOwner;
-(void)setPendingResetSessionOwner:(SYStoreResetSessionOwner *)arg1 ;
-(SYAtomicFIFO *)sessionQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithService:(id)arg1 ;
-(BOOL)isPaired;
-(void)deleteObject:(id)arg1 ;
@end

