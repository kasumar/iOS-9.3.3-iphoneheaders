/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LocalAttachmentCleanUpSupport : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)dealloc;
-(id)init;
-(void)interruptNextScheduledCleanup;
-(void)_dispatchCleanupAfterDelay:(long long)arg1 ;
-(void)scheduleNextCleanup;
-(void)_setTimerOnSource:(long long)arg1 ;
-(void)cleanUpOrphanedFiles;
@end

