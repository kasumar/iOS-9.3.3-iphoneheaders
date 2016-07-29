/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSLock;

@interface MFMessageStoreObjectCache : NSObject {

	NSLock* _lock;
	long long _capacity;
	CFDictionaryRef _cache;
	/*^block*/id _keyGenerator;
	/*^block*/id _comparator;

}

@property (nonatomic,copy) id keyGenerator;              //@synthesize keyGenerator=_keyGenerator - In the implementation block
@property (nonatomic,copy) id comparator;                //@synthesize comparator=_comparator - In the implementation block
-(id)comparator;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)flush;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)_nts_evictObject;
-(void)_nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(void)removeObjectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)objectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)keyGenerator;
-(void)setKeyGenerator:(id)arg1 ;
-(void)setComparator:(id)arg1 ;
@end

