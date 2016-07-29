/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHObject.h>
#import <libobjc.A.dylib/PUDisplayAsset.h>
#import <libobjc.A.dylib/_PLImageLoadingAsset.h>

@class NSString, NSDate, NSArray, NSData, CLLocation, NSURL;

@interface PHAsset : PHObject <PUDisplayAsset, _PLImageLoadingAsset> {

	BOOL _hidden;
	BOOL _favorite;
	BOOL _complete;
	BOOL _isPhotoIris;
	BOOL _hasAdjustments;
	BOOL _cloudIsDeletable;
	unsigned short _videoCpVisibilityState;
	short _savedAssetType;
	int _exifOrientation;
	int _avalanchePickType;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	double _duration;
	NSString* _burstIdentifier;
	NSString* _uniformTypeIdentifier;
	unsigned long long _persistenceState;
	unsigned long long _thumbnailIndex;
	NSString* _directory;
	NSString* _filename;
	NSDate* _trashedDate;
	NSDate* _adjustmentTimestamp;
	long long _videoCpDurationValue;
	NSArray* _faceRegions;
	NSString* _cloudIdentifier;
	long long _cloudPlaceholderKind;
	NSData* _locationData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) unsigned long long fullsizeDataFormat; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) long long mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;                      //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                         //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                        //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                             //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration;                                       //@synthesize duration=_duration - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                           //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite;                       //@synthesize favorite=_favorite - In the implementation block
@property (nonatomic,readonly) NSString * burstIdentifier;                            //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) unsigned long long sourceType; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;                      //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistenceState;                   //@synthesize persistenceState=_persistenceState - In the implementation block
@property (nonatomic,readonly) unsigned long long thumbnailIndex;                     //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (nonatomic,readonly) NSString * directory;                                  //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                  //@synthesize trashedDate=_trashedDate - In the implementation block
@property (nonatomic,readonly) NSDate * adjustmentTimestamp;                          //@synthesize adjustmentTimestamp=_adjustmentTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL complete;                                         //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSURL * ALAssetURL; 
@property (nonatomic,readonly) int exifOrientation;                                   //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,readonly) BOOL isHDVideo; 
@property (nonatomic,readonly) BOOL isJPEG; 
@property (nonatomic,readonly) BOOL isRAW; 
@property (nonatomic,readonly) BOOL isPartOfBurst; 
@property (nonatomic,readonly) BOOL isPhotoIris;                                      //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) long long videoCpDurationValue;                        //@synthesize videoCpDurationValue=_videoCpDurationValue - In the implementation block
@property (nonatomic,readonly) unsigned short videoCpVisibilityState;                 //@synthesize videoCpVisibilityState=_videoCpVisibilityState - In the implementation block
@property (nonatomic,readonly) BOOL hasAdjustments;                                   //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) NSArray * faceRegions;                                 //@synthesize faceRegions=_faceRegions - In the implementation block
@property (nonatomic,readonly) long long assetSource; 
@property (nonatomic,copy,readonly) NSString * cloudIdentifier;                       //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (nonatomic,readonly) long long cloudPlaceholderKind;                        //@synthesize cloudPlaceholderKind=_cloudPlaceholderKind - In the implementation block
@property (nonatomic,readonly) NSString * metadataDebugDescription; 
@property (nonatomic,readonly) int avalanchePickType;                                 //@synthesize avalanchePickType=_avalanchePickType - In the implementation block
@property (nonatomic,readonly) NSData * locationData;                                 //@synthesize locationData=_locationData - In the implementation block
@property (nonatomic,readonly) short savedAssetType;                                  //@synthesize savedAssetType=_savedAssetType - In the implementation block
@property (nonatomic,readonly) BOOL cloudIsDeletable;                                 //@synthesize cloudIsDeletable=_cloudIsDeletable - In the implementation block
+(long long)_pu_mediaTypeForAssets:(id)arg1 ;
+(id)pu_typeStringForMediaType:(long long)arg1 ;
+(id)pu_typeStringForAssets:(id)arg1 ;
+(long long)pu_commonMediaTypeForPhotoCount:(long long)arg1 videoCount:(long long)arg2 otherCount:(long long)arg3 ;
+(id)pu_typeStringForAssetsWithIdentifiers:(id)arg1 ;
+(id)pl_managedAssetsForAssets:(id)arg1 ;
+(void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1 ;
+(id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 ;
+(id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2 ;
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)identifierCode;
+(BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg1 hasAdjustments:(BOOL)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5 ;
+(BOOL)_isPhotoIrisPlaceholderWithPhotoIris:(BOOL)arg1 videoCpDuration:(long long)arg2 sourceType:(unsigned long long)arg3 ;
+(id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithOptions:(id)arg1 ;
+(id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
-(BOOL)isVideoSlowmo;
-(id)avAsset;
-(id)exif;
-(CGSize)thumbnailSize;
-(BOOL)hasThumbnail;
-(CGSize)sizeForFormat:(id)arg1 ;
-(CGSize)localSize;
-(BOOL)original;
-(BOOL)isPano;
-(id)getVideoAdjustmentPath;
-(id)partialIdentifier;
-(BOOL)hasFull;
-(unsigned long long)localFilesizeBytes;
-(unsigned long long)fullFilesizeBytes;
-(unsigned long long)originalFilesizeBytes;
-(BOOL)hasIris;
-(CGSize)originalSize;
-(CGSize)fullSize;
-(BOOL)isTemporaryPlaceholder;
-(SCD_Struct_PH1)photoIrisVideoDuration;
-(SCD_Struct_PH1)photoIrisStillDisplayTime;
-(unsigned long long)isContentEqualTo:(id)arg1 ;
-(NSString *)localizedGeoDescription;
-(unsigned long long)fullsizeDataFormat;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1 ;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)pl_managedAsset;
-(BOOL)isHidden;
-(NSString *)description;
-(double)duration;
-(int)orientation;
-(long long)imageOrientation;
-(int)exifOrientation;
-(CGSize)imageSize;
-(NSDate *)modificationDate;
-(CLLocation *)location;
-(unsigned long long)sourceType;
-(short)kind;
-(BOOL)isVideo;
-(BOOL)complete;
-(BOOL)hasLegacyAdjustments;
-(id)pathForFullsizeRenderImageFile;
-(id)pathForOriginalFile;
-(short)savedAssetType;
-(NSData *)locationData;
-(int)avalanchePickType;
-(id)pathForVideoPreviewFile;
-(id)pathForLargeThumbnailFile;
-(unsigned long long)effectiveThumbnailIndex;
-(void)generateLargeThumbnailFileIfNecessary;
-(NSString *)directory;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(id)pl_photoLibrary;
-(BOOL)isOriginalSRGB;
-(long long)videoCpDurationValue;
-(NSArray *)faceRegions;
-(unsigned short)videoCpVisibilityState;
-(id)pathForAdjustmentFile;
-(id)pathForSubstandardFullsizeRenderImageFile;
-(id)pathForSRGBLargeThumbnailFile;
-(id)pathForMediumThumbnailFile;
-(id)pathForMutationsDirectory;
-(id)fileURLForPrebakedLandscapeScrubberThumbnails;
-(id)fileURLForPrebakedPortraitScrubberThumbnails;
-(id)pathForAdjustmentDirectory;
-(id)pathForPenultimateFullsizeRenderImageFile;
-(id)fileURLForFullsizeRenderVideo;
-(id)pathForNonAdjustedFullsizeImageFile;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(id)fileURLForFullsizeRenderImage;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1 ;
-(BOOL)isLocatedAtCoordinates:(CGSize)arg1 ;
-(BOOL)isHDVideo;
-(BOOL)isIncludedInMoments;
-(BOOL)isIncludedInCloudFeeds;
-(BOOL)cloudIsDeletable;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(id)fileURLForPenultimateFullsizeRenderImage;
-(unsigned long long)burstSelectionTypes;
-(id)descriptionProperties;
-(id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(BOOL)arg3 ;
-(id)_createCommentPropertyObject;
-(id)fileURLForSubstandardFullsizeRenderImage;
-(id)fileURLForUnadjustedFullsizeImage;
-(id)fileURLForLargePreview;
-(id)fileURLForMediumPreview;
-(id)fileURLForVideoPreviewFile;
-(id)_fileURLForMetadataWithExtension:(id)arg1 ;
-(id)fileURLForAdjustedFullsizeImage;
-(id)fileURLForAdjustmentsDirectory;
-(id)__dictionaryWithContentsOfData:(id)arg1 ;
-(id)adjustmentsDebugMetadata;
-(long long)assetSource;
-(id)internalProperties;
-(id)PTPProperties;
-(id)embeddedThumbnailProperties;
-(void)fetchKeywordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fileURLForXMPFile;
-(id)fileURLForDiagnosticFile;
-(id)fileURLForMutationsDirectory;
-(id)fileURLForFullsizeImage;
-(unsigned long long)persistenceState;
-(id)duplicateProperties;
-(unsigned long long)mediaType;
-(BOOL)canPlayPhotoIris;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(BOOL)isStreamedVideo;
-(NSDate *)trashedDate;
-(BOOL)representsBurst;
-(BOOL)isCloudSharedAsset;
-(long long)cloudPlaceholderKind;
-(BOOL)isRAW;
-(NSString *)burstIdentifier;
-(BOOL)isCloudPlaceholder;
-(id)commentProperties;
-(BOOL)isFavorite;
-(BOOL)isPhotoIris;
-(BOOL)hasAdjustments;
-(id)mainFileURL;
-(void)fetchPropertySetsIfNeeded;
-(id)originalMetadataProperties;
-(id)photoIrisProperties;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(double)aspectRatio;
-(NSDate *)creationDate;
-(BOOL)hasPhotoColorAdjustments;
-(BOOL)isPhotoStreamPhoto;
-(unsigned long long)mediaSubtypes;
-(BOOL)isMogul;
-(short)kindSubtype;
-(id)momentProperties;
-(BOOL)isTimelapsePlaceholder;
-(NSDate *)adjustmentTimestamp;
-(unsigned long long)thumbnailIndex;
-(BOOL)isJPEG;
-(BOOL)isPhoto;
-(BOOL)isAudio;
-(NSString *)uniformTypeIdentifier;
-(id)detailedDebugDescriptionInLibrary:(id)arg1 ;
-(NSString *)metadataDebugDescription;
-(BOOL)canPerformSharingAction;
-(BOOL)isTrashed;
-(id)fileURLForVideoComplementFile;
-(NSURL *)ALAssetURL;
-(NSString *)cloudIdentifier;
-(NSString *)filename;
@end

