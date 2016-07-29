/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/PlayActivity.syncBundle/PlayActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATSyncClient <NSObject>
@required
-(id)revisionVersionToken;
-(void)setDelegate:(id)arg1;
-(BOOL)isEnabled;
-(unsigned long long)currentRevision;
-(id)syncDataClass;
-(void)getChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 afterRevision:(unsigned long long)arg3 upToRevision:(unsigned long long)arg4 withSyncParams:(id)arg5 intoOutputStream:(id)arg6 withStartHandler:(/*^block*/id)arg7 withProgressHandler:(/*^block*/id)arg8 withCompletionHandler:(/*^block*/id)arg9;
-(void)applyChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 fromStream:(id)arg3 withSyncParams:(id)arg4 withProgressHandler:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6;
-(void)resetSyncDataWithCompletion:(/*^block*/id)arg1;
-(void)syncCompletedWithError:(id)arg1;

@end

