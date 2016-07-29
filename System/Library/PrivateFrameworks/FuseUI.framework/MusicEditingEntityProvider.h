/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol MusicEntityProviding;
@class MusicEntityValueContext, NSMutableArray, NSArray, NSString;

@interface MusicEditingEntityProvider : NSObject <MusicEntityProviding> {

	id<MusicEntityProviding> _baseEntityProvider;
	MusicEntityValueContext* _cachedEntityValueContextForCustomLookup;
	NSMutableArray* _changeRecords;
	vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >* _entries;

}

@property (nonatomic,readonly) NSArray * changeRecords; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSections;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)hasEntities;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(id)initWithBaseEntityProvider:(id)arg1 ;
-(NSArray *)changeRecords;
-(BOOL)resetToCurrentStateOfBaseEntityProvider;
-(void)resetToOriginalStateReturningDeletedIndexPaths:(id*)arg1 andInsertedIndexPaths:(id*)arg2 ;
-(void)deleteItemAtIndexPath:(id)arg1 ;
-(void)insertEntityValueProvider:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_resetEntityValueContextOutput:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forEntry:(const EditingEntityProviderEntry*)arg2 ;
-(id)_entityValueProviderForEntry:(const EditingEntityProviderEntry*)arg1 ;
-(void)_registerChangeRecord:(id)arg1 ;
@end

