/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation {

	BOOL _markZonesAsUserPurged;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	NSMutableArray* _savedRecordZones;
	NSMutableArray* _deletedRecordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneIDs;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,copy) NSArray * recordZonesToSave;                               //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                           //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;                       //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                              //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedRecordZones;                       //@synthesize savedRecordZones=_savedRecordZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordZoneIDs;                   //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneIDs;              //@synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                  //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)modifyRecordZonesCompletionBlock;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneIDs;
-(NSMutableDictionary *)recordZoneErrors;
-(NSMutableArray *)deletedRecordZoneIDs;
-(NSMutableArray *)savedRecordZones;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setSavedRecordZones:(NSMutableArray *)arg1 ;
-(void)setDeletedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)markZonesAsUserPurged;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
@end
