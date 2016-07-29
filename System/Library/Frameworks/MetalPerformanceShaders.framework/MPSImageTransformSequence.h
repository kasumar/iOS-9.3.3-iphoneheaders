/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSImageTransform.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLDevice;
@interface MPSImageTransformSequence : MPSImageTransform <NSCopying> {

	id<MTLDevice> _device;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithConversionNodeList:(ConversionNode*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 transforms:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithDevice:(id)arg1 transformArray:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MTLDevice>)device;
@end

