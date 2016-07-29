/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSSession;

@interface IDSSession : NSObject {

	_IDSSession* _internal;

}

@property (nonatomic,readonly) int socket; 
@property (assign,nonatomic) BOOL isAudioEnabled; 
@property (assign,nonatomic) BOOL isMuted; 
@property (assign,nonatomic) long long invitationTimeOut; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
-(void)dealloc;
-(unsigned)state;
-(void)endSession;
-(id)_internal;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(unsigned)sessionEndedReason;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 ;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 ;
-(void)sendInvitationWithData:(id)arg1 ;
-(void)setInvitationTimeOut:(long long)arg1 ;
-(long long)invitationTimeOut;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)cancelInvitation;
-(void)sendInvitation;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)isAudioEnabled;
-(BOOL)isMuted;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(int)socket;
-(void)setIsMuted:(BOOL)arg1 ;
@end

