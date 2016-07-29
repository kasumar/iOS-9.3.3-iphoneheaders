/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelResourcePool : NSObject {

	MTLIOAccelResourcePoolPrivate* _priv;
	Class _resourceClass;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;

}

@property (readonly) IOAccelNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                         //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOAccelNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
-(int)availableCount;
-(IOAccelNewResourceArgs*)resourceArgs;
-(unsigned)resourceArgsSize;
-(void)dealloc;
-(void)purge;
@end

