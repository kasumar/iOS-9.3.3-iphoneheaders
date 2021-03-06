/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSMutableArray, HDDaemon, HDAppAssertionManager, NSObject, NSMutableDictionary, NSMutableSet;

@interface _HDAppAssertion : NSObject {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	NSMutableArray* _pendingDataTypeCodes;
	double _lastLaunchAttempt;
	long long _launchErrorCount;
	HDDaemon* _daemon;
	HDAppAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _pendingLaunchCompletions;
	NSMutableSet* _processAssertions;
	NSObject*<OS_dispatch_source> _processDeathSource;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingDataTypeCodes;                       //@synthesize pendingDataTypeCodes=_pendingDataTypeCodes - In the implementation block
@property (nonatomic,readonly) double lastLaunchAttempt;                                    //@synthesize lastLaunchAttempt=_lastLaunchAttempt - In the implementation block
@property (nonatomic,readonly) double nextLaunchAttempt; 
@property (nonatomic,readonly) long long launchErrorCount;                                  //@synthesize launchErrorCount=_launchErrorCount - In the implementation block
@property (assign,nonatomic,__weak) HDDaemon * daemon;                                      //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic,__weak) HDAppAssertionManager * assertionManager;               //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingLaunchCompletions;                //@synthesize pendingLaunchCompletions=_pendingLaunchCompletions - In the implementation block
@property (nonatomic,retain) NSMutableSet * processAssertions;                              //@synthesize processAssertions=_processAssertions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> processDeathSource;              //@synthesize processDeathSource=_processDeathSource - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                              //@synthesize invalidated=_invalidated - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDDaemon *)daemon;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 daemon:(id)arg3 queue:(id)arg4 ;
-(void)extendForDataType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateForDataType:(long long)arg1 ;
-(NSMutableArray *)pendingDataTypeCodes;
-(void)launchWithCompletion:(/*^block*/id)arg1 ;
-(double)nextLaunchAttempt;
-(void)_queue_invalidate;
-(void)_queue_acquireAssertionWithCompletion:(/*^block*/id)arg1 ;
-(double)lastLaunchAttempt;
-(long long)launchErrorCount;
-(HDAppAssertionManager *)assertionManager;
-(void)setAssertionManager:(HDAppAssertionManager *)arg1 ;
-(NSMutableDictionary *)pendingLaunchCompletions;
-(void)setPendingLaunchCompletions:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)processAssertions;
-(void)setProcessAssertions:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_source>)processDeathSource;
-(void)setProcessDeathSource:(NSObject*<OS_dispatch_source>)arg1 ;
@end

