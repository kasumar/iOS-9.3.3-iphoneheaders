/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@interface MTLIOAccelBuffer : MTLIOAccelResource {

	unsigned long long _length;
	void* _pointer;
	/*^block*/id _deallocator;
	MTLIOAccelBuffer* _masterBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	int _masterBufferOffset;

}

@property (readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) void* contents; 
-(CFArrayRef)copyAnnotations;
-(id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned)arg5 vidMemSize:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned long long)arg5 args:(IOAccelNewResourceArgs*)arg6 argsSize:(unsigned)arg7 ;
-(void)didModifyRange:(NSRange)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(void*)contents;
@end

