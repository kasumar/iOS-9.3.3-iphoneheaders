/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncSessionObserverInterface.h>

@protocol OS_dispatch_queue, PSYSyncSessionObserverDelegate;
@class PSYSyncSession, PSYSyncSessionObserverExportedObject, NSObject, NSXPCConnection, NSString;

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface> {

	PSYSyncSession* _currentSyncSession;
	PSYSyncSessionObserverExportedObject* _exportedObject;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	BOOL _shouldCheckinAfterInvalidationHandler;
	id<PSYSyncSessionObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncSessionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setDelegate:(id<PSYSyncSessionObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PSYSyncSessionObserverDelegate>)delegate;
-(void)_connectionInvalidated;
-(id)providerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_checkin:(BOOL)arg1 ;
-(void)_queue_invalidateSyncSession:(id)arg1 ;
-(void)_queue_loadConnectionIfNeeded;
-(oneway void)syncSessionWillStart:(id)arg1 ;
-(oneway void)updateSyncSession:(id)arg1 ;
-(oneway void)invalidateSyncSession:(id)arg1 ;
-(void)_handleDaemonStarted;
-(void)startObservingSyncSessionsWithCompletion:(/*^block*/id)arg1 ;
@end

