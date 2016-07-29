/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchUserIdentitiesOperation : CKDOperation {

	/*^block*/id _fetchUserIdentityProgressBlock;
	NSArray* _identityInfos;

}

@property (nonatomic,copy) id fetchUserIdentityProgressBlock;              //@synthesize fetchUserIdentityProgressBlock=_fetchUserIdentityProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * identityInfos;                      //@synthesize identityInfos=_identityInfos - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setFetchUserIdentityProgressBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)identityInfos;
-(id)fetchUserIdentityProgressBlock;
-(void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3 ;
-(void)_fetchInfoFromCache;
-(void)setIdentityInfos:(NSArray *)arg1 ;
@end

