/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableDictionary, GEONavdClientInfo;

@interface GEONavdPeer : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _entitlementCache;
	GEONavdClientInfo* _clientInfo;
	BOOL _expectingUpdates;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) GEONavdClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL expectingUpdates;                         //@synthesize expectingUpdates=_expectingUpdates - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(GEONavdClientInfo *)clientInfo;
-(BOOL)expectingUpdates;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)setExpectingUpdates:(BOOL)arg1 ;
@end

