/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SpotlightReceiverJob <NSObject>
@required
-(void)supportedTypes:(/*^block*/id)arg1;
-(void)supportedBundleIDs:(/*^block*/id)arg1;
-(void)indexFromBundle:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteFromBundle:(id)arg1 sinceData:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completion:(/*^block*/id)arg5;
-(void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)userActions:(id)arg1 completion:(/*^block*/id)arg2;

@end

