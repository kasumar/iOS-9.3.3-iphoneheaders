/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource;
@class NSDictionary, NSDate, NSObject, MPNowPlayingPlaybackQueueCache;

@interface MPNowPlayingInfoCenter : NSObject {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDate* _pushDate;
	NSObject*<OS_dispatch_queue> _queue;
	MPNowPlayingPlaybackQueueCache* _playbackQueueCache;
	id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;

}

@property (copy) NSDictionary * nowPlayingInfo; 
+(id)defaultCenter;
-(id)init;
-(id)_init;
-(void)_registerCallbacks;
-(void)_pushNowPlayingInfoAndRetry:(BOOL)arg1 ;
-(void)setPlaybackQueueDataSource:(id)arg1 ;
-(id)nowPlayingPlaybackQueueDataSource;
-(void)invalidatePlaybackQueue;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
@end

