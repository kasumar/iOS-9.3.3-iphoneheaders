/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRDNowPlayingDataSourceDelegate;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSString, NSDictionary;

@interface MRDNowPlayingDataSource : NSObject {

	BOOL _nowPlayingApplicationIsPlaying;
	BOOL _nowPlayingApplicationIsInterrupted;
	BOOL _anyApplicationIsPlaying;
	BOOL _currentRouteSupportsVolumeControl;
	int _nowPlayingApplicationPID;
	unsigned _externalScreenType;
	id<MRDNowPlayingDataSourceDelegate> _delegate;
	NSString* _nowPlayingApplicationDisplayID;
	NSDictionary* _pickedRoute;

}

@property (assign,nonatomic) id<MRDNowPlayingDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * nowPlayingApplicationDisplayID;               //@synthesize nowPlayingApplicationDisplayID=_nowPlayingApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) int nowPlayingApplicationPID;                            //@synthesize nowPlayingApplicationPID=_nowPlayingApplicationPID - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingApplicationIsPlaying;                     //@synthesize nowPlayingApplicationIsPlaying=_nowPlayingApplicationIsPlaying - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingApplicationIsInterrupted;                 //@synthesize nowPlayingApplicationIsInterrupted=_nowPlayingApplicationIsInterrupted - In the implementation block
@property (nonatomic,readonly) BOOL anyApplicationIsPlaying;                            //@synthesize anyApplicationIsPlaying=_anyApplicationIsPlaying - In the implementation block
@property (nonatomic,readonly) unsigned externalScreenType;                             //@synthesize externalScreenType=_externalScreenType - In the implementation block
@property (nonatomic,readonly) BOOL currentRouteSupportsVolumeControl;                  //@synthesize currentRouteSupportsVolumeControl=_currentRouteSupportsVolumeControl - In the implementation block
@property (nonatomic,readonly) NSDictionary * pickedRoute;                              //@synthesize pickedRoute=_pickedRoute - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)shouldSendCommand:(id)arg1 ;
-(BOOL)nowPlayingApplicationIsPlaying;
-(NSString *)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(BOOL)anyApplicationIsPlaying;
-(BOOL)nowPlayingApplicationIsInterrupted;
-(BOOL)currentRouteSupportsVolumeControl;
-(void)setDelegate:(id<MRDNowPlayingDataSourceDelegate>)arg1 ;
-(id<MRDNowPlayingDataSourceDelegate>)delegate;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(NSDictionary *)pickedRoute;
-(unsigned)externalScreenType;
@end

