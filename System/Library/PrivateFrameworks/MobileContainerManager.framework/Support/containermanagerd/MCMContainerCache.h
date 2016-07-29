/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@class NSMutableDictionary;

@interface MCMContainerCache : NSObject {

	NSMutableDictionary* _liveContainerCache;
	NSMutableDictionary* _transientContainerCache;
	opaque_pthread_mutex_t _cacheLock;

}
+(id)sharedInstance;
-(BOOL)addContainerMetadata:(id)arg1 forUser:(unsigned)arg2 url:(id)arg3 transient:(BOOL)arg4 error:(id*)arg5 ;
-(id)containerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(BOOL)arg4 error:(id*)arg5 ;
-(id)allContainerIdentifiersForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(id)containerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 uuidString:(id)arg4 ;
-(id)_getCacheForUserId:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeContainerForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(BOOL)arg4 error:(id*)arg5 ;
-(id)allContainersForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(id)init;
@end

