/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation {

	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(void)main;
-(CKRecord *)userRecord;
-(void)_fetchRecords;
-(void)setUserRecord:(CKRecord *)arg1 ;
@end

