/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSMutableArray, NSLock, SUScriptObject;

@interface SUScriptObjectInvocationBatch : NSObject {

	NSMutableArray* _invocationQueue;
	NSLock* _lock;
	CFDictionaryRef _proxies;
	SUScriptObject* _rootObject;

}

@property (assign) SUScriptObject * rootObject; 
-(void)setRootObject:(SUScriptObject *)arg1 ;
-(SUScriptObject *)rootObject;
-(void)dealloc;
-(id)init;
-(void)checkOutBatchTarget:(id)arg1 ;
-(id)copyQueuedInvocationsForObject:(id)arg1 ;
-(id)batchProxyForObject:(id)arg1 ;
-(void)dequeueInvocations;
-(void)_delayedDequeueInvocations;
-(void)enqueueInvocation:(id)arg1 ;
@end

