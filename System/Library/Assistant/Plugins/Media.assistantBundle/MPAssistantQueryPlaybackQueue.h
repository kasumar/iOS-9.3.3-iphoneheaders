/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPAssistantQueryPlaybackQueue : MPAssistantPlaybackQueue {

	MPMediaQuery* _query;
	MPMediaItem* _firstItem;
	unsigned long long _shuffleType;

}

@property (nonatomic,readonly) MPMediaQuery * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * firstItem;                     //@synthesize firstItem=_firstItem - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)queryQueueWithContextID:(id)arg1 query:(id)arg2 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 query:(id)arg2 ;
-(MPMediaQuery *)query;
-(MPMediaItem *)firstItem;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(unsigned long long)shuffleType;
-(void)setShuffleType:(unsigned long long)arg1 ;
@end

