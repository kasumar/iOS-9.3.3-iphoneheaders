/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureConfiguration, CAMConflictingControlConfiguration;

@interface CAMUserPreferences : NSObject {

	BOOL _didResetTorchMode;
	BOOL _shouldShowGridView;
	BOOL _shouldCaptureHDREV0;
	BOOL _lockAsShutterEnabled;
	BOOL _irisCaptureEnabled;
	BOOL _shouldDelayRemotePersistence;
	CAMCaptureConfiguration* _captureConfiguration;
	CAMConflictingControlConfiguration* _conflictingControlConfiguration;
	long long _videoConfiguration;
	long long _slomoConfiguration;
	long long _previewViewAspectMode;
	long long _overriddenBackCaptureInterval;
	long long _overriddenFrontCaptureInterval;

}

@property (assign,nonatomic) BOOL didResetTorchMode;                                                            //@synthesize didResetTorchMode=_didResetTorchMode - In the implementation block
@property (nonatomic,retain) CAMCaptureConfiguration * captureConfiguration;                                    //@synthesize captureConfiguration=_captureConfiguration - In the implementation block
@property (nonatomic,retain) CAMConflictingControlConfiguration * conflictingControlConfiguration;              //@synthesize conflictingControlConfiguration=_conflictingControlConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowGridView;                                                         //@synthesize shouldShowGridView=_shouldShowGridView - In the implementation block
@property (nonatomic,readonly) BOOL shouldCaptureHDREV0;                                                        //@synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0 - In the implementation block
@property (nonatomic,readonly) long long videoConfiguration;                                                    //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) long long slomoConfiguration;                                                    //@synthesize slomoConfiguration=_slomoConfiguration - In the implementation block
@property (assign,nonatomic) long long previewViewAspectMode;                                                   //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (getter=isLockAsShutterEnabled,nonatomic,readonly) BOOL lockAsShutterEnabled;                         //@synthesize lockAsShutterEnabled=_lockAsShutterEnabled - In the implementation block
@property (getter=isIrisCaptureEnabled,nonatomic,readonly) BOOL irisCaptureEnabled;                             //@synthesize irisCaptureEnabled=_irisCaptureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayRemotePersistence;                                               //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
@property (nonatomic,readonly) long long overriddenBackCaptureInterval;                                         //@synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval - In the implementation block
@property (nonatomic,readonly) long long overriddenFrontCaptureInterval;                                        //@synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval - In the implementation block
+(id)preferences;
+(id)_defaultCaptureConfiguration;
-(BOOL)shouldCaptureHDREV0;
-(BOOL)shouldDelayRemotePersistence;
-(BOOL)isLockAsShutterEnabled;
-(BOOL)readPreferencesWithLaunchOptions:(id)arg1 ;
-(BOOL)shouldResetCaptureConfiguration;
-(void)_setDidResetTorchMode:(BOOL)arg1 ;
-(long long)previewViewAspectMode;
-(CAMCaptureConfiguration *)captureConfiguration;
-(CAMConflictingControlConfiguration *)conflictingControlConfiguration;
-(void)readPreferences;
-(void)writePreferences;
-(BOOL)didResetTorchMode;
-(void)setCaptureConfiguration:(CAMCaptureConfiguration *)arg1 ;
-(void)setConflictingControlConfiguration:(CAMConflictingControlConfiguration *)arg1 ;
-(BOOL)shouldShowGridView;
-(long long)videoConfiguration;
-(long long)slomoConfiguration;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(BOOL)isIrisCaptureEnabled;
-(long long)overriddenBackCaptureInterval;
-(long long)overriddenFrontCaptureInterval;
@end

