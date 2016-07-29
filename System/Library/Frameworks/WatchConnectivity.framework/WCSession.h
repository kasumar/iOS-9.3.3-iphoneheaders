/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WCXPCManagerDelegate.h>

@protocol WCSessionDelegate;
@class NSURL, NSDictionary, NSOperationQueue, NSMutableDictionary, NSMutableSet, WCSessionUserInfoTransfer, WCQueueManager, NSString, NSMutableArray, NSArray;

@interface WCSession : NSObject <WCXPCManagerDelegate> {

	BOOL _paired;
	BOOL _watchAppInstalled;
	BOOL _complicationEnabled;
	BOOL _reachable;
	BOOL _iOSDeviceNeedsUnlockAfterRebootForReachability;
	BOOL _hasCompletedInitialActivation;
	BOOL _delegateSupportsAsyncActivate;
	BOOL _delegateSupportsActiveDeviceSwitch;
	id<WCSessionDelegate> _delegate;
	long long _activationState;
	NSURL* _watchDirectoryURL;
	NSDictionary* _applicationContext;
	NSDictionary* _receivedApplicationContext;
	NSOperationQueue* _delegateOperationQueue;
	NSOperationQueue* _backgroundWorkOperationQueue;
	NSOperationQueue* _workOperationQueue;
	NSMutableDictionary* _currentMessages;
	NSMutableSet* _currentMessageIdentifiersAwaitingReply;
	NSMutableDictionary* _internalOutstandingUserInfoTransfers;
	NSMutableDictionary* _internalOutstandingFileTransfers;
	WCSessionUserInfoTransfer* _currentComplicationUserInfoTransfer;
	WCQueueManager* _queueManager;
	NSString* _pairingID;
	NSMutableArray* _switchTasksQueue;

}

@property (assign,nonatomic,__weak) id<WCSessionDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long activationState;                                               //@synthesize activationState=_activationState - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                                             //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isWatchAppInstalled,nonatomic) BOOL watchAppInstalled;                       //@synthesize watchAppInstalled=_watchAppInstalled - In the implementation block
@property (assign,getter=isComplicationEnabled,nonatomic) BOOL complicationEnabled;                   //@synthesize complicationEnabled=_complicationEnabled - In the implementation block
@property (nonatomic,retain) NSURL * watchDirectoryURL;                                               //@synthesize watchDirectoryURL=_watchDirectoryURL - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                       //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability;                     //@synthesize iOSDeviceNeedsUnlockAfterRebootForReachability=_iOSDeviceNeedsUnlockAfterRebootForReachability - In the implementation block
@property (nonatomic,copy) NSDictionary * applicationContext;                                         //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,copy) NSDictionary * receivedApplicationContext;                                 //@synthesize receivedApplicationContext=_receivedApplicationContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outstandingUserInfoTransfers; 
@property (nonatomic,copy,readonly) NSArray * outstandingFileTransfers; 
@property (readonly) NSOperationQueue * delegateOperationQueue;                                       //@synthesize delegateOperationQueue=_delegateOperationQueue - In the implementation block
@property (readonly) NSOperationQueue * backgroundWorkOperationQueue;                                 //@synthesize backgroundWorkOperationQueue=_backgroundWorkOperationQueue - In the implementation block
@property (readonly) NSOperationQueue * workOperationQueue;                                           //@synthesize workOperationQueue=_workOperationQueue - In the implementation block
@property (readonly) NSMutableDictionary * currentMessages;                                           //@synthesize currentMessages=_currentMessages - In the implementation block
@property (retain) NSMutableSet * currentMessageIdentifiersAwaitingReply;                             //@synthesize currentMessageIdentifiersAwaitingReply=_currentMessageIdentifiersAwaitingReply - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * internalOutstandingUserInfoTransfers;              //@synthesize internalOutstandingUserInfoTransfers=_internalOutstandingUserInfoTransfers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * internalOutstandingFileTransfers;                  //@synthesize internalOutstandingFileTransfers=_internalOutstandingFileTransfers - In the implementation block
@property (retain) WCSessionUserInfoTransfer * currentComplicationUserInfoTransfer;                   //@synthesize currentComplicationUserInfoTransfer=_currentComplicationUserInfoTransfer - In the implementation block
@property (retain) WCQueueManager * queueManager;                                                     //@synthesize queueManager=_queueManager - In the implementation block
@property (nonatomic,copy) NSString * pairingID;                                                      //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedInitialActivation;                                      //@synthesize hasCompletedInitialActivation=_hasCompletedInitialActivation - In the implementation block
@property (assign,nonatomic) BOOL delegateSupportsAsyncActivate;                                      //@synthesize delegateSupportsAsyncActivate=_delegateSupportsAsyncActivate - In the implementation block
@property (assign,nonatomic) BOOL delegateSupportsActiveDeviceSwitch;                                 //@synthesize delegateSupportsActiveDeviceSwitch=_delegateSupportsActiveDeviceSwitch - In the implementation block
@property (retain) NSMutableArray * switchTasksQueue;                                                 //@synthesize switchTasksQueue=_switchTasksQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)isSupported;
+(id)defaultSession;
-(void)setDelegate:(id<WCSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<WCSessionDelegate>)delegate;
-(id)_init;
-(void)handleRequest:(id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(BOOL)isReachable;
-(NSDictionary *)applicationContext;
-(void)setApplicationContext:(NSDictionary *)arg1 ;
-(void)setActivationState:(long long)arg1 ;
-(NSString *)pairingID;
-(long long)activationState;
-(void)cancelUserInfo:(id)arg1 ;
-(BOOL)isComplicationEnabled;
-(NSURL *)watchDirectoryURL;
-(NSMutableArray *)switchTasksQueue;
-(BOOL)delegateSupportsActiveDeviceSwitch;
-(NSOperationQueue *)delegateOperationQueue;
-(BOOL)delegateSupportsAsyncActivate;
-(void)setDelegateSupportsAsyncActivate:(BOOL)arg1 ;
-(void)setDelegateSupportsActiveDeviceSwitch:(BOOL)arg1 ;
-(void)onqueue_loadOutstandingFileTransfers;
-(void)onqueue_loadOutstandingUserInfoTransfers;
-(void)onqueue_loadAppContexts;
-(void)setWatchDirectoryURL:(NSURL *)arg1 ;
-(void)setWatchAppInstalled:(BOOL)arg1 ;
-(void)setComplicationEnabled:(BOOL)arg1 ;
-(void)updatePairingID:(id)arg1 ;
-(void)setReceivedApplicationContext:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)internalOutstandingUserInfoTransfers;
-(void)onqueue_cancelUserInfo:(id)arg1 ;
-(void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2 ;
-(NSMutableDictionary *)internalOutstandingFileTransfers;
-(void)onqueue_cancelFileTransfer:(id)arg1 ;
-(void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2 ;
-(BOOL)isWatchAppInstalled;
-(WCQueueManager *)queueManager;
-(BOOL)logAndTestIfUnactivatedOrMissingDelegate;
-(void)setPairingID:(NSString *)arg1 ;
-(void)onqueue_loadPersistedContent;
-(id)errorIfPreconditionsNotSatisfied;
-(void)setInternalOutstandingUserInfoTransfers:(NSMutableDictionary *)arg1 ;
-(void)setInternalOutstandingFileTransfers:(NSMutableDictionary *)arg1 ;
-(id)errorIfNotReachable;
-(void)onqueue_sendMessageData:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(void)_onqueue_notifyOfMessageError:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)currentMessages;
-(id)createAndStartTimerOnWorkQueueWithHandler:(/*^block*/id)arg1 ;
-(void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2 ;
-(void)storeAppContext:(id)arg1 withAppContextData:(id)arg2 ;
-(void)onqueue_addOutstandingFileTransfer:(id)arg1 ;
-(id)fileSizeFromURL:(id)arg1 ;
-(void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2 ;
-(void)onqueue_removeOutstandingFileTransfer:(id)arg1 ;
-(void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2 ;
-(void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1 ;
-(void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1 ;
-(id)onqueue_addOutstandingUserInfoTransfer:(id)arg1 ;
-(void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(void)onqueue_startNextDeviceSwitch;
-(void)onqueue_completeSwitchTask:(id)arg1 withSessionState:(id)arg2 ;
-(void)onqueue_handleUpdateSessionState:(id)arg1 ;
-(void)onqueue_handleDictionaryMessageRequest:(id)arg1 withPairingID:(id)arg2 ;
-(void)onqueue_handleDataMessageRequest:(id)arg1 withPairingID:(id)arg2 ;
-(NSMutableSet *)currentMessageIdentifiersAwaitingReply;
-(void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2 ;
-(void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 withPairingID:(id)arg3 ;
-(void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 withPairingID:(id)arg3 ;
-(void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2 ;
-(BOOL)verifySessionFile:(id)arg1 ;
-(void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg1 triggerKVO:(BOOL)arg2 ;
-(void)onqueue_cancelTransfersIfAppropriate;
-(void)onqueue_dequeueContent;
-(BOOL)hasCompletedInitialActivation;
-(void)setHasCompletedInitialActivation:(BOOL)arg1 ;
-(NSOperationQueue *)backgroundWorkOperationQueue;
-(void)onqueue_cancelMessagesIfAppropriate;
-(void)didSessionStateChange:(id)arg1 withChangeHandler:(/*^block*/id)arg2 ;
-(BOOL)didPairingIDChange:(id)arg1 ;
-(BOOL)didWatchURLChange:(id)arg1 ;
-(void)handleApplicationContextWithPairingID:(id)arg1 ;
-(void)handleFileResultWithPairingID:(id)arg1 ;
-(void)handleIncomingFileWithPairingID:(id)arg1 ;
-(void)handleUserInfoResultWithPairingID:(id)arg1 ;
-(void)handleIncomingUserInfoWithPairingID:(id)arg1 ;
-(void)xpcConnectionInterrupted;
-(id)currentPairingID;
-(BOOL)supportsActiveDeviceSwitch;
-(void)handleActiveDeviceSwitchStarted;
-(void)handleSessionStateChanged:(id)arg1 ;
-(void)handleMessageSendingAllowed;
-(void)activateSession;
-(NSArray *)outstandingUserInfoTransfers;
-(NSArray *)outstandingFileTransfers;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)sendMessageData:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)updateApplicationContext:(id)arg1 error:(id*)arg2 ;
-(id)transferFile:(id)arg1 metadata:(id)arg2 ;
-(void)cancelFileTransfer:(id)arg1 ;
-(id)transferUserInfo:(id)arg1 ;
-(id)transferCurrentComplicationUserInfo:(id)arg1 ;
-(NSDictionary *)receivedApplicationContext;
-(void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2 ;
-(BOOL)iOSDeviceNeedsUnlockAfterRebootForReachability;
-(void)setIOSDeviceNeedsUnlockAfterRebootForReachability:(BOOL)arg1 ;
-(NSOperationQueue *)workOperationQueue;
-(void)setCurrentMessageIdentifiersAwaitingReply:(NSMutableSet *)arg1 ;
-(WCSessionUserInfoTransfer *)currentComplicationUserInfoTransfer;
-(void)setCurrentComplicationUserInfoTransfer:(WCSessionUserInfoTransfer *)arg1 ;
-(void)setQueueManager:(WCQueueManager *)arg1 ;
-(void)setSwitchTasksQueue:(NSMutableArray *)arg1 ;
-(BOOL)isPaired;
-(void)setReachable:(BOOL)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
@end

