/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, SASportsAthleteComparisonSnippet, NSString;

@interface ACSportsAthleteComparisionUIController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	BOOL _showImages;

}

@property (nonatomic,retain) SASportsAthleteComparisonSnippet * snippet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_sizeOfCellAtSection:(unsigned long long)arg1 ;
-(void)_leagueAppButtonTouched:(id)arg1 ;
-(void)_attributionButtonTouched:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
@end

