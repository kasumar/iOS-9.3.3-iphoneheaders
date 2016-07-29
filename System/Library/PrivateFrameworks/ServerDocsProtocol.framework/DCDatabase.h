/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSPersistentStoreCoordinator, DCService, NSURL, NSManagedObjectContext;

@interface DCDatabase : NSObject {

	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	DCService* _service;
	NSURL* _databaseURL;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSURL * databaseURL;                                                      //@synthesize databaseURL=_databaseURL - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                            //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * model;                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) DCService * service;                                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)_managedObjectModel;
+(id)databaseForService:(id)arg1 ;
-(void)reset;
-(NSManagedObjectModel *)model;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)saveWithError:(id*)arg1 ;
-(BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2 ;
-(void)_setupManagedObjectContext;
-(void)deleteDatabase;
-(BOOL)_databaseFileExists;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(DCService *)service;
-(NSURL *)databaseURL;
-(BOOL)save;
-(id)initWithService:(id)arg1 ;
-(void)removeUploadForPath:(id)arg1 ;
-(id)uploadForPath:(id)arg1 ;
-(id)uploadPaths;
-(id)allUploads;
-(id)documentIdentifierForPath:(id)arg1 ;
-(id)storedLocalMetadataForDocumentIdentifier:(id)arg1 ;
-(void)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 ;
-(void)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 ;
-(id)otherMetadataForDocumentIdentifier:(id)arg1 ;
-(id)otherMetadataForDocumentIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)setDocumentIdentifier:(id)arg1 forPath:(id)arg2 ;
-(void)removeOtherMetadataForDocumentIdentifier:(id)arg1 ;
-(void)removeStoredLocalMetadataForDocumentIdentifier:(id)arg1 ;
-(void)saveUploadFileURL:(id)arg1 generationIdentifier:(id)arg2 taskIdentifier:(id)arg3 forPath:(id)arg4 ;
-(void)saveUploadFileURL:(id)arg1 forPath:(id)arg2 ;
-(id)uploadForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)removeCancelledUpload:(id)arg1 ;
-(id)pathsForDocumentIdentifier:(id)arg1 ;
-(void)renamePath:(id)arg1 toPath:(id)arg2 ;
-(void)removePath:(id)arg1 ;
-(id)_databaseDirectory;
-(unsigned long long)numberOfPendingUploads;
-(void)setDatabaseURL:(NSURL *)arg1 ;
@end

