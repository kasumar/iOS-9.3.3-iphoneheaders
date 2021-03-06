/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, NSDate, NSSet, ICAccount;

@interface ICFolder : ICNoteContainer <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * dateForLastTitleModification; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) ICFolder * parent; 
@property (nonatomic,retain) NSSet * children; 
@property (nonatomic,retain) NSDate * parentModificationDate; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,readonly) BOOL isDefaultFolderForAccount; 
@property (assign,nonatomic) BOOL importedFromLegacy; 
@property (nonatomic,retain) NSSet * noteChanges; 
@property (assign,nonatomic) short folderType; 
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)allFoldersInContext:(id)arg1 ;
+(id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg1 ;
+(void)purgeFolder:(id)arg1 ;
+(id)newFolderWithIdentifier:(id)arg1 context:(id)arg2 ;
+(void)deleteFolder:(id)arg1 ;
+(id)foldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)folderWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleFolders;
+(id)newFolderInContext:(id)arg1 ;
+(id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2 ;
+(id)visibleFoldersInContext:(id)arg1 ;
+(unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)englishTitleForDefaultFolder;
+(id)englishTitleForTrashFolder;
+(id)localizedNewFolderName;
+(id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3 ;
+(id)reservedFolderTitles;
+(id)localizedTitleForDefaultFolder;
+(id)localizedTitleForTrashFolder;
+(id)stringByScrubbingStringForFolderName:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsLeaf;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)keyPathsForValuesAffectingTitleForTableViewCell;
-(void)deleteFromLocalDatabase;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 ;
-(id)threadUnsafeNewlyCreatedRecord;
-(void)fixBrokenReferences;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)resetUniqueIdentifier;
-(void)unmarkForDeletionIncludingParentHierarchy;
-(void)mergeParentFromRecord:(id)arg1 ;
-(id)recordType;
-(id)recordZoneID;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)predicateForVisibleNotesInFolder;
-(id)predicateForVisibleAttachmentsInFolder;
-(id)predicateForFoldersInFolder;
-(id)predicateForNotesInFolder;
-(id)predicateForAttachmentsInFolder;
-(id)visibleNotesInFolder;
-(id)foldersInFolder;
-(unsigned long long)countOfVisibleNotesInFolder;
-(void)setTitle:(NSString *)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isEditable;
-(id)localizedTitle;
-(void)prepareForDeletion;
-(void)awakeFromFetch;
-(BOOL)isDeletable;
-(id)accountName;
-(void)setAccount:(ICAccount *)arg1 ;
-(id)parentFolder;
-(void)markForDeletion;
-(id)loggingDescriptionValues;
-(id)predicateForSearchableAttachments;
-(id)predicateForVisibleNotes;
-(id)predicateForSearchableNotes;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isLeaf;
-(id)visibleNoteContainerChildren;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg1 ;
-(BOOL)isDefaultFolderForAccount;
-(void)regenerateNestedTitleForSorting;
-(void)updateSortOrder;
-(BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
-(BOOL)isAncestorOfFolder:(id)arg1 ;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)visibleNotesIncludingChildFolders;
-(id)predicateForVisibleAttachments;
-(BOOL)isMovable;
-(BOOL)isRecentlyDeletedFolder;
-(BOOL)validateTitle:(inout id*)arg1 error:(out id*)arg2 ;
-(BOOL)isTitleValid:(id)arg1 error:(out id*)arg2 ;
-(BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg1 ;
-(BOOL)shouldTrackChanges;
-(void)setParent:(ICFolder *)arg1 ;
@end

