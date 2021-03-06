/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPrefsSource : NSObject {

	CFDictionaryRef _dict;
	CFArrayRef _observers;
	unsigned _generationCount : 63;
	unsigned _isSearchList : 1;
	/*function pointer*/void** shmemEntry;
	opaque_pthread_mutex_t* _lock;
	SCD_Union_CF31 lastKnownShmemState;

}
+(void)withSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 cloud:(BOOL)arg5 perform:(/*^block*/id)arg6 ;
+(void)withNamedVolatileSourceForIdentifier:(CFStringRef)arg1 perform:(/*^block*/id)arg2 ;
-(BOOL)managed;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)alreadylocked_clearCache;
-(id)createRequestNewContentMessageForDaemon:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(BOOL)isVolatile;
-(BOOL)isByHost;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(BOOL)alreadylocked_requestNewData;
-(long long)alreadylocked_generationCount;
-(void)alreadylocked_updateObservingRemoteChanges;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)addPreferencesObserver:(id)arg1 ;
-(void)removePreferencesObserver:(id)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)willChangeValuesForKeys:(const _CFString*)arg1 count:(long long)arg2 ;
-(void)didChangeValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 removeValuesForKeys:(const _CFString*)arg4 count:(long long)arg5 ;
-(void)replaceAllValuesWithValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(CFDictionaryRef)copyDictionary;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)synchronize;
-(CFStringRef)container;
-(void)lock;
-(void)unlock;
-(long long)generationCount;
-(void)removeAllValues;
-(CFStringRef)domainIdentifier;
-(CFArrayRef)copyKeyList;
-(CFStringRef)userIdentifier;
-(void)finalize;
@end

