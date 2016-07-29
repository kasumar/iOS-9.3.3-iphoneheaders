/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicLibraryBrowseCollectionViewController.h>

@class MusicEntityValueContext, NSMutableDictionary, MusicSectionEntityValueContext, MusicLibraryBrowseHeterogenousCollectionViewConfiguration;

@interface MusicLibraryBrowseHeterogenousCollectionViewController : MusicLibraryBrowseCollectionViewController {

	MusicEntityValueContext* _itemEntityValueContext;
	NSMutableDictionary* _layoutMetricsPerSection;
	MusicSectionEntityValueContext* _sectionEntityValueContext;

}

@property (nonatomic,readonly) MusicLibraryBrowseHeterogenousCollectionViewConfiguration * libraryViewConfiguration; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(id)layoutMetricsForSection:(unsigned long long)arg1 ;
-(id)_entityValueContextAtIndexPath:(id)arg1 ;
-(void)collectionViewTintColorDidChange:(id)arg1 ;
-(id)_sectionEntityValueContextForIndex:(unsigned long long)arg1 ;
-(id)_layoutMetrics;
-(void)_invalidateLayoutMetrics;
-(void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_layoutMetricsForCollectionViewContentDescriptor:(id)arg1 ;
@end

