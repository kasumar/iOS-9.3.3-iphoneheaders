/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVDecodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {

	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(void)dealloc;
-(int)width;
-(int)height;
-(NSDictionary *)pixelBufferAttributes;
-(BOOL)willYieldCompressedSamples;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedPixelBufferAttributes:(id)arg1 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2 ;
@end

