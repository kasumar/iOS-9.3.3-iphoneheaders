/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	BOOL _isDeleted;
	/*^block*/id _recordVersionsFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSMutableDictionary* _recordIDByRequestID;

}

@property (nonatomic,copy) id recordVersionsFetchedBlock;                            //@synthesize recordVersionsFetchedBlock=_recordVersionsFetchedBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                           //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                  //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                          //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                         //@synthesize isDeleted=_isDeleted - In the implementation block
-(int)operationType;
-(BOOL)isDeleted;
-(BOOL)shouldFetchAssetContent;
-(NSArray *)desiredKeys;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSArray *)recordIDs;
-(void)setIsDeleted:(BOOL)arg1 ;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3 ;
-(void)setRecordVersionsFetchedBlock:(id)arg1 ;
-(id)recordVersionsFetchedBlock;
@end

