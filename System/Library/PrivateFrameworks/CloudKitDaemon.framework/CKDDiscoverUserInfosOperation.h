/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserInfosOperation : CKDOperation {

	/*^block*/id _discoverUserInfosProgressBlock;
	NSArray* _emailsToDiscover;
	NSArray* _userRecordIDsToDiscover;

}

@property (nonatomic,copy) id discoverUserInfosProgressBlock;                //@synthesize discoverUserInfosProgressBlock=_discoverUserInfosProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * emailsToDiscover;                     //@synthesize emailsToDiscover=_emailsToDiscover - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDsToDiscover;              //@synthesize userRecordIDsToDiscover=_userRecordIDsToDiscover - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDiscoverUserInfosProgressBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)emailsToDiscover;
-(NSArray *)userRecordIDsToDiscover;
-(void)setEmailsToDiscover:(NSArray *)arg1 ;
-(void)setUserRecordIDsToDiscover:(NSArray *)arg1 ;
-(id)discoverUserInfosProgressBlock;
-(void)_handleDiscoveredInfo:(id)arg1 emailToDiscover:(id)arg2 responseCode:(id)arg3 ;
-(void)_discoverEmails:(id)arg1 userRecordIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

