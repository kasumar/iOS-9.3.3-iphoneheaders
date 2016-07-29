/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSADocumentRootDelegate.h>
#import <iWorkImport/TSPObjectContextDelegate.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <iWorkImport/TSKImportExportDelegate.h>

@protocol OS_dispatch_group, TSKImporter, TSAImportDelegate;
@class TSUTemporaryDirectory, NSURL, NSString, NSObject, NSMutableSet, NSOperationQueue, NSMutableArray, NSError, TSPObjectContext, TSUProgressContext, TSKCollaborationState, TSAUbiquitousRefreshQueue, NSUUID;

@interface TSAImportController : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate, NSFilePresenter, TSKImportExportDelegate> {

	TSUTemporaryDirectory* _temporaryDirectory;
	TSUTemporaryDirectory* _temporaryDFFDirectory;
	NSURL* _documentURL;
	NSString* _documentType;
	NSObject*<OS_dispatch_group> _passphraseCompletionGroup;
	id<TSKImporter> _importer;
	NSMutableSet* _importWarnings;
	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	NSMutableArray* _deferredWriters;
	struct {
		unsigned success : 1;
		unsigned isPasswordProtected : 1;
		unsigned isCleanedUp : 1;
		unsigned isImportCancelled : 1;
		unsigned preserveDocumentAfterImport : 1;
		unsigned shouldNotifyProgress : 1;
	}  _flags;
	id<TSAImportDelegate> _delegate;
	NSString* _sourcePath;
	NSError* _error;
	TSPObjectContext* _documentContext;
	TSUProgressContext* _progressContext;

}

@property (assign,nonatomic) id<TSAImportDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sourcePath;                                    //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,readonly) NSURL * temporaryURL; 
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) TSPObjectContext * documentContext;                       //@synthesize documentContext=_documentContext - In the implementation block
@property (nonatomic,readonly) long long documentTypeCategory; 
@property (nonatomic,retain) TSUProgressContext * progressContext;                       //@synthesize progressContext=_progressContext - In the implementation block
@property (assign,nonatomic) BOOL preserveDocumentAfterImport; 
@property (nonatomic,readonly) BOOL hasWarnings; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@property (nonatomic,readonly) BOOL isImportCancelled; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) id<TSKImporter> importer;                                 //@synthesize importer=_importer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@property (nonatomic,readonly) TSKCollaborationState * collaborationState; 
@property (nonatomic,readonly) TSAUbiquitousRefreshQueue * refreshQueue; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * baseUUIDForObjectUUID; 
@property (nonatomic,readonly) BOOL isInCollaborationMode; 
@property (nonatomic,readonly) BOOL isInReadOnlyMode; 
@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
-(void)removeFilePresenter;
-(id)additionalDocumentPropertiesForWrite;
-(id)packageDataForWrite;
-(BOOL)areNewExternalReferencesToDataAllowed;
-(BOOL)ignoreDocumentSupport;
-(void)addPersistenceWarnings:(id)arg1 ;
-(void)presentPersistenceError:(id)arg1 ;
-(NSString *)defaultDraftName;
-(void)removeWarning:(id)arg1 ;
-(id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3 ;
-(BOOL)import;
-(TSPObjectContext *)documentContext;
-(void)finishImportWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)willSaveImportedDocument;
-(void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)templateInfoWithName:(id)arg1 ;
-(id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2 ;
-(void)_setPresentedItemURL:(id)arg1 ;
-(void)prepareForImportDisplayingProgress:(BOOL)arg1 ;
-(BOOL)beginImport;
-(Class)importerClass;
-(void)cancelImport;
-(void)showProgressIfNeededForURL:(id)arg1 ;
-(void)_beginImport;
-(void)didBeginImportToTemporaryURL:(id)arg1 ;
-(void)_continueImportWithSuccess:(BOOL)arg1 error:(id)arg2 completedSteps:(int)arg3 ;
-(id)_prepareTemplate:(id)arg1 ;
-(id)makeObjectContextWithTemplateInfo:(id)arg1 error:(id*)arg2 ;
-(void)_performImportWithCompletedSteps:(int)arg1 ;
-(void)didSaveImportedDocumentWithPassphrase:(id)arg1 ;
-(NSURL *)temporaryURL;
-(BOOL)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id*)arg5 ;
-(BOOL)needsFileCoordination;
-(id)initWithPath:(id)arg1 delegate:(id)arg2 ;
-(long long)documentTypeCategory;
-(void)beginImportAsync;
-(BOOL)isImportCancelled;
-(void)setPreserveDocumentAfterImport:(BOOL)arg1 ;
-(BOOL)preserveDocumentAfterImport;
-(BOOL)hasWarnings;
-(BOOL)isBrowsingVersions;
-(void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2 ;
-(void)setDelegate:(id<TSAImportDelegate>)arg1 ;
-(void)dealloc;
-(id<TSAImportDelegate>)delegate;
-(NSString *)name;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSError *)error;
-(id<TSKImporter>)importer;
-(BOOL)isPasswordProtected;
-(NSString *)sourcePath;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(void)addWarning:(id)arg1 ;
-(id)warnings;
@end

