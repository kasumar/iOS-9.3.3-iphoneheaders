/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>
@required
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;

@end

