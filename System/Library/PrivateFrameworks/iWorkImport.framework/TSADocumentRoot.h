/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPDocumentRoot.h>
#import <iWorkImport/TSKImportExportDelegate.h>

@protocol OS_dispatch_queue;
@class TSUWeakReference, NSMutableDictionary, TSPLazyReference, NSMutableSet, NSString, TSCECalculationEngine, TSAFunctionBrowserState, TSTCustomFormatList, TSKCustomFormatList, TSAShortcutController, TSAAnnotationCache, NSObject, SFUCryptoKey, NSArray, TSKViewState, NSSet;

@interface TSADocumentRoot : TSWPDocumentRoot <TSKImportExportDelegate> {

	int _needsToCaptureViewState;
	TSUWeakReference* _delegateReference;
	NSMutableDictionary* _upgradeState;
	TSPLazyReference* _viewStateReference;
	NSMutableSet* _warnings;
	NSString* _documentLanguage;
	unsigned long long _documentLanguageWritingDirection;
	TSCECalculationEngine* _calculationEngine;
	TSAFunctionBrowserState* _functionBrowserState;
	TSTCustomFormatList* _deprecatedTablesCustomFormatList;
	TSKCustomFormatList* _tablesCustomFormatList;
	TSAShortcutController* _shortcutController;
	TSAAnnotationCache* _annotationCache;
	BOOL _didLoadControllers;
	BOOL _needsMovieCompatibilityUpgrade;
	BOOL _isClosed;
	BOOL _documentLocaleWasUpdated;
	NSString* _templateIdentifier;
	long long _documentCacheOnceToken;
	NSObject*<OS_dispatch_queue> _documentCacheDecryptionKeyAccessQueue;
	SFUCryptoKey* _documentCacheDecryptionKey;
	BOOL _documentCurrentlyImporting;
	BOOL _didLoadDocumentFromRevert;
	BOOL _hasPreUFFVersion;
	NSArray* _buildVersionHistory;

}

@property (nonatomic,readonly) BOOL isClosed;                                                                  //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) BOOL documentLocaleWasUpdated;                                                  //@synthesize documentLocaleWasUpdated=_documentLocaleWasUpdated - In the implementation block
@property (nonatomic,readonly) TSKViewState * viewState; 
@property (nonatomic,readonly) NSSet * missingFontWarningMessages; 
@property (assign,getter=isDocumentCurrentlyImporting,nonatomic) BOOL documentCurrentlyImporting;              //@synthesize documentCurrentlyImporting=_documentCurrentlyImporting - In the implementation block
@property (assign,nonatomic) BOOL needsMovieCompatibilityUpgrade; 
@property (assign,nonatomic,__weak) id<TSADocumentRootDelegate> delegate; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,copy) NSArray * buildVersionHistory;                                                      //@synthesize buildVersionHistory=_buildVersionHistory - In the implementation block
@property (nonatomic,copy) NSString * templateIdentifier; 
@property (assign,nonatomic) BOOL didLoadDocumentFromRevert;                                                   //@synthesize didLoadDocumentFromRevert=_didLoadDocumentFromRevert - In the implementation block
@property (assign,nonatomic) BOOL hasPreUFFVersion;                                                            //@synthesize hasPreUFFVersion=_hasPreUFFVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
+(void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 ;
+(void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 ;
+(void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2 ;
+(void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2 ;
+(id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)buildVersionHistoryPath;
+(CGSize)previewImageMaxSizeForType:(unsigned long long)arg1 ;
+(BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4 ;
+(BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4 ;
+(id)supportedPreviewImageExtensions;
+(void)removeExistingPreviewsForDocumentAtPath:(id)arg1 ;
+(void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2 ;
+(CGSize)previewImageSizeForType:(unsigned long long)arg1 ;
+(id)buildVersionHistoryPathPreUFF;
+(id)supportedScalablePreviewNames;
+(BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 ;
+(BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 ;
+(void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
+(unsigned long long)previewTypeForCurrentDevice;
+(id)keyPathsForValuesAffectingMaxMediaItemFileSize;
-(id)namedTextStyles;
-(id)additionalDocumentPropertiesForWrite;
-(id)packageDataForWrite;
-(BOOL)hasPreUFFVersion;
-(void)pauseRecalculation;
-(void)resumeRecalculation;
-(void)pauseRecalculationSometimeSoon;
-(void)setCalculationEngine:(id)arg1 ;
-(void)documentDidLoad;
-(void)saveToArchive:(DocumentArchive*)arg1 archiver:(id)arg2 ;
-(id)calculationEngine;
-(void)p_updateDocumentLanguageToCurrent;
-(id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1 ;
-(void)setBuildVersionHistory:(NSArray *)arg1 ;
-(void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1 ;
-(void)setDocumentCreationLocale:(id)arg1 ;
-(NSArray *)buildVersionHistory;
-(void)setDocumentLanguage:(id)arg1 ;
-(id)documentLanguage;
-(id)customFormatList;
-(id)upgradeState;
-(void)setHasPreUFFVersion:(BOOL)arg1 ;
-(void)loadFromArchive:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)stashUpgradeState:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_upgradeDocumentCreationLocale;
-(void)setShortcutController:(id)arg1 ;
-(void)setFunctionBrowserState:(id)arg1 ;
-(void)p_upgradeCustomFormatList;
-(void)p_upgradeTablesIfNeeded;
-(void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
-(void)upgradeToSingleStylesheet;
-(void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
-(void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1 ;
-(void)upgradeCellStyles;
-(void)upgradeTextboxPresets;
-(BOOL)isMultiPageForQuickLook;
-(void)willClose;
-(void)fulfillPasteboardPromises;
-(BOOL)hasICloudConflict;
-(id)captureViewState;
-(id)createViewStateRootForContinuation:(BOOL)arg1 ;
-(void)updateViewStateWithRoot:(id)arg1 ;
-(id)previewImageForSize:(CGSize)arg1 ;
-(void)blockForRecalcWithTimeout:(double)arg1 ;
-(id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2 ;
-(long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2 ;
-(id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2 ;
-(void)p_registerAllFormulasAfterImport;
-(BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned long long*)arg3 ;
-(id)protected_defaultTextPresetOrdering;
-(void)pUpgradeHyperlinksInStorage:(id)arg1 ;
-(void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1 ;
-(void)pUpgradeHyperlinks;
-(void)p_removeStyles:(id)arg1 ;
-(void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2 ;
-(void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2 ;
-(void)enumerateStylesheetsUsingBlock:(/*^block*/id)arg1 ;
-(void)p_cleanupColumnStyles;
-(id)referencedStylesOfClass:(Class)arg1 ;
-(id)documentCachePath;
-(void)p_initializeDocumentCacheIfNeeded;
-(id)p_documentCacheDecryptionKeyAccessQueue;
-(id)p_documentCacheDecryptionKey;
-(void)documentCacheWasInvalidated;
-(NSString *)defaultDraftName;
-(void)removeWarning:(id)arg1 ;
-(NSString *)templateIdentifier;
-(void)setTemplateIdentifier:(NSString *)arg1 ;
-(BOOL)needsMovieCompatibilityUpgrade;
-(void)setNeedsMovieCompatibilityUpgrade:(BOOL)arg1 ;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg1 ;
-(void)updateWritingDirection:(unsigned long long)arg1 ;
-(id)makeStyleMapper;
-(id)makeIsolatedStyleMapper;
-(void)initializeForImport;
-(id)annotationCache;
-(void)setAnnotationCache:(id)arg1 ;
-(id)shortcutController;
-(id)functionBrowserState;
-(void)setCustomFormatListToUpgrade:(id)arg1 ;
-(void)captureViewStateIfNeeded;
-(void)invalidateViewState;
-(void)resetViewState;
-(void)suspendBackgroundActivities;
-(void)resumeBackgroundActivities;
-(void)suspendThumbnailing;
-(void)resumeThumbnailing;
-(void)prepareToGeneratePreview;
-(NSSet *)missingFontWarningMessages;
-(id)consolidatedDocumentWarningsFromWarnings:(id)arg1 ;
-(void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3 ;
-(void)didDownloadRemoteData:(id)arg1 ;
-(void)importerDidFinish:(id)arg1 ;
-(id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3 ;
-(BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3 ;
-(void)prepareForSavingAsTemplate;
-(void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2 ;
-(void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1 ;
-(BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2 ;
-(id)dataFromDocumentCachePath:(id)arg1 ;
-(void)didSaveWithEncryptionChange;
-(BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2 ;
-(CGImageSourceRef)newImageSourceForDocumentCachePath:(id)arg1 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg1 ;
-(void)changeDocumentCacheFileProtection:(id)arg1 ;
-(id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2 ;
-(BOOL)documentLocaleWasUpdated;
-(BOOL)isDocumentCurrentlyImporting;
-(void)setDocumentCurrentlyImporting:(BOOL)arg1 ;
-(BOOL)didLoadDocumentFromRevert;
-(void)setDidLoadDocumentFromRevert:(BOOL)arg1 ;
-(void)setDelegate:(id<TSADocumentRootDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TSADocumentRootDelegate>)delegate;
-(NSString *)name;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)writingDirection;
-(void)willEnterForeground;
-(BOOL)isClosed;
-(TSKViewState *)viewState;
-(id)previewImage;
-(void)didEnterBackground;
-(void)addWarning:(id)arg1 ;
-(id)warnings;
@end

