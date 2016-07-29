/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYSessionDelegate <NSObject>
@optional
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;
-(BOOL)syncSession:(id)arg1 restartChanges:(id*)arg2;

@required
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end

