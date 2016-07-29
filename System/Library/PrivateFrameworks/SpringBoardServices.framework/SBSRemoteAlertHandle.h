/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertClientHandle.h>

@protocol OS_dispatch_queue;
@class SBSRemoteAlertClient, NSObject, BSMachPortSendRight, NSHashTable, NSString;

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle> {

	SBSRemoteAlertClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	BSMachPortSendRight* _token;
	BOOL _active;
	NSHashTable* _observers;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(BOOL)arg2 ;
+(id)handleWithConfiguration:(id)arg1 ;
-(void)queue_setActive:(BOOL)arg1 ;
-(id)queue_token;
-(id)_initWithHandleToken:(id)arg1 ;
-(void)queue_noteInvalidWithError:(id)arg1 ;
-(void)_queue_callObserversWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(BOOL)isValid;
-(void)removeObserver:(id)arg1 ;
-(void)activateWithOptions:(id)arg1 ;
@end

