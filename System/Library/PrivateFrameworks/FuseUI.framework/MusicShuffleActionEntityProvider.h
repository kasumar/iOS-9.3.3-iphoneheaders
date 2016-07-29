/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol MusicEntityProviding;
@class MusicShuffleActionEntityValueProvider, NSString;

@interface MusicShuffleActionEntityProvider : NSObject <MusicEntityProviding> {

	BOOL _editing;
	BOOL _hasShuffleAction;
	MusicShuffleActionEntityValueProvider* _shuffleActionEntityValueProvider;
	id<MusicEntityProviding> _sourceEntityProvider;

}

@property (nonatomic,readonly) id<MusicEntityProviding> sourceEntityProvider;              //@synthesize sourceEntityProvider=_sourceEntityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(BOOL)setEditing:(BOOL)arg1 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(id)initWithSourceEntityProvider:(id)arg1 ;
-(void)_sourceEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadHasShuffleActionAllowingInvalidation:(BOOL)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_shuffleActionEntityValueProvider;
-(BOOL)hasEntities;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(BOOL)hasShuffleAction;
-(id<MusicEntityProviding>)sourceEntityProvider;
@end

