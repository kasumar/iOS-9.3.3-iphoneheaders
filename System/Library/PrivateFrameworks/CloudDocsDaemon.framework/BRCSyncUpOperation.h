/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, NSMutableDictionary, NSString, BRCServerZone;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	unsigned long long _requestID;
	float _cost;
	NSMutableArray* _recordsToSave;
	NSMutableArray* _deletedRecordIDs;
	NSMutableArray* _deletedShareIDs;
	NSMutableArray* _recordsNeedingSharingInfo;
	NSMutableDictionary* _recordIDsToDeleteToEtags;
	NSMutableDictionary* _conflictLosersToResolveByRecordID;
	NSString* _stageID;
	/*^block*/id _syncUpCompletionBlock;
	BRCServerZone* _serverZone;

}

@property (nonatomic,readonly) float cost;                                                         //@synthesize cost=_cost - In the implementation block
@property (nonatomic,copy) id syncUpCompletionBlock;                                               //@synthesize syncUpCompletionBlock=_syncUpCompletionBlock - In the implementation block
@property (nonatomic,retain) BRCServerZone * serverZone;                                           //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordIDs;                                    //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedShareIDs;                                     //@synthesize deletedShareIDs=_deletedShareIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsNeedingSharingInfo;                           //@synthesize recordsNeedingSharingInfo=_recordsNeedingSharingInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToDeleteToEtags;                       //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSString * stageID;                                                   //@synthesize stageID=_stageID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long*)arg3 ;
-(void)main;
-(float)cost;
-(unsigned long long)startActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(BRCServerZone *)serverZone;
-(NSString *)stageID;
-(NSMutableArray *)deletedRecordIDs;
-(NSMutableArray *)deletedShareIDs;
-(NSMutableArray *)recordsNeedingSharingInfo;
-(id)initWithZone:(id)arg1 ;
-(BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long*)arg2 ;
-(void)_scheduleModifyRecordsOperation;
-(void)performAfterUnsharingIfNeeded:(/*^block*/id)arg1 ;
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setDeletedShareIDs:(NSMutableArray *)arg1 ;
-(void)setRecordsNeedingSharingInfo:(NSMutableArray *)arg1 ;
-(void)setStageID:(NSString *)arg1 ;
-(id)syncUpCompletionBlock;
-(void)setSyncUpCompletionBlock:(id)arg1 ;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(void)setRecordsToSave:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordsToSave;
-(NSMutableDictionary *)recordIDsToDeleteToEtags;
-(NSMutableDictionary *)conflictLosersToResolveByRecordID;
-(void)setRecordIDsToDeleteToEtags:(NSMutableDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSMutableDictionary *)arg1 ;
@end

