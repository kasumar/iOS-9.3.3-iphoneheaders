/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSSet, NSArray, NSDictionary, NSMutableDictionary;

@interface CKDGetRecordsURLRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	/*^block*/id _recordFetchedBlock;
	NSArray* _recordIDs;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	unsigned long long _recordCount;
	NSMutableDictionary* _recordIDByRequestID;
	NSSet* _desiredKeys;

}

@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                   //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                        //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                          //@synthesize URLOptions=_URLOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                           //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                    //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                        //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                 //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (assign,nonatomic) unsigned long long recordCount;                         //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
-(void)setRecordCount:(unsigned long long)arg1 ;
-(unsigned long long)recordCount;
-(int)operationType;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)shouldFetchAssetContent;
-(NSSet *)desiredKeys;
-(id)recordFetchedBlock;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSArray *)recordIDs;
-(unsigned long long)requestedTTL;
-(unsigned long long)URLOptions;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(NSDictionary *)recordIDsToETags;
-(NSSet *)assetFieldNamesToPublishURLs;
-(NSMutableDictionary *)recordIDByRequestID;
-(id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4 ;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

