/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel
+(id)kernelWithString:(id)arg1 ;
-(CGRect)autogenerateROI:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 arguments:(id)arg3 extent:(CGRect)arg4 ;
-(id)generateGeneralKernelFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)generateMainFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)makeGridImage:(CGRect)arg1 nx:(int)arg2 ny:(int)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 ;
-(id)_initWithDict:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 cpuCallback:(/*^block*/id)arg3 colorManagement:(BOOL)arg4 andArguments:(id)arg5 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
@end

