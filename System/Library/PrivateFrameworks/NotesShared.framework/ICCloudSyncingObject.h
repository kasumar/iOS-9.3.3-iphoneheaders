/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSMapTable, NSMutableSet, NSMutableDictionary, ICCloudState, NSString, NSData, CKRecord;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject> {

	BOOL deletedByThisDevice;
	BOOL needsToLoadDecryptedValues;
	NSMapTable* versionsByOperation;
	NSMutableSet* temporaryAssets;
	long long failedToSyncCount;
	long long numberOfPushAttemptsToWaitCount;
	NSMutableDictionary* _decryptedValues;

}

@property (nonatomic,retain) ICCloudState * cloudState; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL needsToBeFetchedFromCloud; 
@property (assign,nonatomic) BOOL needsInitialFetchFromCloud; 
@property (assign,nonatomic) BOOL markedForDeletion; 
@property (assign,nonatomic) BOOL isPasswordProtected; 
@property (assign,nonatomic) long long cryptoIterationCount; 
@property (nonatomic,retain) NSData * cryptoSalt; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (nonatomic,retain) NSData * cryptoWrappedKey; 
@property (nonatomic,retain) NSString * passwordHint; 
@property (nonatomic,retain) NSData * unappliedEncryptedRecord; 
@property (nonatomic,retain) CKRecord * serverRecord; 
@property (nonatomic,readonly) BOOL shouldBeIgnoredForSync; 
@property (nonatomic,retain) NSData * encryptedValuesJSON; 
@property (nonatomic,retain) NSMapTable * versionsByOperation; 
@property (nonatomic,retain) NSMutableSet * temporaryAssets; 
@property (assign,nonatomic) BOOL deletedByThisDevice; 
@property (assign,nonatomic) long long failedToSyncCount; 
@property (assign,nonatomic) long long numberOfPushAttemptsToWaitCount; 
@property (nonatomic,readonly) NSMutableDictionary * decryptedValues;                //@synthesize decryptedValues=_decryptedValues - In the implementation block
@property (assign,nonatomic) BOOL needsToLoadDecryptedValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationWillTerminate:(id)arg1 ;
+(void)initialize;
+(void)deleteAllTemporaryAssetFilesForAllObjects;
+(id)allCloudObjects;
+(BOOL)needsToReFetchServerRecordValue:(id)arg1 ;
+(id)temporaryAssetDirectoryURL;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+(id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
-(void)dealloc;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(BOOL)isDeletable;
-(id)recordID;
-(id)loggingIdentifier;
-(void)updateChangeCount;
-(void)unmarkForDeletion;
-(void)markForDeletion;
-(id)loggingDescriptionValues;
-(void)setDeletedByThisDevice:(BOOL)arg1 ;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(void)deleteFromLocalDatabase;
-(BOOL)isValidObject;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 ;
-(void)setCryptoTag:(NSData *)arg1 ;
-(void)setCryptoInitializationVector:(NSData *)arg1 ;
-(void)saveAndClearDecryptedData;
-(BOOL)supportsEncryptedValuesDictionary;
-(id)parentEncryptableObject;
-(void)initializeCryptoProperties;
-(void)initializeCryptoPropertiesFromObject:(id)arg1 ;
-(void)setNeedsToBeFetchedFromCloud:(BOOL)arg1 ;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(void)setNeedsToLoadDecryptedValues:(BOOL)arg1 ;
-(void)setVersionsByOperation:(NSMapTable *)arg1 ;
-(void)setTemporaryAssets:(NSMutableSet *)arg1 ;
-(void)registerForCryptorNotifications;
-(void)deleteAllTemporaryAssetFiles;
-(void)clearServerRecord;
-(long long)numberOfPushAttemptsToWaitCount;
-(void)setNumberOfPushAttemptsToWaitCount:(long long)arg1 ;
-(long long)failedToSyncCount;
-(void)setFailedToSyncCount:(long long)arg1 ;
-(id)loggingDescription;
-(void)deleteChangeTokensAndReSync;
-(void)resetFailureCounts;
-(BOOL)supportsDeletionByTTL;
-(BOOL)isInCloud;
-(id)threadUnsafeNewlyCreatedRecord;
-(id)assetForData:(id)arg1 ;
-(BOOL)hasSuccessfullyPushedLatestVersionToCloud;
-(void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg1 ;
-(void)loadDecryptedValuesIfNecessary;
-(void)decryptAndMergeEncryptedJSON:(id)arg1 ;
-(void)saveEncryptedJSON;
-(NSMapTable *)versionsByOperation;
-(void)setInCloud:(BOOL)arg1 ;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg1 ;
-(void)fixBrokenReferences;
-(void)deleteTemporaryAssetFilesForOperation:(id)arg1 ;
-(NSMutableSet *)temporaryAssets;
-(void)deleteTemporaryFilesForAsset:(id)arg1 ;
-(BOOL)deletedByThisDevice;
-(id)objectsToBeDeletedBeforeThisObject;
-(void)saveAndClearDecryptedDataIfNecessary;
-(BOOL)needsToLoadDecryptedValues;
-(BOOL)isEncryptableKeyBinaryData:(id)arg1 ;
-(NSMutableDictionary *)decryptedValues;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(id)primitiveValueForEncryptableKey:(id)arg1 ;
-(id)decryptedValueForKey:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(void)setDecryptedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 error:(id)arg2 ;
-(BOOL)validateIdentifier:(inout id*)arg1 error:(out id*)arg2 ;
-(void)clearChangeCount;
-(void)incrementFailureCounts;
-(void)decrementFailureCounts;
-(BOOL)shouldBeIgnoredForSync;
-(id)valueForEncryptableKey:(id)arg1 ;
-(void)setValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(id)cryptoMasterKey;
-(void)setCryptoMasterKey:(id)arg1 ;
-(id)cryptoPassphraseVerifier;
-(void)resetUniqueIdentifier;
-(id)recordName;
-(id)recordType;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(id)recordZoneID;
@end

