/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MSCLAudioPlayerDelegate.h>
#import <libobjc.A.dylib/MSCLSoundBiteViewDelegate.h>
#import <libobjc.A.dylib/MSCLVoiceRecorderDelegate.h>

@protocol MSCLSoundBiteViewControllerDelegate;
@class MSCLAttachment, MSCLAudioPlayer, SKUIClientContext, MSCLConfiguration, NSNumberFormatter, NSString, MSCLSoundBiteView, MSCLWaveformImageProducer, MSCLVoiceRecorder, MSCLAttachmentPreviewView;

@interface MSCLSoundBiteViewController : UIViewController <MSCLAudioPlayerDelegate, MSCLSoundBiteViewDelegate, MSCLVoiceRecorderDelegate> {

	MSCLAttachment* _attachment;
	MSCLAudioPlayer* _audioPlayer;
	SKUIClientContext* _clientContext;
	MSCLConfiguration* _configuration;
	BOOL _isExplicit;
	NSNumberFormatter* _leadingZeroFormatter;
	NSNumberFormatter* _numberFormatter;
	long long _recordingActivationMode;
	NSString* _recordingFilePath;
	double _recordingStartTime;
	MSCLSoundBiteView* _soundBiteView;
	MSCLWaveformImageProducer* _waveformImageProducer;
	MSCLVoiceRecorder* _voiceRecorder;
	id<MSCLSoundBiteViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MSCLAttachment * attachment;                                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                    //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MSCLConfiguration * configuration;                                      //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLSoundBiteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MSCLAttachmentPreviewView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLSoundBiteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MSCLSoundBiteViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setConfiguration:(MSCLConfiguration *)arg1 ;
-(MSCLConfiguration *)configuration;
-(MSCLAttachment *)attachment;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)stopPlayback;
-(void)audioPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2 ;
-(void)_endAudioPlayback;
-(double)_maximumRecordingDuration;
-(void)_reloadSoundBitePlaybackUI;
-(void)_startRecordingWithActivationMode:(long long)arg1 ;
-(void)_reloadSoundBiteRecordedUI;
-(void)_reloadSoundBiteRecordingUI;
-(id)_timeStringWithSeconds:(double)arg1 ;
-(void)soundBiteViewFaceProximityDidBegin:(id)arg1 ;
-(void)soundBiteViewFaceProximityDidEnd:(id)arg1 ;
-(void)soundBiteViewDidHoldRecordButton:(id)arg1 ;
-(void)soundBiteViewDidReleaseRecordButton:(id)arg1 ;
-(void)soundBiteViewDidToggleExplicit:(id)arg1 ;
-(void)soundBiteViewDidTogglePlayback:(id)arg1 ;
-(void)voiceRecorder:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)voiceRecorder:(id)arg1 didUpdateAveragePower:(float)arg2 ;
@end

