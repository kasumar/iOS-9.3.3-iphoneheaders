/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOExperimentServerProxy.h>

@protocol GEOExperimentServerProxyDelegate, OS_dispatch_source;
@class GEOABExperimentResponse, NSLock, NSObject, GEOABExperimentRequest, NSString;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy> {

	id<GEOExperimentServerProxyDelegate> _delegate;
	GEOABExperimentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	NSObject*<OS_dispatch_source> _updateTimer;
	NSLock* _updateTimerLock;
	GEOABExperimentRequest* _currentRequest;
	NSLock* _currentRequestLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOExperimentServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
-(void)setDelegate:(id<GEOExperimentServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)forceUpdate;
-(GEOABExperimentResponse *)experimentsInfo;
-(BOOL)_removeOldExperimentsInfoIfNecessary;
-(void)_loadExperimentsConfiguration:(/*^block*/id)arg1 ;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_invalidateTileCache:(BOOL)arg1 placesCache:(BOOL)arg2 ;
-(double)_timeToNextUpdate;
-(void)_updateIfNecessary;
-(void)_scheduleUpdateTimer:(double)arg1 ;
@end
