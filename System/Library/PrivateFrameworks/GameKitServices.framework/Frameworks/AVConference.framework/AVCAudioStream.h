/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol AVCAudioStreamDelegate;
@class AVConferenceXPCClient, VCAudioStream, AVCMediaStreamConfig, NSDictionary, NSString;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	id<AVCAudioStreamDelegate> _delegate;
	id _weakSelf;
	VCAudioStream* _opaqueStream;
	AVCMediaStreamConfig* _configuration;
	NSDictionary* _capabilities;

}

@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (nonatomic,retain) NSDictionary * capabilities;                                                              //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) id<AVCAudioStreamDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AVCAudioStreamDelegate>)arg1 ;
-(void)dealloc;
-(id<AVCAudioStreamDelegate>)delegate;
-(void)stop;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)start;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)resume;
-(AVCMediaStreamConfig *)configuration;
-(void)pause;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(NSDictionary *)capabilities;
-(void)refreshLoggingParameters;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(BOOL)isRTCPTimeOutEnabled;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(BOOL)isRTCPEnabled;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 isOriginator:(BOOL)arg3 callID:(id)arg4 error:(id*)arg5 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(id)initWithLocalAddress:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(void)configure:(id)arg1 error:(id*)arg2 ;
-(void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4 ;
-(void)startContinuousDTMFWithDigit:(char)arg1 volume:(unsigned char)arg2 ;
-(void)stopContinuousDTMF;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
@end

