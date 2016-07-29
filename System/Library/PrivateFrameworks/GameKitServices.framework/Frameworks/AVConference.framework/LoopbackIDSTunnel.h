/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoConferenceRealTimeChannel.h>

@interface LoopbackIDSTunnel : NSObject <VideoConferenceRealTimeChannel> {

	int _socket;
	int _packetSendFailureCount;
	/*^block*/id _dataHandler;
	/*^block*/id _terminationHandler;
	OpaqueFigThreadRef _idsReceiveTID;
	BOOL _stopIDSReceiveThread;

}

@property (copy) id receiveHandler;                          //@synthesize dataHandler=_dataHandler - In the implementation block
@property (copy) id terminationHandler;                      //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) BOOL stopIDSReceiveThread;              //@synthesize stopIDSReceiveThread=_stopIDSReceiveThread - In the implementation block
-(void)dealloc;
-(void)cleanup;
-(void)setTerminationHandler:(id)arg1 ;
-(id)terminationHandler;
-(void)setReceiveHandler:(id)arg1 ;
-(id)receiveHandler;
-(BOOL)processSocketRead;
-(void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3 ;
-(id)initWithSocket:(int)arg1 error:(id*)arg2 ;
-(void)callTerminationHandlerWithError:(id)arg1 ;
-(BOOL)stopIDSReceiveThread;
@end

