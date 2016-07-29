/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SpotlightReceiver.h>
#import <libobjc.A.dylib/CSSearchableIndexObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, _CDInteractionRecording_CDInteractionDeleting;
@class NSObject, NSMutableArray, NSMutableDictionary, _DKKnowledgeStore, NSString;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver> {

	NSObject*<OS_dispatch_source> _batchExecutionSource;
	NSObject*<OS_dispatch_queue> _batchExecutionSourceQueue;
	NSObject*<OS_dispatch_queue> _pendingOperationsQueue;
	NSMutableArray* _pendingOperations;
	NSObject*<OS_dispatch_queue> _activityRateLimiterQueue;
	NSMutableDictionary* _activityPerBundleRateLimit;
	_DKKnowledgeStore* _knowledgeStore;
	id<_CDInteractionRecording><_CDInteractionDeleting> _recorder;

}

@property (nonatomic,retain) id<_CDInteractionRecording><_CDInteractionDeleting> recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 ;
+(void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3 ;
+(id)spotlightItemRecorder;
-(void)setRecorder:(id<_CDInteractionRecording><_CDInteractionDeleting>)arg1 ;
-(id<_CDInteractionRecording><_CDInteractionDeleting>)recorder;
-(id)supportedContentTypes;
-(id)initWithInteractionRecorder:(id)arg1 ;
-(void)runOperation:(id)arg1 ;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 ;
-(void)addUserAction:(id)arg1 withItem:(id)arg2 ;
-(void)addOrUpdateSearchableItems:(id)arg1 ;
-(id)supportedUTIs;
-(void)registerSpotlightRecorderWithServiceName:(id)arg1 ;
@end

