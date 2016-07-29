/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReaderDelegate.h>
#import <iWorkImport/TSPLazyReferenceDelegate.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSHashTable, NSMutableArray, NSString;

@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate> {

	NSObject*<OS_dispatch_queue> _lazyReferenceQueue;
	NSHashTable* _lazyReferences;
	NSHashTable* _lazyReferenceCopies;
	NSMutableArray* _lazyReferenceObserverBlocks;
	NSObject*<OS_dispatch_queue> _externalReferenceQueue;
	hash_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > >* _externalReferences;
	vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> >* _repeatedExternalReferences;
	BOOL _success;

}

@property (nonatomic,readonly) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) NSUUID * baseObjectUUID; 
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) BOOL isFromCopy; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
-(unsigned long long)fileFormatVersion;
-(id)objectForIdentifier:(long long)arg1 ;
-(BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3 ;
-(void)lazyReference:(id)arg1 didCreateCopy:(id)arg2 ;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)resolveExternalReferences;
-(void)setLazyReferencesDelegateToObjectContext;
-(void)readDidFail;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(NSUUID *)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(id)contextForReader:(id)arg1 ;
-(id)lazyReferenceDelegateForReader:(id)arg1 ;
-(ExternalReferenceInfo*)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)objectDelegateForReader:(id)arg1 ;
-(id)init;
-(id)context;
-(BOOL)success;
-(unsigned char)packageIdentifier;
@end

