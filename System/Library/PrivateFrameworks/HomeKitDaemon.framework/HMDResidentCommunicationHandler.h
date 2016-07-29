/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray, NSMapTable, HAPTimer, NSUUID, HMDIDSMessageDispatcher;

@interface HMDResidentCommunicationHandler : NSObject <HAPTimerDelegate> {

	NSString* _residentPeerAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingReadRequests;
	NSMapTable* _dispatchedReadRequests;
	HAPTimer* _multiReadCoalesceTimer;
	NSUUID* _homeUUID;
	HMDIDSMessageDispatcher* _idsDispatcher;

}

@property (nonatomic,readonly) NSString * residentPeerAddress;                              //@synthesize residentPeerAddress=_residentPeerAddress - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReadRequests;                        //@synthesize pendingReadRequests=_pendingReadRequests - In the implementation block
@property (nonatomic,readonly) NSMapTable * dispatchedReadRequests;                         //@synthesize dispatchedReadRequests=_dispatchedReadRequests - In the implementation block
@property (nonatomic,retain) HAPTimer * multiReadCoalesceTimer;                             //@synthesize multiReadCoalesceTimer=_multiReadCoalesceTimer - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUUID;                                           //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,__weak,readonly) HMDIDSMessageDispatcher * idsDispatcher;              //@synthesize idsDispatcher=_idsDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2 ;
+(void)_clearAllPendingRequests:(id)arg1 error:(id)arg2 ;
+(void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3 ;
+(id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)homeUUID;
-(void)timerDidFire:(id)arg1 ;
-(NSMutableArray *)pendingReadRequests;
-(NSMapTable *)dispatchedReadRequests;
-(void)_redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 ;
-(HMDIDSMessageDispatcher *)idsDispatcher;
-(NSString *)residentPeerAddress;
-(HAPTimer *)multiReadCoalesceTimer;
-(void)setMultiReadCoalesceTimer:(HAPTimer *)arg1 ;
-(void)_sendMultipleCharacteristicRead;
-(void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3 ;
-(id)initWithHomeUUID:(id)arg1 residentAddress:(id)arg2 idsDispatcher:(id)arg3 ;
-(void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 ;
@end

