/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSyncHandler <NSObject>
@optional
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5;

@end

