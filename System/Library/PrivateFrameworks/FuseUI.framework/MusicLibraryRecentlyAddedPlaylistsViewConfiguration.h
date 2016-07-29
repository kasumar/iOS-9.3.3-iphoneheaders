/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration* _collectionViewConfiguration;
	BOOL _shouldForwardBasePropertyValues;

}

@property (nonatomic,readonly) unsigned long long entityLimit; 
+(unsigned long long)defaultEntityLimit;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setIconName:(id)arg1 ;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(id)initWithEntityLimit:(unsigned long long)arg1 ;
-(unsigned long long)entityLimit;
-(void)setUserActivityItemTypes:(id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

