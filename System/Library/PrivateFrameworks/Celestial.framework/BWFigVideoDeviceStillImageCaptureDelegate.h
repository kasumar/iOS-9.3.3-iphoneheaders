/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFigVideoDeviceStillImageCaptureDelegate <NSObject>
@required
-(void)captureDeviceWillBeginStillImageCapture:(id)arg1;
-(void)captureDevice:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureDevice:(id)arg1 stillImageCaptureError:(int)arg2;

@end
