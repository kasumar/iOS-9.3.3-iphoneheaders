/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTBulletinSendQueueDelegate <NSObject>
@required
-(void)handleIDSProtobuf:(id)arg1;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5;
-(void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5;

@end

