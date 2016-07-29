/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBRemoteDataProviderClientProxy <NSObject>
@required
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deliverBulletinActionResponse:(id)arg1;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/id)arg3;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)primaryAttachmentDataForRecordID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1;

@end

