/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 updateSectionOrderRule:(long long)arg2;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
-(id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(long long)arg2;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
-(CGSize*)observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned long long)arg2;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;

@end

