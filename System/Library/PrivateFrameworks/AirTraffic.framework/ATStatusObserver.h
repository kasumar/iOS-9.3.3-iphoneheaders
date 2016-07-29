/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATStatusObserverProtocol.h>

@protocol ATStatusObserverDelegate;
@class NSXPCConnection, NSString;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol> {

	BOOL _ATCRunning;
	BOOL _resumed;
	int _notifyToken;
	id<ATStatusObserverDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) id<ATStatusObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL ATCRunning;                                           //@synthesize ATCRunning=_ATCRunning - In the implementation block
@property (assign,nonatomic) BOOL resumed;                                              //@synthesize resumed=_resumed - In the implementation block
@property (assign,nonatomic) int notifyToken;                                           //@synthesize notifyToken=_notifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ATStatusObserverDelegate>)arg1 ;
-(id)init;
-(id<ATStatusObserverDelegate>)delegate;
-(void)suspend;
-(void)resume;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)ATCRunning;
-(void)setATCRunning:(BOOL)arg1 ;
-(BOOL)resumed;
-(void)setResumed:(BOOL)arg1 ;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
-(void)updateWithStatus:(id)arg1 ;
@end

