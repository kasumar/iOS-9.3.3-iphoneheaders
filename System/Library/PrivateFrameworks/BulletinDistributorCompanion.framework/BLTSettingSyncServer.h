/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTRemoteObject.h>
#import <libobjc.A.dylib/BLTSettingSyncing.h>

@protocol BLTSettingSyncing;
@class BLTPreviouslySentMessageStore, NSString;

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingSyncing> {

	id<BLTSettingSyncing> _delegate;
	BLTPreviouslySentMessageStore* _sectionInfoPreviouslySentMessageStore;
	BLTPreviouslySentMessageStore* _sectionSubtypeParametersIconsPreviouslySentMessageStore;

}

@property (assign,nonatomic,__weak) id<BLTSettingSyncing> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BLTPreviouslySentMessageStore * sectionInfoPreviouslySentMessageStore;                                //@synthesize sectionInfoPreviouslySentMessageStore=_sectionInfoPreviouslySentMessageStore - In the implementation block
@property (nonatomic,retain) BLTPreviouslySentMessageStore * sectionSubtypeParametersIconsPreviouslySentMessageStore;              //@synthesize sectionSubtypeParametersIconsPreviouslySentMessageStore=_sectionSubtypeParametersIconsPreviouslySentMessageStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTSettingSyncing>)arg1 ;
-(id)init;
-(id<BLTSettingSyncing>)delegate;
-(void)registerProtobufHandlers;
-(void)clearSectionInfoSentCache;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 ;
-(BOOL)isSectionInfoSentCacheEmpty;
-(void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(/*^block*/id)arg3 withAcknowledgement:(/*^block*/id)arg4 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(/*^block*/id)arg5 withAcknowledgement:(/*^block*/id)arg6 ;
-(void)handleSetSectionInfoRequest:(id)arg1 ;
-(void)handleSetSectionSubtypeParametersIconRequest:(id)arg1 ;
-(void)handleSetSectionInfoResponse:(id)arg1 ;
-(void)handleSetSectionSubtypeParametersIconResponse:(id)arg1 ;
-(BLTPreviouslySentMessageStore *)sectionInfoPreviouslySentMessageStore;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BLTPreviouslySentMessageStore *)sectionSubtypeParametersIconsPreviouslySentMessageStore;
-(void)setSectionInfoPreviouslySentMessageStore:(BLTPreviouslySentMessageStore *)arg1 ;
-(void)setSectionSubtypeParametersIconsPreviouslySentMessageStore:(BLTPreviouslySentMessageStore *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

