/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMPanoramaConfiguration : NSObject <NSCoding> {

	int _ringBufferSize;
	long long _sampleBufferWidth;
	long long _sampleBufferHeight;
	SCD_Struct_CA2 _minimumFramerate;
	SCD_Struct_CA2 _maximumFramerate;

}

@property (nonatomic,readonly) long long sampleBufferWidth;                  //@synthesize sampleBufferWidth=_sampleBufferWidth - In the implementation block
@property (nonatomic,readonly) long long sampleBufferHeight;                 //@synthesize sampleBufferHeight=_sampleBufferHeight - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 minimumFramerate;              //@synthesize minimumFramerate=_minimumFramerate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 maximumFramerate;              //@synthesize maximumFramerate=_maximumFramerate - In the implementation block
@property (nonatomic,readonly) int ringBufferSize;                           //@synthesize ringBufferSize=_ringBufferSize - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithACTConfiguration:(id)arg1 ;
-(long long)sampleBufferWidth;
-(long long)sampleBufferHeight;
-(SCD_Struct_CA2)minimumFramerate;
-(SCD_Struct_CA2)maximumFramerate;
-(int)ringBufferSize;
@end

