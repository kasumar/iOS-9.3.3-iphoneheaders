/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>

@class NSNumber, NSString, NSDate, NoteBodyObject, NSSet, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>

@property (nonatomic,retain) NSNumber * externalFlags; 
@property (nonatomic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * externalSequenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * contentType; 
@property (nonatomic,retain) NSNumber * containsCJK; 
@property (nonatomic,retain) NoteBodyObject * body; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,readonly) BOOL isBeingMarkedForDeletion; 
@property (nonatomic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,retain,readonly) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
+(BOOL)didChooseToMigrateNote:(id)arg1 context:(NoteContext*)arg2 ;
+(id)searchIndexableObjectWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 inNoteContext:(id)arg3 ;
-(id)identifier;
-(BOOL)isPasswordProtected;
-(id)noteAsPlainTextWithoutTitle;
-(id)objectIdentifier;
-(id)contentInfoText;
-(long long)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1 ;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1 ;
-(BOOL)shouldUpdateIndexForChangedValues:(id)arg1 ;
-(id)searchableItemIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;
-(BOOL)ignoreInSearchIndexer;
-(void)releaseMemoryForIndexing;
-(id)dateForCurrentSortType;
-(id)searchableContentKeyPaths;
-(BOOL)containsAttachments;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)content;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)contentAsPlainTextPreservingNewlines;
-(BOOL)isMarkedForDeletion;
-(void)setIsPlainText:(BOOL)arg1 ;
-(long long)serverIntId;
-(NSString *)externalContentRef;
-(void)setExternalContentRef:(NSString *)arg1 ;
-(BOOL)isBeingMarkedForDeletion;
-(NSURL *)noteId;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)hasValidServerIntId;
-(BOOL)belongsToCollection:(id)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(BOOL)isPlainText;
-(NSString *)contentAsPlainText;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(void)markForDeletion;
-(id)defaultTitleForEmptyNote;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
@end

