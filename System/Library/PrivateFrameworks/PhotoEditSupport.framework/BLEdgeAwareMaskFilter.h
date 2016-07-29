/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIFilter;

@interface BLEdgeAwareMaskFilter : CIFilter {

	float* _cubeData;
	SCD_Struct_BL9 _currentInputColor;
	CIFilter* _ciColorCubeFilter;
	SCD_Struct_BL9 _inputColor;

}

@property (assign) SCD_Struct_BL9 inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setInputColor:(SCD_Struct_BL9)arg1 ;
-(SCD_Struct_BL9)inputColor;
-(id)outputImage;
-(unsigned long long)dataLength;
-(BOOL)isDataUpToDate;
-(void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float*)arg4 a:(float*)arg5 b:(float*)arg6 ;
-(id)cubeData;
-(void)setInputImage:(id)arg1 ;
@end

