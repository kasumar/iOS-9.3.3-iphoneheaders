/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPNearbyWatchBulletinProviderDelegate.h>
#import <libobjc.A.dylib/PPDiscoveryManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, BBDataProviderConnection, PPDiscoveryManager, PPNearbyWatchBulletinProvider, NSString;

@interface PPNearbyWatchNotifier : NSObject <PPNearbyWatchBulletinProviderDelegate, PPDiscoveryManagerDelegate> {

	NSObject*<OS_dispatch_source> _timerSource;
	BBDataProviderConnection* _dataProviderConnection;
	PPDiscoveryManager* _discoveryManager;
	PPNearbyWatchBulletinProvider* _bulletinProvider;
	/*^block*/id _discoveryCompletion;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;                      //@synthesize timerSource=_timerSource - In the implementation block
@property (nonatomic,retain) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (nonatomic,retain) PPDiscoveryManager * discoveryManager;                          //@synthesize discoveryManager=_discoveryManager - In the implementation block
@property (nonatomic,retain) PPNearbyWatchBulletinProvider * bulletinProvider;               //@synthesize bulletinProvider=_bulletinProvider - In the implementation block
@property (nonatomic,copy) id discoveryCompletion;                                           //@synthesize discoveryCompletion=_discoveryCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWatchAppRemoved;
+(id)sharedNotifier;
-(void)bulletinProviderDidClearBulletins:(id)arg1 ;
-(id)discoverForTimeInterval:(double)arg1 signalLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didStopDiscovering;
-(void)_cleanupDiscoveryDidFindDevice:(BOOL)arg1 error:(id)arg2 ;
-(void)didDiscoverDeviceWithAdvertisingID:(id)arg1 signalStrength:(long long)arg2 ;
-(id)discoverForNearbyWatchesWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDiscovery;
-(PPDiscoveryManager *)discoveryManager;
-(void)setDiscoveryManager:(PPDiscoveryManager *)arg1 ;
-(id)discoveryCompletion;
-(void)setDiscoveryCompletion:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BBDataProviderConnection *)dataProviderConnection;
-(PPNearbyWatchBulletinProvider *)bulletinProvider;
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
-(void)setBulletinProvider:(PPNearbyWatchBulletinProvider *)arg1 ;
@end

