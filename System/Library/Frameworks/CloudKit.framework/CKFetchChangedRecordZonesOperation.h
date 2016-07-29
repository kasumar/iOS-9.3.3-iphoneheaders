/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKFetchChangedRecordZonesOperation : CKDatabaseOperation {

	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _fetchChangedRecordZonesCompletionBlock;
	CKServerChangeToken* _serverChangeToken;
	long long _status;

}

@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                              //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                           //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,readonly) BOOL moreComing; 
@property (nonatomic,copy) id fetchChangedRecordZonesCompletionBlock;                    //@synthesize fetchChangedRecordZonesCompletionBlock=_fetchChangedRecordZonesCompletionBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                    //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                           //@synthesize status=_status - In the implementation block
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchChangedRecordZonesCompletionBlock;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setFetchChangedRecordZonesCompletionBlock:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(CKServerChangeToken *)previousServerChangeToken;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(BOOL)moreComing;
@end

