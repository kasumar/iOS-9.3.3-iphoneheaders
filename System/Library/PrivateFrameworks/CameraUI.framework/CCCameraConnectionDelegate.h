/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCCameraConnectionDelegate <NSObject>
@optional
-(unsigned long long)cameraConnectionSupportedModes:(id)arg1;
-(unsigned long long)cameraConnection:(id)arg1 setMode:(unsigned long long)arg2 interruptCapture:(BOOL)arg3;
-(void)cameraConnectionBeginVideo:(id)arg1;
-(void)cameraConnectionEndVideo:(id)arg1;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2;
-(BOOL)cameraConnectionIsMirrored:(id)arg1;
-(long long)cameraConnectionOrientation:(id)arg1;
-(void)cameraConnectionCancelCountdown:(id)arg1;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
-(double)cameraConnectionZoomAmount:(id)arg1;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
-(long long)cameraConnectionFlashMode:(id)arg1 flashSupported:(BOOL*)arg2;
-(void)cameraConnectionToggleCameraDevice:(id)arg1;

@required
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;

@end

