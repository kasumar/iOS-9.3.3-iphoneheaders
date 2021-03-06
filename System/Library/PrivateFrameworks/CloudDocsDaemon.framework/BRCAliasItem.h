/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCDirectoryItem, BRCDocumentItem, BRCLocalContainer, NSString, BRCItemID;

@interface BRCAliasItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCLocalContainer * targetLocalContainer; 
@property (nonatomic,readonly) NSString * targetContainerID; 
@property (nonatomic,readonly) BRCItemID * targetItemID; 
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2 ;
-(id)targetReference;
-(BOOL)isAlias;
-(BRCAliasItem *)asAlias;
-(BRCItemID *)targetItemID;
-(BRCLocalContainer *)targetLocalContainer;
-(NSString *)targetContainerID;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(void)learnTarget:(id)arg1 ;
-(void)rewriteAliasOnDiskWithTarget:(id)arg1 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(BOOL)arg2 ;
-(void)serverDidAckAliasTargetDeletion;
@end

