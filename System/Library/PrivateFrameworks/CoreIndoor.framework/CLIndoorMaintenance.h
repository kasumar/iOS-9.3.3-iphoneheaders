/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)numFloors:(/*^block*/id)arg1 ;
-(void)doSynchronousXPC:(/*^block*/id)arg1 description:(const char*)arg2 waitForever:(BOOL)arg3 ;
-(void)prefetch:(id)arg1 ;
-(void)onQueuePrefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)prefetchSynchronous:(id)arg1 ;
-(void)eraseEverything;
-(void)onQueueEraseEverything:(/*^block*/id)arg1 ;
-(void)onQueueShutdown;
-(void)onQueueNumFloors:(/*^block*/id)arg1 ;
-(void)withinQueueInvalidateState;
-(id)remoteObjectProtocol;
-(id)endpointName;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
@end

