/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSData, NSError, ADInterstitialAd, NSString, NSURL, ADBannerView;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate> {

	BOOL _visuallyEngaged;
	BOOL _enabled;
	BOOL _canAutoEnable;
	BOOL _sharedInterstitialAdIsInUse;
	BOOL _sharedMediaPlayerVideoAdClaimed;
	double _nextInterstitialPresentationTime;
	double _nextPrerollPlaybackTime;
	NSObject*<OS_dispatch_queue> _policyEngineQueue;
	NSMutableArray* _queuedCommands;
	NSData* _heartbeatToken;
	NSError* _heartbeatTokenError;
	double _heartbeatTokenExpiration;
	ADInterstitialAd* _sharedInterstitialAd;
	NSString* _sharedInterstitialSection;
	NSURL* _sharedInterstitialServerURL;
	NSString* _sharedInterstitialAuthenticationUserName;
	ADBannerView* _sharedMediaPlayerVideoAd;
	NSError* _lastSharedMediaPlayerVideoAdError;
	NSData* _currentStationData;
	NSData* _currentSongData;

}

@property (assign,nonatomic) BOOL visuallyEngaged;                                           //@synthesize visuallyEngaged=_visuallyEngaged - In the implementation block
@property (assign,nonatomic) double nextInterstitialPresentationTime;                        //@synthesize nextInterstitialPresentationTime=_nextInterstitialPresentationTime - In the implementation block
@property (assign,nonatomic) double nextPrerollPlaybackTime;                                 //@synthesize nextPrerollPlaybackTime=_nextPrerollPlaybackTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> policyEngineQueue;                 //@synthesize policyEngineQueue=_policyEngineQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedCommands;                              //@synthesize queuedCommands=_queuedCommands - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL canAutoEnable;                                             //@synthesize canAutoEnable=_canAutoEnable - In the implementation block
@property (nonatomic,retain) NSData * heartbeatToken;                                        //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
@property (nonatomic,retain) NSError * heartbeatTokenError;                                  //@synthesize heartbeatTokenError=_heartbeatTokenError - In the implementation block
@property (assign,nonatomic) double heartbeatTokenExpiration;                                //@synthesize heartbeatTokenExpiration=_heartbeatTokenExpiration - In the implementation block
@property (nonatomic,retain) ADInterstitialAd * sharedInterstitialAd;                        //@synthesize sharedInterstitialAd=_sharedInterstitialAd - In the implementation block
@property (assign,nonatomic) BOOL sharedInterstitialAdIsInUse;                               //@synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialSection;                             //@synthesize sharedInterstitialSection=_sharedInterstitialSection - In the implementation block
@property (nonatomic,copy) NSURL * sharedInterstitialServerURL;                              //@synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialAuthenticationUserName;              //@synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName - In the implementation block
@property (nonatomic,retain) ADBannerView * sharedMediaPlayerVideoAd;                        //@synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd - In the implementation block
@property (assign,nonatomic) BOOL sharedMediaPlayerVideoAdClaimed;                           //@synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed - In the implementation block
@property (nonatomic,retain) NSError * lastSharedMediaPlayerVideoAdError;                    //@synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError - In the implementation block
@property (nonatomic,retain) NSData * currentStationData;                                    //@synthesize currentStationData=_currentStationData - In the implementation block
@property (nonatomic,retain) NSData * currentSongData;                                       //@synthesize currentSongData=_currentSongData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedEngine;
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setHeartbeatToken:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)adSheetDidIdleDisablePolicyEngine;
-(void)setNextInterstitialPresentationTime:(double)arg1 ;
-(void)finishedPresentingSharedInterstitialAd;
-(BOOL)visuallyEngaged;
-(void)_adSheetConnectionBootstrapped;
-(NSObject*<OS_dispatch_queue>)policyEngineQueue;
-(void)_enablePolicyEngineWithReason:(id)arg1 ;
-(void)disablePolicyEngine;
-(NSMutableArray *)queuedCommands;
-(void)setHeartbeatToken:(NSData *)arg1 ;
-(void)setHeartbeatTokenError:(NSError *)arg1 ;
-(void)setHeartbeatTokenExpiration:(double)arg1 ;
-(NSError *)heartbeatTokenError;
-(NSData *)heartbeatToken;
-(double)heartbeatTokenExpiration;
-(BOOL)canAutoEnable;
-(void)_performWhenAdSheetConnectionEstablished:(/*^block*/id)arg1 ;
-(void)acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)sharedInterstitialServerURL;
-(NSString *)sharedInterstitialSection;
-(NSString *)sharedInterstitialAuthenticationUserName;
-(ADInterstitialAd *)sharedInterstitialAd;
-(BOOL)sharedInterstitialAdIsInUse;
-(double)nextInterstitialPresentationTime;
-(void)setSharedInterstitialAdIsInUse:(BOOL)arg1 ;
-(void)setSharedMediaPlayerVideoAd:(ADBannerView *)arg1 ;
-(ADBannerView *)sharedMediaPlayerVideoAd;
-(BOOL)sharedMediaPlayerVideoAdClaimed;
-(NSError *)lastSharedMediaPlayerVideoAdError;
-(double)nextPrerollPlaybackTime;
-(void)setSharedMediaPlayerVideoAdClaimed:(BOOL)arg1 ;
-(void)setLastSharedMediaPlayerVideoAdError:(NSError *)arg1 ;
-(void)sharedMediaPlayerVideoAdWillLoad;
-(void)sharedMediaPlayerVideoAdDidLoad;
-(void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1 ;
-(void)sharedMediaPlayerVideoAdActionDidFinish;
-(void)songBeganWithTags:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enablePolicyEngine;
-(id)heartbeatToken:(id*)arg1 ;
-(void)setVisuallyEngaged:(BOOL)arg1 ;
-(void)requestAdsForSlot:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didEnterStation:(id)arg1 ;
-(void)didBeginPlaybackOnStation:(id)arg1 song:(id)arg2 ;
-(void)didStopPlaybackOnStation:(id)arg1 ;
-(void)reportStationTileImpression:(id)arg1 ;
-(void)reportClientEvent:(id)arg1 ;
-(void)acquireMatchSlotWithUserConfirmation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)optimalTransmissionWindowDidOpen;
-(void)removeRecordForAccountWithIdentifier:(id)arg1 ;
-(void)setSharedInterstitialSection:(NSString *)arg1 ;
-(void)setSharedInterstitialServerURL:(NSURL *)arg1 ;
-(void)setSharedInterstitialAuthenticationUserName:(NSString *)arg1 ;
-(BOOL)canPresentSharedInterstitialAdWithResultMessage:(id*)arg1 ;
-(BOOL)claimSharedMediaPlayerVideoAdWithError:(id*)arg1 ;
-(void)relinquishSharedMediaPlayerVideoAd;
-(void)setStationData:(id)arg1 withInitialTrackBlobs:(id)arg2 ;
-(void)stationChanged:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)songBeganWithTags:(id)arg1 ;
-(void)songStopped;
-(void)songSkipped;
-(void)reportListeningPresenceEvent:(int)arg1 ;
-(void)setNextPrerollPlaybackTime:(double)arg1 ;
-(void)setPolicyEngineQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCanAutoEnable:(BOOL)arg1 ;
-(void)setSharedInterstitialAd:(ADInterstitialAd *)arg1 ;
-(NSData *)currentStationData;
-(void)setCurrentStationData:(NSData *)arg1 ;
-(NSData *)currentSongData;
-(void)setCurrentSongData:(NSData *)arg1 ;
-(void)bannerViewWillLoadAd:(id)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
@end

