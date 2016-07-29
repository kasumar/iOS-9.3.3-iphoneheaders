/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WRMClientDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface WRMClient : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id<WRMClientDelegate> _wrmClientDelegate;

}

@property (assign) id<WRMClientDelegate> delegate; 
-(void)setDelegate:(id<WRMClientDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<WRMClientDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setConfiguration:(id)arg1 ;
-(void)startWRMClient;
-(void)stopWRMClient;
-(void)reportMetrics:(const SCD_Struct_VC18*)arg1 ;
-(BOOL)setupServiceConnection;
-(void)sendProcessInfo;
-(void)releaseServiceConnection;
-(void)dumpReport:(id)arg1 ;
-(void)sendReport:(id)arg1 ;
@end

