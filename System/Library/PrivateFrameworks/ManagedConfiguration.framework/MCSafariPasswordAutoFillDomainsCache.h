/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableArray* _memberQueueCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * memberQueueCache;                     //@synthesize memberQueueCache=_memberQueueCache - In the implementation block
+(id)sharedCache;
-(void)rereadCache;
-(void)memberQueueRereadCache;
-(NSMutableArray *)memberQueueCache;
-(void)setMemberQueueCache:(NSMutableArray *)arg1 ;
-(BOOL)isSafariPasswordAutoFillAllowedForURL:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

