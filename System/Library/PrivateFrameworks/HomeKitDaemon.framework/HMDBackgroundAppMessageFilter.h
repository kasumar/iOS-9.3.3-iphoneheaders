/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@class NSMutableSet;

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter {

	NSMutableSet* _pidOfAppsRunningInBackground;

}

@property (nonatomic,retain) NSMutableSet * pidOfAppsRunningInBackground;              //@synthesize pidOfAppsRunningInBackground=_pidOfAppsRunningInBackground - In the implementation block
+(BOOL)isWhitelistedMessage:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)updateAppWithPid:(int)arg1 runningInBackground:(BOOL)arg2 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(NSMutableSet *)pidOfAppsRunningInBackground;
-(void)setPidOfAppsRunningInBackground:(NSMutableSet *)arg1 ;
@end

