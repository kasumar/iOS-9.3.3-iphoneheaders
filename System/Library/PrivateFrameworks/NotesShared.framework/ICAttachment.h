/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICSearchIndexable.h>

@class ICAttachmentModel, NSString, ICAttachmentLocation, ICMedia, NSData, ICNote, NSSet, NSDate, NSURL, AVAsset;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable> {

	ICAttachmentModel* _attachmentModel;
	BOOL previewImagesIntegrityChecked;
	BOOL isBeingEditedLocallyOnDevice;
	AVAsset* _movie;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sizeHeight; 
@property (assign,nonatomic) double sizeWidth; 
@property (assign,nonatomic) double originX; 
@property (assign,nonatomic) double originY; 
@property (assign,nonatomic) short orientation; 
@property (nonatomic,retain) NSString * urlString; 
@property (nonatomic,retain) NSString * typeUTI; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) ICAttachmentLocation * location; 
@property (nonatomic,retain) ICMedia * media; 
@property (nonatomic,retain) NSData * mergeableData; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,retain) NSSet * previewImages; 
@property (nonatomic,retain) NSDate * previewUpdateDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSURL * remoteFileURL; 
@property (assign,nonatomic) short section; 
@property (assign,nonatomic) BOOL checkedForLocation; 
@property (assign,nonatomic) long long fileSize; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) AVAsset * movie;                                 //@synthesize movie=_movie - In the implementation block
@property (assign,nonatomic) BOOL isBeingEditedLocallyOnDevice; 
@property (assign,nonatomic) BOOL previewImagesIntegrityChecked; 
+(id)predicateForSearchableAttachments;
+(void)purgeAllAttachmentsInContext:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg1 context:(id)arg2 ;
+(void)deleteAttachment:(id)arg1 ;
+(id)newAttachmentWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allAttachmentsInContext:(id)arg1 ;
+(id)predicateForVisibleAttachments;
+(id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)visibleAttachmentsInContext:(id)arg1 ;
+(void)purgeAttachment:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3 ;
+(id)predicateForAttachmentBrowser;
+(id)newFetchRequestForAttachmentsInContext:(id)arg1 ;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)noteFromAttachmentRecord:(id)arg1 ;
+(void)addPreviewImages:(id)arg1 toRecord:(id)arg2 ;
+(void)initialize;
+(id)imageCache;
+(BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1 ;
+(id)filenameExtensionForUTI:(id)arg1 ;
+(id)filenameFromUTI:(id)arg1 ;
+(short)sectionFromTypeUTI:(id)arg1 url:(id)arg2 ;
+(BOOL)typeUTIIsDrawing:(id)arg1 ;
+(BOOL)typeUTIIsPlayableMovie:(id)arg1 ;
+(BOOL)typeUTIIsPlayableAudio:(id)arg1 ;
+(id)imageLoadingOperationQueue;
+(id)thumbnailOperationQueue;
+(BOOL)typeUTIIsImage:(id)arg1 ;
+(BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1 ;
-(void)deleteAttachmentPreviewImages;
-(id)updateAttachmentPreviewImageWithImage:(UIImage*)arg1 scale:(double)arg2 scaleWhenDrawing:(BOOL)arg3 metadata:(id)arg4 sendNotification:(BOOL)arg5 ;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 ;
-(void)purgeAttachmentPreviewImages;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 matchScale:(BOOL)arg3 ;
-(void)invalidateAttachmentPreviewImages;
-(id)addMediaWithFileWrapper:(id)arg1 ;
-(id)addMediaWithURL:(id)arg1 ;
-(id)addMediaWithData:(id)arg1 filename:(id)arg2 forceWriteInBackground:(BOOL)arg3 ;
-(void)updateAfterMediaChange;
-(id)addMediaWithURL:(id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)updatePlaceInLocationIfNeededHandler:(/*^block*/id)arg1 ;
-(id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)addLocationIfNeeded;
-(void)deleteFromLocalDatabase;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)needsToBePushedToCloud;
-(BOOL)supportsDeletionByTTL;
-(id)threadUnsafeNewlyCreatedRecord;
-(void)fixBrokenReferences;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isInICloudAccount;
-(void)resetUniqueIdentifier;
-(void)mergeDataFromRecord:(id)arg1 newAttachment:(BOOL)arg2 ;
-(void)updatePreviewsFromRecord:(id)arg1 ;
-(id)recordType;
-(id)recordZoneID;
-(id)objectIdentifier;
-(id)generateSearchIndexStringsOperation;
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
-(id)nonModelSearchIndexStrings;
-(void)deleteFromNoteContextUsingIndexerContext:(id)arg1 ;
-(void)saveToArchive:(Attachment*)arg1 ;
-(void)loadFromArchive:(const Attachment*)arg1 withIdentifierMap:(id)arg2 ;
-(unsigned long long)approximateArchiveSizeIncludingPreviews:(BOOL)arg1 ;
-(void)loadPreviewArchive:(const PreviewImage*)arg1 ;
-(void)savePreview:(id)arg1 toArchive:(PreviewImage*)arg2 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage*)image;
-(CGSize)intrinsicContentSize;
-(id)attributedString;
-(id)URL;
-(BOOL)isVisible;
-(id)previewItemURL;
-(id)previewItemTitle;
-(id)activityItems;
-(NSString *)summary;
-(void)prepareForDeletion;
-(void)willSave;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(UIImage*)imageCache;
-(void)setSummary:(NSString *)arg1 ;
-(BOOL)isFolder;
-(id)fileSizeString;
-(void)unmarkForDeletion;
-(void)markForDeletion;
-(id)loggingDescriptionValues;
-(void)setTypeUTI:(NSString *)arg1 ;
-(id)attachmentModel;
-(BOOL)thumbnailImage:(UIImage*)arg1 minSize:(CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long*)arg4 showAsFileIcon:(BOOL*)arg5 isMovie:(BOOL*)arg6 movieDuration:(SCD_Struct_IC2*)arg7 ;
-(BOOL)fetchThumbnailImageWithMinSize:(CGSize)arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 fallbackBlock:(/*^block*/id)arg7 aboutToLoadHandler:(/*^block*/id)arg8 ;
-(void)saveAndClearDecryptedData;
-(BOOL)isBeingEditedLocallyOnDevice;
-(id)parentEncryptableObject;
-(NSData *)mergeableData;
-(void)setMergeableData:(NSData *)arg1 ;
-(void)setRemoteFileURL:(NSURL *)arg1 ;
-(NSURL *)remoteFileURL;
-(BOOL)isEncryptableKeyBinaryData:(id)arg1 ;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)needsToBeRequested;
-(id)pasteboardDataForAttributedString;
-(/*^block*/id)loadImage:(/*^block*/id)arg1 ;
-(BOOL)isMap;
-(BOOL)locationNeedsUpdate;
-(BOOL)isURL;
-(/*^block*/id)loadImage:(/*^block*/id)arg1 aboutToLoadHandler:(/*^block*/id)arg2 ;
-(void)saveMergeableDataIfNeeded;
-(void)checkPreviewImagesIntegrity;
-(BOOL)previewImagesIntegrityChecked;
-(void)setPreviewImagesIntegrityChecked:(BOOL)arg1 ;
-(BOOL)isiTunes;
-(BOOL)isAppStore;
-(BOOL)supportsSavingAttachmentToExternalFile;
-(id)modificationDateForSpeaking;
-(id)movieDurationForSpeaking;
-(void)attachmentDidChange;
-(void)didUpdateLocationPlace;
-(void)setIsBeingEditedLocallyOnDevice:(BOOL)arg1 ;
-(AVAsset *)movie;
-(void)setMovie:(AVAsset *)arg1 ;
@end

