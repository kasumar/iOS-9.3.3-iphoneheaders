/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSADocumentRootDelegate.h>
#import <iWorkImport/TSPObjectContextDelegate.h>

@class NSString, TSKCollaborationState, TSAUbiquitousRefreshQueue, TSUTemporaryDirectory, TSPObjectContext, NSURL, TSADocumentRoot, NSUUID;

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {

	BOOL _isClosed;
	TSUTemporaryDirectory* _tempDirForSupport;
	TSPObjectContext* _context;
	NSString* _documentPasswordHint;
	NSURL* _URL;

}

@property (nonatomic,readonly) TSADocumentRoot * documentRoot; 
@property (nonatomic,readonly) BOOL skipDocumentUpgrade; 
@property (nonatomic,retain) TSPObjectContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * documentPasswordHint;                         //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
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
-(id)documentPasswordHintForWrite;
-(id)supportDirectoryURL;
-(NSString *)documentPasswordHint;
-(void)presentPersistenceError:(id)arg1 ;
-(void)documentDidLoad;
-(NSString *)documentCachePath;
-(id)initWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 error:(id*)arg4 passphrase:(id)arg5 ;
-(BOOL)skipDocumentUpgrade;
-(void)dealloc;
-(NSString *)name;
-(TSPObjectContext *)context;
-(NSURL *)URL;
-(void)close;
-(void)setContext:(TSPObjectContext *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(TSADocumentRoot *)documentRoot;
@end

