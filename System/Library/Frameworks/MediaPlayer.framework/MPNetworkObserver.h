/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkObserver : NSObject {

	int _musicCellularNetworkingAllowedNotifyToken;
	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _networkUsageQueue;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isMusicCellularNetworkingAllowed; 
@property (nonatomic,readonly) BOOL isStoreCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(void)dealloc;
-(id)init;
-(id)_init;
-(BOOL)isStoreCellularNetworkingAllowed;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isUsingNetwork;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(BOOL)isMusicCellularNetworkingAllowed;
@end

