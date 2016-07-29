/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MRUniform : MUPoolObject {

	float m[16];
	long long i;
	long long length;

}
+(BOOL)clearVars;
+(SCD_Struct_MU3*)poolInfo;
-(id)initWithI:(long long)arg1 ;
-(id)initWithVec3:(double)arg1 :(double)arg2 :(double)arg3 ;
-(id)initWithVec2:(double)arg1 :(double)arg2 ;
-(id)initWithMat4:(float)arg1 ;
-(id)initWithMat4ForMat3:(float)arg1 ;
-(id)initWithVec4:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(id)initWithFloat:(double)arg1 ;
@end
