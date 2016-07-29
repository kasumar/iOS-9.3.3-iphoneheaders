/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/StockholmPlugins/RemoteAdminConnection.plugin/RemoteAdminConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFRemoteAdminConnection <NSObject>
@required
+(unsigned)registerForAvailabilityChanges:(id)arg1 callbackQueue:(id)arg2;
+(unsigned)unregisterForAvailabilityChanges:(id)arg1;
+(BOOL)isAvailable;
-(unsigned)performRequest:(id)arg1 info:(id)arg2 response:(id*)arg3;
-(id)initWithURL:(id)arg1 SEID:(id)arg2;
-(unsigned)connect;
-(unsigned)disconnect;

@end

