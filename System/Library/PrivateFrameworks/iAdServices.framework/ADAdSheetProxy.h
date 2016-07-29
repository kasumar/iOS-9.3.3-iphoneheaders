/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADAdSheetProxyDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface ADAdSheetProxy : NSObject {

	id<ADAdSheetProxyDelegate> _delegate;
	BOOL _serviceLaunchThrottled;
	BOOL _waitingForAdSheet;
	BOOL _openApplicationInProgress;
	double _lastLaunchTimestamp;
	long long _unexpectedTerminationCount;
	double _nextScheduledLaunch;
	NSMutableSet* _launchAssertions;
	NSObject*<OS_dispatch_queue> _proxyQueue;

}

@property (assign,nonatomic,__weak) id<ADAdSheetProxyDelegate> delegate; 
@property (nonatomic,readonly) BOOL serviceLaunchThrottled;                           //@synthesize serviceLaunchThrottled=_serviceLaunchThrottled - In the implementation block
@property (assign,nonatomic) BOOL waitingForAdSheet;                                  //@synthesize waitingForAdSheet=_waitingForAdSheet - In the implementation block
@property (assign,nonatomic) BOOL openApplicationInProgress;                          //@synthesize openApplicationInProgress=_openApplicationInProgress - In the implementation block
@property (assign,nonatomic) double lastLaunchTimestamp;                              //@synthesize lastLaunchTimestamp=_lastLaunchTimestamp - In the implementation block
@property (assign,nonatomic) long long unexpectedTerminationCount;                    //@synthesize unexpectedTerminationCount=_unexpectedTerminationCount - In the implementation block
@property (nonatomic,readonly) double remainingLaunchBackoff; 
@property (assign,nonatomic) double nextScheduledLaunch;                              //@synthesize nextScheduledLaunch=_nextScheduledLaunch - In the implementation block
@property (nonatomic,retain) NSMutableSet * launchAssertions;                         //@synthesize launchAssertions=_launchAssertions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> proxyQueue;               //@synthesize proxyQueue=_proxyQueue - In the implementation block
+(id)sharedInstance;
-(void)setDelegate:(id<ADAdSheetProxyDelegate>)arg1 ;
-(id)init;
-(id<ADAdSheetProxyDelegate>)delegate;
-(void)_adSheetAvailable;
-(NSObject*<OS_dispatch_queue>)proxyQueue;
-(NSMutableSet *)launchAssertions;
-(void)_considerLaunchingAdSheet;
-(void)setUnexpectedTerminationCount:(long long)arg1 ;
-(void)setLastLaunchTimestamp:(double)arg1 ;
-(long long)unexpectedTerminationCount;
-(double)lastLaunchTimestamp;
-(BOOL)openApplicationInProgress;
-(BOOL)waitingForAdSheet;
-(double)remainingLaunchBackoff;
-(double)nextScheduledLaunch;
-(void)setNextScheduledLaunch:(double)arg1 ;
-(void)setOpenApplicationInProgress:(BOOL)arg1 ;
-(void)setWaitingForAdSheet:(BOOL)arg1 ;
-(void)reportAdSheetUnexpectedTermination;
-(void)setLaunchAssertions:(NSMutableSet *)arg1 ;
-(void)resetAdSheetThrottle;
-(void)considerLaunchingAdSheet;
-(void)takeLaunchAssertion:(id)arg1 ;
-(void)releaseLaunchAssertion:(id)arg1 ;
-(BOOL)serviceLaunchThrottled;
@end

