/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TKTokenDriver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tokens;

}
-(id)init;
-(void)releaseTokenWithInstanceID:(id)arg1 ;
-(void)acquireTokenWithInstanceID:(id)arg1 classID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

