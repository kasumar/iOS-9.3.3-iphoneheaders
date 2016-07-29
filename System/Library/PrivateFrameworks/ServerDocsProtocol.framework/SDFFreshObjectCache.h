/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface SDFFreshObjectCache : NSObject {

	double _lifetime;
	unsigned long long _expired;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheByMetadata;
	BOOL _enableRefresh;
	NSObject*<OS_dispatch_source> _flusher;

}
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)debugDescription;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)initWithObjectLifetime:(double)arg1 enableObjectForMetadata:(BOOL)arg2 enableRefresh:(BOOL)arg3 ;
-(void)flushOldObjects;
-(void)_renewFlusher;
-(void)_setEntry:(id)arg1 andMetadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)_isExpiredEntry:(id)arg1 ;
-(void)_flushOldObjects;
-(id)_objectForKey:(id)arg1 metadata:(id*)arg2 refreshDate:(id*)arg3 ;
-(id)_objectForMetadata:(id)arg1 key:(id*)arg2 refreshDate:(id*)arg3 ;
-(BOOL)_isExpiredEntry:(id)arg1 now:(double)arg2 ;
-(id)initWithObjectLifetime:(double)arg1 ;
-(id)initWithObjectLifetime:(double)arg1 enableRefresh:(BOOL)arg2 ;
-(id)initWithObjectLifetime:(double)arg1 enableObjectForMetadata:(BOOL)arg2 ;
-(void)setObject:(id)arg1 andMetadata:(id)arg2 forKey:(id)arg3 ;
-(id)objectForKey:(id)arg1 metadata:(id*)arg2 ;
-(id)objectForKey:(id)arg1 metadata:(id*)arg2 refreshDate:(id*)arg3 ;
-(id)objectForMetadata:(id)arg1 ;
-(id)objectForMetadata:(id)arg1 key:(id*)arg2 ;
-(id)objectForMetadata:(id)arg1 key:(id*)arg2 refreshDate:(id*)arg3 ;
-(unsigned long long)expiredObjectsCount;
@end

