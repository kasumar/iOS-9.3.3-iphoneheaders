/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKVoiceChatService : NSObject {

	id _voiceChatService;

}

@property (assign) id<GKVoiceChatClient> client; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (assign,nonatomic) float remoteParticipantVolume; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
+(void)initialize;
+(id)defaultVoiceChatService;
+(BOOL)isVoIPAllowed;
-(void)dealloc;
-(void)setClient:(id<GKVoiceChatClient>)arg1 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(float)outputMeterLevel;
-(float)inputMeterLevel;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(void)stopVoiceChatWithParticipantID:(id)arg1 ;
-(BOOL)acceptCallID:(long long)arg1 error:(id*)arg2 ;
-(void)denyCallID:(long long)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(float)remoteParticipantVolume;
-(void)setRemoteParticipantVolume:(float)arg1 ;
-(id<GKVoiceChatClient>)client;
@end

