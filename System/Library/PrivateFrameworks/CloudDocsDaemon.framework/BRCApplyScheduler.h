/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>

@class BRCCountedSet, NSMutableSet, NSString;

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule> {

	BRCCountedSet* _coordinatedWriters;
	NSMutableSet* _watchingFaults;
	BOOL _applyCountReachedMax;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled; 
-(void)_close;
-(id)initWithAccountSession:(id)arg1 ;
-(void)_schedule;
-(void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4 ;
-(void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 ;
-(void)deleteExpiredThrottles;
-(BOOL)_scheduleOne:(id)arg1 ;
-(void)_handleWatchingFaults;
-(void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 kind:(unsigned)arg3 ;
-(unsigned long long)_writeCoordinationCount;
-(void)rescheduleSuspendedThrottlesForZone:(id)arg1 state:(int)arg2 ;
-(void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 kind:(unsigned)arg4 ;
-(void)createThrottleID:(long long)arg1 zone:(id)arg2 itemID:(id)arg3 state:(int)arg4 kind:(unsigned)arg5 ;
-(void)didCreateMissingParentID:(id)arg1 zone:(id)arg2 ;
-(void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3 ;
-(void)repopulateThrottlesForZone:(id)arg1 ;
-(void)monitorFaultingForContainer:(id)arg1 ;
-(BOOL)startWriteCoordinationInZone:(id)arg1 ;
-(void)endWriteCoordinationInZone:(id)arg1 ;
-(void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(BOOL)arg4 ;
@end

