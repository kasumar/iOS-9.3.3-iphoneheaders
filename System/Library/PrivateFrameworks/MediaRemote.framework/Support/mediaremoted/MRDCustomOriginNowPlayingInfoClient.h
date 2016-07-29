/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingInfoClient.h>

@class NSString;

@interface MRDCustomOriginNowPlayingInfoClient : MRDNowPlayingInfoClient {

	BOOL _currentRouteHasVolumeControl;
	NSString* _nowPlayingAppDisplayID;
	NSString* _nowPlayingAppDisplayName;

}

@property (nonatomic,copy) NSString * nowPlayingAppDisplayID;                //@synthesize nowPlayingAppDisplayID=_nowPlayingAppDisplayID - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppDisplayName;              //@synthesize nowPlayingAppDisplayName=_nowPlayingAppDisplayName - In the implementation block
@property (assign,nonatomic) BOOL currentRouteHasVolumeControl;              //@synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl - In the implementation block
-(void)setNowPlayingAppDisplayID:(NSString *)arg1 ;
-(NSString *)nowPlayingAppDisplayName;
-(void)setNowPlayingAppDisplayName:(NSString *)arg1 ;
-(void)setCurrentRouteHasVolumeControl:(BOOL)arg1 ;
-(id)description;
-(BOOL)currentRouteHasVolumeControl;
-(NSString *)nowPlayingAppDisplayID;
@end

