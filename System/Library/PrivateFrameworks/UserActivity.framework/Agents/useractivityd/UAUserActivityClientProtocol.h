/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAUserActivityClientProtocol <NSObject>
@required
-(void)doFetchUserActivityInfoWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doDeleteUserActivityWithUUID:(id)arg1;
-(void)doAddDynamicUserActivity:(id)arg1 matching:(id)arg2;
-(void)doRemoveDynamicUserActivity:(id)arg1 matching:(id)arg2;
-(void)doUpdateUserActivityWithUUID:(id)arg1 setActive:(BOOL)arg2;
-(void)doRegisterUserActivityInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doUpdateUserActivityInfo:(id)arg1 makeCurrent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doPinUserActivityInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doMarkUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 webpageURL:(id)arg3;
-(void)doGetCurrentUserActivityInfo:(/*^block*/id)arg1;
-(void)doGetCurrentDebugInfo;

@end

