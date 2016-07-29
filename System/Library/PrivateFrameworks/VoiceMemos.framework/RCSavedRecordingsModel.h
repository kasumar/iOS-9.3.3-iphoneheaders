/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSManagedObjectModel, NSManagedObjectContext, NSFetchRequest, NSFetchedResultsController, NSArray, NSString;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {

	int _notifyToken;
	NSManagedObjectModel* _model;
	NSManagedObjectContext* _context;
	NSFetchRequest* _savedRecordingsFetchRequest;
	NSFetchedResultsController* _fetchController;
	BOOL _valid;
	long long _isSavingDisabledCount;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * recordings; 
@property (nonatomic,readonly) long long currentEntityRevision; 
@property (assign) BOOL valid;                                               //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) long long isSavingDisabledCount;                //@synthesize isSavingDisabledCount=_isSavingDisabledCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)savedRecordingsDirectory;
+(id)_dateFormatterComponentFormatting;
+(id)_copyFileIntoRecordingsDirectory:(id)arg1 ;
+(void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)sharedModelForQueue:(id)arg1 ;
+(id)standardURLForRecordingWithCreationDate:(id)arg1 ;
+(id)creationDateFromStandardRecordingURL:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)valid;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(long long)currentEntityRevision;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(void)_migrateDatabaseIfNecessary;
-(void)_handleExternalModelDidSaveNotification:(id)arg1 ;
-(void)_handleInternalModelDidSaveNotification:(id)arg1 ;
-(id)_initWithManagedObjectContext:(id)arg1 ;
-(void)_scheduleAutomaticRecordingDeletions;
-(id)recordingWithID:(id)arg1 ;
-(long long)_nextEntityRevisionID;
-(id)_recordingWithRecordingID:(long long)arg1 ;
-(id)fetchSavedRecordingIDs;
-(void)saveIfNecessary;
-(void)_enumerateFetchedRecordingTitles:(/*^block*/id)arg1 ;
-(id)_allTitles;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 ;
-(id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1 ;
-(long long)_nextRecordingID;
-(void)_setNextRecordingID:(long long)arg1 save:(BOOL)arg2 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 ;
-(void)performWithSavingDisabled:(/*^block*/id)arg1 ;
-(id)entityRevisionsForRecording:(id)arg1 ;
-(BOOL)_saveIfNecessary:(id*)arg1 ;
-(id)_labelPresetsForQuery:(id)arg1 ;
-(BOOL)__saveManagedObjectContext:(id*)arg1 ;
-(void)prepareToSaveByUpdatingEntityRevisionsWithChangeContext:(id)arg1 ;
-(void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1 ;
-(id)_entityRevisionWithRecordingID:(long long)arg1 ;
-(void)_enumerateSavedRecordingsAndEntityRevisionInArrayOfManagedObjects:(id)arg1 createIfNeeded:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)_setNextEntityRevisionID:(long long)arg1 save:(BOOL)arg2 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3 ;
-(void)enumerateExistingRecordingsWithBlock:(/*^block*/id)arg1 ;
-(void)_deleteOrphanedEntityRevisionsAndSave:(BOOL)arg1 ;
-(id)recordingWithURIRepresentation:(id)arg1 ;
-(void)deleteRecording:(id)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)_postRecordingsModelDidChangeForNotificationName:(id)arg1 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4 ;
-(NSArray *)recordings;
-(id)recordingAtIndex:(unsigned long long)arg1 ;
-(id)indexPathForRecording:(id)arg1 ;
-(id)recordingWithITunesPersistentID:(long long)arg1 ;
-(void)enumerateExistingRecordingsSinceEntityRevision:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasExistingRecordingForAudioFile:(id)arg1 ;
-(id)recordingsForSpotlightSearch:(id)arg1 ;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1 ;
-(long long)isSavingDisabledCount;
-(void)setIsSavingDisabledCount:(long long)arg1 ;
-(void)setValid:(BOOL)arg1 ;
@end

