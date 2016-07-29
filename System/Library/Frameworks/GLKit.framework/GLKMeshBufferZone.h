/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@class NSMutableOrderedSet, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {

	NSMutableOrderedSet* _buffers;
	BOOL _destroyInvoked;
	GLKMeshBufferAllocator* _allocator;
	unsigned _glBufferName;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long capacity;                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                             //@synthesize glBufferName=_glBufferName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)capacity;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)glBufferName;
@end

