/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>
#import <NanoAppSync/NASAppSyncMetaDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NASAppSyncStatePersistence, NASAppSyncMetaDataSource, NASAppSyncMetaDataProcessor, NSString;

@interface NASAppSyncHandler : NSObject <AFSyncHandler, NASAppSyncMetaDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NASAppSyncStatePersistence* _statePersistence;
	NASAppSyncMetaDataSource* _source;
	NASAppSyncMetaDataProcessor* _processor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)syncDidEnd;
-(void)sourceIsReady:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

