/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReader.h>
#import <iWorkImport/TSPDatabaseUnarchiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPDatabase, NSHashTable, NSString;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	TSPDatabase* _database;
	unsigned long long _databaseVersion;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSHashTable* _datas;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) BOOL didFinishResolvingReferences; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) BOOL isFromCopy; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
-(id)objectUUIDMap;
-(id)initWithComponent:(id)arg1 delegate:(id)arg2 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(void)unarchiveObjectWithIdentifierAsync:(long long)arg1 ;
-(id)newUnarchiverWithDatabaseObject:(id)arg1 ;
-(Message*)newDataMessageForDatabaseObject:(id)arg1 ;
-(Message*)newImageDataMessageForDatabaseObject:(id)arg1 ;
-(BOOL)validateObjectIdentifierForObject:(id)arg1 ;
-(id)dataForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)filenameFromOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 database:(id)arg4 databaseVersion:(unsigned long long)arg5 ;
-(void)dealloc;
-(id)init;
@end

