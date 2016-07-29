/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKGizmoClientProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSDate, NSArray, NSMutableDictionary, NSTimer, NSMutableArray, NSString;

@interface NPKLibrary : NSObject <NPKGizmoClientProtocol> {

	NSObject*<OS_dispatch_semaphore> _connectionSemaphore;
	NSXPCConnection* _xpcConnection;
	NSDate* _dateOfLastInvalidation;
	int _invalidationOccurrences;
	BOOL _disabled;
	BOOL _noPassesInDaemon;
	int _updatePassDescriptionsFailureCount;
	BOOL _needsRelevancyInformation;
	BOOL _updatingPassDescriptions;
	BOOL _needsUpdatePassDescriptions;
	BOOL _initialLoadComplete;
	BOOL _serverHasPasses;
	BOOL _serverHasPotentiallyRelevantPasses;
	BOOL _disableCaching;
	NSArray* _passDescriptions;
	NSMutableDictionary* _preferredPaymentApplicationsCache;
	NSMutableDictionary* _passCache;
	NSObject*<OS_dispatch_queue> _passesQueue;
	NSArray* _lastSeenRelevantPassTuples;
	NSTimer* _passLibraryChangedCoalescingTimer;
	NSMutableArray* _workToPerformAfterInitialLoad;

}

@property (assign,nonatomic) BOOL needsRelevancyInformation;                                       //@synthesize needsRelevancyInformation=_needsRelevancyInformation - In the implementation block
@property (nonatomic,readonly) NSArray * relevantPassTuples; 
@property (nonatomic,retain) NSArray * passDescriptions;                                           //@synthesize passDescriptions=_passDescriptions - In the implementation block
@property (nonatomic,readonly) NSArray * paymentPassDescriptions; 
@property (nonatomic,readonly) NSArray * nonPaymentPassDescriptions; 
@property (nonatomic,readonly) NSArray * nfcPassDescriptions; 
@property (readonly) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) NSMutableDictionary * preferredPaymentApplicationsCache;              //@synthesize preferredPaymentApplicationsCache=_preferredPaymentApplicationsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passCache;                                      //@synthesize passCache=_passCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> passesQueue;                             //@synthesize passesQueue=_passesQueue - In the implementation block
@property (nonatomic,retain) NSArray * lastSeenRelevantPassTuples;                                 //@synthesize lastSeenRelevantPassTuples=_lastSeenRelevantPassTuples - In the implementation block
@property (assign,nonatomic) BOOL updatingPassDescriptions;                                        //@synthesize updatingPassDescriptions=_updatingPassDescriptions - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatePassDescriptions;                                     //@synthesize needsUpdatePassDescriptions=_needsUpdatePassDescriptions - In the implementation block
@property (nonatomic,retain) NSTimer * passLibraryChangedCoalescingTimer;                          //@synthesize passLibraryChangedCoalescingTimer=_passLibraryChangedCoalescingTimer - In the implementation block
@property (assign,nonatomic) BOOL initialLoadComplete;                                             //@synthesize initialLoadComplete=_initialLoadComplete - In the implementation block
@property (nonatomic,retain) NSMutableArray * workToPerformAfterInitialLoad;                       //@synthesize workToPerformAfterInitialLoad=_workToPerformAfterInitialLoad - In the implementation block
@property (assign) BOOL serverHasPasses;                                                           //@synthesize serverHasPasses=_serverHasPasses - In the implementation block
@property (assign) BOOL serverHasPotentiallyRelevantPasses;                                        //@synthesize serverHasPotentiallyRelevantPasses=_serverHasPotentiallyRelevantPasses - In the implementation block
@property (assign,nonatomic) BOOL disableCaching;                                                  //@synthesize disableCaching=_disableCaching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)setDisableCaching:(BOOL)arg1 ;
-(BOOL)disableCaching;
-(NSXPCConnection *)xpcConnection;
-(void)setPassesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handlePassLibraryChangedNotification:(id)arg1 ;
-(void)handleRelevantPassTuplesChangedNotification:(id)arg1 ;
-(void)handleRelevancyPotentialChangedNotification:(id)arg1 ;
-(void)handleRelevancyCheckCompletedNotification:(id)arg1 ;
-(void)_updatePassDescriptions;
-(void)_updateRelevantPassIDs;
-(NSTimer *)passLibraryChangedCoalescingTimer;
-(NSObject*<OS_dispatch_queue>)passesQueue;
-(id)_descriptionsWithFilter:(/*^block*/id)arg1 ;
-(NSArray *)paymentPassDescriptions;
-(NSMutableDictionary *)passCache;
-(void)getPassWithID:(id)arg1 reply:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)serverHasPasses;
-(void)performWorkAfterFirstLibraryLoad:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)preferredPaymentApplicationsCache;
-(void)setPreferredPaymentApplicationsCache:(NSMutableDictionary *)arg1 ;
-(NSArray *)passDescriptions;
-(void)getSecureElementIdentifier:(/*^block*/id)arg1 ;
-(void)addPassData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleValueAddedServiceTransactions:(id)arg1 forPassUniqueIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPassLibraryChangedCoalescingTimer:(NSTimer *)arg1 ;
-(void)setServerHasPasses:(BOOL)arg1 ;
-(void)setServerHasPotentiallyRelevantPasses:(BOOL)arg1 ;
-(BOOL)updatingPassDescriptions;
-(void)setNeedsUpdatePassDescriptions:(BOOL)arg1 ;
-(void)setUpdatingPassDescriptions:(BOOL)arg1 ;
-(void)setPassDescriptions:(NSArray *)arg1 ;
-(void)setPassCache:(NSMutableDictionary *)arg1 ;
-(BOOL)needsUpdatePassDescriptions;
-(BOOL)initialLoadComplete;
-(void)setInitialLoadComplete:(BOOL)arg1 ;
-(NSMutableArray *)workToPerformAfterInitialLoad;
-(void)setWorkToPerformAfterInitialLoad:(NSMutableArray *)arg1 ;
-(BOOL)serverHasPotentiallyRelevantPasses;
-(void)handleRelevantPassTuplesChanged:(id)arg1 ;
-(void)setNeedsRelevancyInformation:(BOOL)arg1 ;
-(void)_tearDownConnectionBecauseOfInvalidation;
-(void)setLastSeenRelevantPassTuples:(NSArray *)arg1 ;
-(NSArray *)lastSeenRelevantPassTuples;
-(NSArray *)relevantPassTuples;
-(NSArray *)nonPaymentPassDescriptions;
-(NSArray *)nfcPassDescriptions;
-(id)cachedPassWithID:(id)arg1 ;
-(void)getPassWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getDiffForPassWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deletePassWithID:(id)arg1 ;
-(void)getDeviceHasAnyPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)preferredPaymentApplicationForPaymentPass:(id)arg1 ;
-(void)addPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)boostDaemonUntilPassDBAvailable:(/*^block*/id)arg1 ;
-(BOOL)needsRelevancyInformation;
-(void)markAsHavingReceivedLocation;
@end

