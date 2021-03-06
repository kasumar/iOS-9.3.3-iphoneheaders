/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableDictionary, HMDIDSMessageDispatcher, HMMessageDispatcher, NSString;

@interface HMDNotificationRelay : NSObject <HMMessageReceiver> {

	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _pendingNotifications;
	HMDIDSMessageDispatcher* _msgDispatcher;
	HMMessageDispatcher* _notificationRelayDispatcher;

}

@property (nonatomic,retain) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingNotifications;                            //@synthesize pendingNotifications=_pendingNotifications - In the implementation block
@property (assign,nonatomic,__weak) HMDIDSMessageDispatcher * msgDispatcher;                        //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMMessageDispatcher * notificationRelayDispatcher;              //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_registerForNotifications;
-(HMDIDSMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMDIDSMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)notificationRelayDispatcher;
-(NSMutableDictionary *)pendingNotifications;
-(void)_handleNotification:(id)arg1 ;
-(void)_relayResponseForNotificationState:(id)arg1 ;
-(id)initWithMessageDispatcher:(id)arg1 notificationRelayDispatcher:(id)arg2 ;
-(void)addPendingNotification:(id)arg1 forDestination:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)removePendingNotification:(id)arg1 ;
-(void)setPendingNotifications:(NSMutableDictionary *)arg1 ;
@end

