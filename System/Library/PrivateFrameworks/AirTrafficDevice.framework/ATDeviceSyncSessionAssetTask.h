/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATDeviceSyncSessionTask.h>
#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol ATAssetClient, OS_dispatch_queue;
@class NSMutableOrderedSet, ATAssetLinkController, NSMutableDictionary, NSMutableSet, ATThroughputCalculator, NSMapTable, NSObject, NSString;

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask <ATAssetLinkControllerObserver> {

	id<ATAssetClient> _assetClient;
	NSMutableOrderedSet* _clientAssetsRemaining;
	NSMutableOrderedSet* _clientAssetsInProgress;
	NSMutableOrderedSet* _serverAssetsInProgress;
	ATAssetLinkController* _assetController;
	NSMutableDictionary* _detailedProgress;
	NSMutableSet* _assetStreams;
	BOOL _addedTransportUpgradeException;
	double _taskStartTime;
	unsigned long long _totalAssetSize;
	ATThroughputCalculator* _throughputCalculator;
	NSMapTable* _assetToBytesMap;
	BOOL _requestsComplete;
	BOOL _peerRequestsComplete;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)start;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(id)sessionGroupingKey;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_finishTaskWithError:(id)arg1 ;
-(void)_assetRequestsCompletedWithError:(id)arg1 ;
-(void)_handleBeginAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleEndAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleAssetRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleUpdateSessionTaskRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_updateDetailedProgressForCompletedAsset:(id)arg1 ;
-(void)_updateProperties;
-(void)_updateTaskDescription;
@end
