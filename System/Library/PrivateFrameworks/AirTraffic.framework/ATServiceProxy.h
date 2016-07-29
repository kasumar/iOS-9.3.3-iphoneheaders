/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATService.h>
#import <libobjc.A.dylib/ATServiceObserver.h>

@class NSXPCConnection, NSString;

@interface ATServiceProxy : ATService <ATServiceObserver> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)messageLinks;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
@end

