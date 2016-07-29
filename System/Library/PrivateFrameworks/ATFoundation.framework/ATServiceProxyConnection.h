/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATServiceProxyConnection.h>

@protocol ATServiceProxyConnection <NSObject>
@required
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1;
-(void)connectWithCompletion:(/*^block*/id)arg1;

@end

#import <ATFoundation/ATServiceObserver.h>

@class ATService, NSXPCConnection, NSString;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver> {

	ATService* _service;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) ATService * service;                //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setService:(ATService *)arg1 ;
-(ATService *)service;
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 connection:(id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
@end

