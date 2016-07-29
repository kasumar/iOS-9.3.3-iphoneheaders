/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <softwarebehaviorservicesd/SBManagerServerInterface.h>

@class SBManager, NSMutableArray;

@interface SBManagerServer : NSObject <SBManagerServerInterface> {

	SBManager* _manager;
	NSMutableArray* _clients;

}
+(id)sharedInstance;
-(void)runUntilIdleExit;
-(id)_clientForCurrentConnection;
-(void)_notifyServerStart;
-(void)_run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)manager;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id)clients;
-(void)setClientType:(int)arg1 withResult:(/*^block*/id)arg2 ;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/id)arg1 ;
@end

