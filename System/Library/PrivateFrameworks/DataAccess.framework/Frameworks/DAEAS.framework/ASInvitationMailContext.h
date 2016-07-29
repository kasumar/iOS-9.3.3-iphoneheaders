/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASInvitationMailContext : NSObject {

	BOOL _isMyInvite;
	int _emailResponse;
	NSString* _eventUID;
	NSString* _serverID;

}

@property (nonatomic,retain) NSString * eventUID;              //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSString * serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) BOOL isMyInvite;                  //@synthesize isMyInvite=_isMyInvite - In the implementation block
@property (assign,nonatomic) int emailResponse;                //@synthesize emailResponse=_emailResponse - In the implementation block
-(NSString *)eventUID;
-(void)setEventUID:(NSString *)arg1 ;
-(BOOL)isMyInvite;
-(void)setIsMyInvite:(BOOL)arg1 ;
-(int)emailResponse;
-(void)setEmailResponse:(int)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
@end

