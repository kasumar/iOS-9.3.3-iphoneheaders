/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {

	unsigned long long _diskCapacity;
	unsigned long long _memoryCapacity;
	NSString* _persistentIdentifier;

}

@property (assign,nonatomic) unsigned long long diskCapacity;                //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCapacity;              //@synthesize memoryCapacity=_memoryCapacity - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                  //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(unsigned long long)diskCapacity;
-(unsigned long long)memoryCapacity;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(NSString *)persistentIdentifier;
@end

