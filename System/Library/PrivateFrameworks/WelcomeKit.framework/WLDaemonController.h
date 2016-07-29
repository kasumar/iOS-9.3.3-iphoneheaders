/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface WLDaemonController : NSObject {

	NSLock* _daemonLock;
	NSXPCConnection* _daemonConn;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,copy) id interruptionHandler;              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(id)init;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)daemonConnection;
-(void)invalidateDaemonConnection;
@end

