/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/MediaStreamPlugins/PhotoSharingPlugin.mediastream/PhotoSharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASPlugin <NSObject>
@optional
+(void)didFindNewAlbum:(id)arg1;
+(void)didFindDeletedAlbumWithGUID:(id)arg1;
+(id)MSASPersonIDsForPollingTriggeredByPushNotification;

@required
+(id)delegatePluginForPersonID:(id)arg1;

@end

