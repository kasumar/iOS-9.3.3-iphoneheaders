/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableDictionary;

@interface FBProfileManager : NSObject {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _workQueue_managedApplicationBundleIDs;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;

}

@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isStarted;
-(void)_workQueue_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)_managedAppsChangedNotification:(id)arg1 ;
-(void)startService;
-(BOOL)isManaged:(id)arg1 ;
-(id)profilesForSignerIdentity:(id)arg1 ;
-(void)_reloadProfiles;
@end

