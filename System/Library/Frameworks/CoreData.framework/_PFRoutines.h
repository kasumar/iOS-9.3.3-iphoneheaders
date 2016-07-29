/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFRoutines : NSObject
+(id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(/*^block*/id)arg2 ;
+(id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3 ;
+(id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(BOOL)arg2 ;
+(BOOL)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3 ;
+(id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3 ;
+(id)_frameworkHash;
+(id)_getPFBundleVersionNumber;
+(id)_groupObjectsByRootEntity:(id)arg1 ;
+(id)_coalescedPrefetchKeypaths:(id)arg1 ;
+(unsigned long long)_generateHashForString:(id)arg1 ;
+(id)_getUUID;
+(BOOL)_doNameAndTypeCheck:(id)arg1 ;
+(BOOL)convertCString:(const char*)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3 ;
+(id)valueForProcessArgument:(id)arg1 ;
+(id)writePFExternalReferenceDataToInterimFile:(id)arg1 ;
+(BOOL)moveInterimFileToPermanentLocation:(id)arg1 ;
+(void*)readExternalReferenceDataFromFile:(id)arg1 ;
+(void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(NSRange)arg3 ;
+(id)newMappedDataForExternalReference:(id)arg1 ;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)arg1 ;
+(void)deleteFileForPFExternalReferenceData:(id)arg1 ;
+(BOOL)createExternalReferenceLinkFromPath:(const char*)arg1 toPath:(const char*)arg2 protectionLevel:(int)arg3 ;
+(void)cleanupExternalReferenceLink:(const char*)arg1 ;
+(void)attemptToUpdatePermissionsForFileAtPath:(const char*)arg1 toLevel:(int)arg2 ;
+(void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(id)_createNicksBase64EncodedStringFromData:(id)arg1 ;
+(id)decodeValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)encodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(void)getIndexes:(unsigned*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3 ;
+(id)newOrderedSetFromCollection:(id)arg1 ;
+(id)anyObjectFromCollection:(id)arg1 ;
+(id)newArrayOfObjectIDsFromCollection:(id)arg1 ;
+(id)newSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)newOrderedSetOfObjectIDsFromCollection:(id)arg1 ;
+(BOOL)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByEntity:(id)arg1 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByRootEntity:(id)arg1 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIntoHierarchies:(id)arg1 ;
+(BOOL)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2 ;
+(BOOL)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
+(BOOL)isUbiquitousItemAtURL:(id)arg1 ;
-(id)_groupObjectsWithUniqueAttributesByRootEntity:(id)arg1 ;
@end

