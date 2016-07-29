/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCStatInfo.h>

@class NSNumber, BRCGenerationID, NSString;

@interface BRCLocalStatInfo : BRCStatInfo {

	NSNumber* _processingStamp;
	unsigned char _itemScope;
	unsigned _stagedGenerationID;
	NSNumber* _documentID;
	NSNumber* _fileID;
	BRCGenerationID* _generationID;
	NSNumber* _stagedFileID;
	NSString* _physicalName;
	NSString* _bouncedName;

}

@property (nonatomic,readonly) NSNumber * documentID;                       //@synthesize documentID=_documentID - In the implementation block
@property (nonatomic,readonly) NSNumber * fileID;                           //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) BRCGenerationID * generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) NSNumber * stagedFileID;                     //@synthesize stagedFileID=_stagedFileID - In the implementation block
@property (nonatomic,readonly) NSNumber * stagedFileIDForDB; 
@property (nonatomic,readonly) unsigned stagedGenerationID;                 //@synthesize stagedGenerationID=_stagedGenerationID - In the implementation block
@property (nonatomic,readonly) NSString * physicalName;                     //@synthesize physicalName=_physicalName - In the implementation block
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * bouncedName;                      //@synthesize bouncedName=_bouncedName - In the implementation block
@property (nonatomic,readonly) NSNumber * lostStamp; 
@property (nonatomic,readonly) NSNumber * fileObjectID; 
@property (nonatomic,readonly) NSNumber * processingStamp;                  //@synthesize processingStamp=_processingStamp - In the implementation block
@property (assign,nonatomic) unsigned char itemScope;                       //@synthesize itemScope=_itemScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(NSNumber *)fileID;
-(NSNumber *)fileObjectID;
-(NSString *)physicalName;
-(NSNumber *)documentID;
-(NSNumber *)processingStamp;
-(NSNumber *)stagedFileIDForDB;
-(unsigned)stagedGenerationID;
-(NSString *)bouncedName;
-(unsigned char)itemScope;
-(id)descriptionWithContext:(id)arg1 origName:(id)arg2 ;
-(BOOL)checkStateWithItemID:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(BOOL)arg4 ;
-(id)initWithLocalStatInfo:(id)arg1 ;
-(void)setFilename:(id)arg1 forceRename:(BOOL)arg2 ;
-(void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(BOOL)arg4 ;
-(NSNumber *)lostStamp;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3 ;
-(id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 ;
-(void)_setParentID:(id)arg1 ;
-(void)_setItemScope:(unsigned char)arg1 ;
-(void)_setCKInfo:(id)arg1 ;
-(void)_markClearedFromStage;
-(void)_moveItemAsideWithUUIDString;
-(void)_generatedBouncedFilename:(id)arg1 ;
-(void)_migrateBouncedNameToLocalName;
-(void)_clearBouncedName;
-(unsigned long long)diffAgainstLocalInfo:(id)arg1 ;
-(void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(BOOL)arg4 ;
-(void)_markReserved;
-(void)_markAlmostDead;
-(void)_markDead;
-(void)_markFound;
-(void)_markLostAddingBackoffWithMode:(unsigned char)arg1 container:(id)arg2 ;
-(void)_markStagedWithFileID:(id)arg1 generationID:(unsigned)arg2 documentID:(id)arg3 ;
-(void)_updateStatMeta:(id)arg1 ;
-(void)_markLiveFromStageAsFault:(BOOL)arg1 ;
-(void)_clearFileID;
-(void)_clearGenerationID;
-(NSNumber *)stagedFileID;
-(void)setItemScope:(unsigned char)arg1 ;
-(BRCGenerationID *)generationID;
-(NSString *)filename;
@end

