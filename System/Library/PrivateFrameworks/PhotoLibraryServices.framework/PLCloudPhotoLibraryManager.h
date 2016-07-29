/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/CPLResourceProgressDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerDelegate.h>
#import <libobjc.A.dylib/PLForegroundObserver.h>
#import <libobjc.A.dylib/PLBatterySaverWatcherDelegate.h>
#import <libobjc.A.dylib/PLCloudUserSessionHandling.h>

@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;
@class PLCloudBatchUploader, PLCloudBatchDownloader, NSString, NSObject, PLBatterySaverWatcher, PLPhotoLibrary, CPLLibraryManager, PLCloudTaskManager, PLCloudResourceManager, NSMutableDictionary, NSDate, PFCoalescer, NSNumber;

@interface PLCloudPhotoLibraryManager : NSObject <CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundObserver, PLBatterySaverWatcherDelegate, PLCloudUserSessionHandling> {

	PLCloudBatchUploader* _uploader;
	PLCloudBatchDownloader* _downloader;
	unsigned long long _lastKnownChangeHubEventIndex;
	unsigned long long _lastKnownDeletionEventIndex;
	NSString* _lastKnownStoreUUID;
	BOOL _wasRebuild;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLBatterySaverWatcher* _batterySaverWatcher;
	BOOL _batterySaverModeEnabled;
	NSObject*<OS_xpc_object> _hubConnection;
	unsigned char _nodeUUID[16];
	BOOL _processingChange;
	unsigned long long _mode;
	BOOL _pushOnIdle;
	BOOL _pullOnIdle;
	BOOL _modeChangePending;
	BOOL _closeLibrary;
	unsigned long long _uploadCounterCheck;
	unsigned long long _downloadCounterCheck;
	PLPhotoLibrary* _photoLibrary;
	CPLLibraryManager* _cplLibrary;
	BOOL _stopping;
	BOOL _stopped;
	BOOL _needToResume;
	BOOL _needSoftReset;
	int _pauseRequest;
	PLCloudTaskManager* _taskManager;
	PLCloudResourceManager* _resourceManager;
	NSObject*<OS_dispatch_source> _unpauseDispatchTimer;
	NSMutableDictionary* _trackedResourceProgressSize;
	NSDate* _lastResetSyncDate;
	NSDate* _lastIdleDate;
	BOOL _initializedMaster;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _uploadDownloadCountQueue;
	unsigned long long _boundForUploadingPhotos;
	unsigned long long _boundForUploadingVideos;
	unsigned long long _boundForUploadingOtherItems;
	unsigned long long _totalSizeOfUnpushedOriginals;
	unsigned long long _totalSizeOfPushedOriginals;
	unsigned long long _totalUploadedOriginalSize;
	NSObject*<OS_dispatch_source> _workInProgressTimer;
	unsigned long long _numberOfPhotosToUpload;
	unsigned long long _numberOfVideosToUpload;
	unsigned long long _numberOfPhotosToDownload;
	unsigned long long _numberOfVideosToDownload;
	unsigned long long _numberOfOtherItemsToDownload;
	unsigned long long _numberOfPushedItems;
	NSNumber* __numberOfPhotosToPush;
	NSNumber* __numberOfVideosToPush;
	NSNumber* __numberOfOtherItemsToPush;
	NSNumber* __numberOfPhotosDownloaded;
	NSNumber* __numberOfVideosDownloaded;
	NSNumber* __numberOfOtherItemsDownloaded;
	/*^block*/id __idleStateTransitionOneTimeAction;

}

@property (nonatomic,readonly) unsigned long long numberOfPhotosToUpload;                                                    //@synthesize numberOfPhotosToUpload=_numberOfPhotosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideosToUpload;                                                    //@synthesize numberOfVideosToUpload=_numberOfVideosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPhotosToDownload;                                                  //@synthesize numberOfPhotosToDownload=_numberOfPhotosToDownload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideosToDownload;                                                  //@synthesize numberOfVideosToDownload=_numberOfVideosToDownload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOtherItemsToDownload;                                              //@synthesize numberOfOtherItemsToDownload=_numberOfOtherItemsToDownload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPushedItems;                                                       //@synthesize numberOfPushedItems=_numberOfPushedItems - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSizeOfUnpushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalSizeOfPushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalUploadedOriginalSize; 
@property (nonatomic,readonly) BOOL inResetSync; 
@property (setter=_setNumberOfPhotosToPush:,nonatomic,retain) NSNumber * _numberOfPhotosToPush;                              //@synthesize _numberOfPhotosToPush=__numberOfPhotosToPush - In the implementation block
@property (setter=_setNumberOfVideosToPush:,nonatomic,retain) NSNumber * _numberOfVideosToPush;                              //@synthesize _numberOfVideosToPush=__numberOfVideosToPush - In the implementation block
@property (setter=_setNumberOfOtherItemsToPush:,nonatomic,retain) NSNumber * _numberOfOtherItemsToPush;                      //@synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush - In the implementation block
@property (setter=_setNumberOfPhotosDownloaded:,nonatomic,retain) NSNumber * _numberOfPhotosDownloaded;                      //@synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded - In the implementation block
@property (setter=_setNumberOfVideosDownloaded:,nonatomic,retain) NSNumber * _numberOfVideosDownloaded;                      //@synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded - In the implementation block
@property (setter=_setNumberOfOtherItemsDownloaded:,nonatomic,retain) NSNumber * _numberOfOtherItemsDownloaded;              //@synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded - In the implementation block
@property (setter=_setIdleStateTransitionOneTimeAction:,nonatomic,copy) id _idleStateTransitionOneTimeAction;                //@synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(BOOL)needResetSyncErrorType:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)resume;
-(void)pause;
-(unsigned long long)_fetchLastEventIndexFromChangeHub;
-(void)saveLastKnownIndexFromChangeHubToDisk;
-(void)_readLastResetSyncDate;
-(void)_readIdleDate;
-(void)_updateTransferCounts;
-(void)notifyCPLLibraryOnReset;
-(void)_cleanupCPLLibrary;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_reallyDeactivateCPLLibrary;
-(BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1 ignoringBatterySaver:(BOOL)arg2 ignoringDiskPressure:(BOOL)arg3 ;
-(void)_resetCPLLibrary;
-(void)_resetTotalUploadByteSize;
-(void)unregisterToChangeHubNotification;
-(void)_stopUnpauseTimer;
-(void)_doUnpause;
-(BOOL)_setupTimerForUnpause;
-(id)_debugNameForMode:(unsigned long long)arg1 ;
-(void)_doPause;
-(void)resetFlags;
-(void)_deactivateCPLLibrary;
-(void)_setupHubConnection;
-(void)_processNextTransaction;
-(void)unpause;
-(void)_openCPLLibrary;
-(void)fetchNewEventsFromChangeHub;
-(void)_writeIdleDate;
-(id)_idleStateTransitionOneTimeAction;
-(BOOL)_hasIncomingWorkFileMarker;
-(void)_startWorkInProgressTimer;
-(void)_setIdleStateTransitionOneTimeAction:(/*^block*/id)arg1 ;
-(void)_processUploadBatch;
-(void)_downloadFromCloud;
-(void)_closeCPLLibrary;
-(void)_stopAll;
-(void)_doResetSync:(BOOL)arg1 ;
-(unsigned long long)diskSpaceLevel;
-(unsigned)_registerToChangeHubNotification;
-(void)updateLastKnownIndexFromChangeHub;
-(void)_recoverFromPauseUnderDiskPressureIfNeeded;
-(void)_runSyncOnIsolationQueueWithBlock:(/*^block*/id)arg1 ;
-(void)downloadResource:(id)arg1 highPriority:(BOOL)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setNumberOfPhotosToPush:(id)arg1 ;
-(void)_setNumberOfVideosToPush:(id)arg1 ;
-(void)_setNumberOfOtherItemsToPush:(id)arg1 ;
-(void)_setNumberOfPhotosDownloaded:(id)arg1 ;
-(void)_setNumberOfVideosDownloaded:(id)arg1 ;
-(void)_setNumberOfOtherItemsDownloaded:(id)arg1 ;
-(id)_newFetchPendingEventsFromIndex:(unsigned long long)arg1 ;
-(void)_fetchDeletionEventsFromChangeHub;
-(void)_uploadFullPhotoLibraryToCloud;
-(void)uploadToCloudForEvents:(id)arg1 ;
-(void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1 ;
-(NSNumber *)_numberOfPhotosToPush;
-(NSNumber *)_numberOfVideosToPush;
-(id)lastKnownCloudVersionFromDisk;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)processDownloadBatchWithSession:(id)arg1 ;
-(void)sync;
-(void)_updateWithCPLResource:(id)arg1 isHighPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1 ;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_linkFileFrom:(id)arg1 to:(id)arg2 ;
-(void)_processColorSpaceForAsset:(id)arg1 resourceURL:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(unsigned long long)_inq_numberOfPhotosToUpload;
-(unsigned long long)_inq_numberOfVideosToUpload;
-(unsigned long long)_inq_numberOfPhotosToDownload;
-(unsigned long long)_inq_numberOfVideosToDownload;
-(unsigned long long)_inq_numberOfPushedItems;
-(unsigned long long)_inq_numberOfOtherItemsToUpload;
-(void)_checkForWorkInProgress;
-(void)_stopWorkInProgressTimer;
-(BOOL)_hasAvalancheIncomingWork;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3 ;
-(void)batterySaverModeDidChange:(BOOL)arg1 ;
-(void)endUserSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1 ;
-(void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(/*^block*/id)arg7 progressBlock:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)doSoftResetSync;
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 ;
-(CGSize)_targetSizeForInputSize:(CGSize)arg1 maxPixelSize:(unsigned long long)arg2 ;
-(id)getCPLState;
-(unsigned long long)_inq_numberOfOtherItemsToDownload;
-(unsigned long long)totalSizeOfPushedOriginals;
-(unsigned long long)numberOfPhotosToUpload;
-(unsigned long long)numberOfPhotosToDownload;
-(unsigned long long)numberOfOtherItemsToDownload;
-(unsigned long long)numberOfPushedItems;
-(NSNumber *)_numberOfOtherItemsToPush;
-(NSNumber *)_numberOfPhotosDownloaded;
-(NSNumber *)_numberOfVideosDownloaded;
-(NSNumber *)_numberOfOtherItemsDownloaded;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVideosToUpload;
-(unsigned long long)numberOfVideosToDownload;
-(BOOL)inResetSync;
-(unsigned long long)totalUploadedOriginalSize;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(void)addLogMark:(id)arg1 ;
@end

