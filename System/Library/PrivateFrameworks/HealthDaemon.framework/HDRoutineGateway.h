/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, RTRoutineManager, NSHashTable, NSObject, NSString;

@interface HDRoutineGateway : NSObject <HDHealthDaemonReadyObserver> {

	HDDaemon* _daemon;
	RTRoutineManager* _routineManager;
	NSHashTable* _observerTable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)processRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)daemonReady:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)_queue_registerForScenarioTriggersIfNeeded;
-(id)_locationRequestOfType:(int)arg1 ;
-(void)_fetchRemoteLocationOfInterestWithType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_queue_notifyObserversScenarioTriggered:(unsigned long long)arg1 location:(id)arg2 ;
-(void)_processFetchLocationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFetchNextLocationsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processScenarioTriggered:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_sendScenarioTrigger:(id)arg1 atLocation:(id)arg2 ;
-(void)addRoutineObserver:(id)arg1 ;
-(void)removeRoutineObserver:(id)arg1 ;
@end

