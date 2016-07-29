/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCNotificationGatherer.h>

@class NSMutableArray, NSString, BRCItemID;

@interface BRCDataOrDocsScopeGatherer : BRCNotificationGatherer {

	NSMutableArray* _gatheringContainers;
	unsigned long long _gatheringRankCur;
	unsigned long long _gatheringRankMax;
	NSString* _gatheringNamePrefix;
	BRCItemID* _gatheredChildrenItemID;

}

@property (nonatomic,retain) BRCItemID * gatheredChildrenItemID;              //@synthesize gatheredChildrenItemID=_gatheredChildrenItemID - In the implementation block
-(BOOL)continueGatheringWithBatchSize:(long long)arg1 ;
-(id)initWithNotificationPipe:(id)arg1 containers:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_gatheringDescendantOfContainerWithID:(id)arg1 ;
-(id)_gatheringNotDescendantOfContainerWithID:(id)arg1 ;
-(BRCItemID *)gatheredChildrenItemID;
-(void)setGatheredChildrenItemID:(BRCItemID *)arg1 ;
@end

