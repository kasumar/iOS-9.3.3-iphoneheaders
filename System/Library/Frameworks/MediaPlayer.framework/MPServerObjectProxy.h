/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPServerObjectProxy : NSObject {

	unsigned _didPrepareForRemoteSelectorInvocation : 1;
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;
	double _lastPrepareAttemptTime;

}
+(id)_center;
-(void)dealloc;
-(id)init;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)prepareForRemoteSelectorInvocation;
-(void)didPrepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
-(void)_messagingCenterDied:(id)arg1 ;
-(BOOL)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(void)_serverConnectionDied;
-(BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1 ;
@end

