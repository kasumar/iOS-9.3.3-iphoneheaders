/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface HMPendingRequests : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _contextLists;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * contextLists;                       //@synthesize contextLists=_contextLists - In the implementation block
-(id)init;
-(void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(id)removeCompletionBlockForIdentifier:(id)arg1 ;
-(void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeEventForIdentifier:(id)arg1 ;
-(id)removeTriggerForIdentifier:(id)arg1 ;
-(id)removeAccessoryForIdentifier:(id)arg1 ;
-(void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(NSMutableArray *)contextLists;
-(void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)_removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeActionForIdentifier:(id)arg1 ;
-(void)setContextLists:(NSMutableArray *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

