/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> computeFunction; 
@property (assign,nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

