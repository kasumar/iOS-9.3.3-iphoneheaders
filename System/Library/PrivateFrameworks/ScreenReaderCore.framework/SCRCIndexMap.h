/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SCRCIndexMap : NSObject <NSCopying, NSCoding> {

	CFDictionaryRef _map;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long*)_createIndexesWithSize:(unsigned long long*)arg1 ;
-(id)_initWithIndexMap:(id)arg1 ;
-(id)_initAndDeepCopyIndexMap:(id)arg1 ;
-(id)initWithObjects:(id*)arg1 andIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 ;
-(id)indexes;
-(void)addObjectsFromIndexMap:(id)arg1 ;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)removeObjectForIndex:(unsigned long long)arg1 ;
@end

