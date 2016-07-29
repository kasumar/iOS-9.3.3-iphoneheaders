/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCInterface, NSXPCConnection;

@interface MSXPCService : NSObject {

	NSLock* _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCConnection* _connection;
	BOOL _shouldLaunchMobileMail;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
-(void)dealloc;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
@end

