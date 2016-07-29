/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <libobjc.A.dylib/SPUISearchResultDetailsViewController.h>

@protocol SPUISearchResultDetailsViewControllerDelegate;
@class UIColor, NSURLSessionDataTask, SPSearchResult, SPSearchResultSection, NSArray, NSString;

@interface SPUISearchMoviesViewController : UICollectionViewController <SPUISearchResultDetailsViewController> {

	NSURLSessionDataTask* _dataTask;
	id<SPUISearchResultDetailsViewControllerDelegate> actionDelegate;
	SPSearchResult* _result;
	SPSearchResultSection* _section;
	NSArray* _movies;

}

@property (retain) SPSearchResult * result;                                                       //@synthesize result=_result - In the implementation block
@property (retain) SPSearchResultSection * section;                                               //@synthesize section=_section - In the implementation block
@property (retain) NSArray * movies;                                                              //@synthesize movies=_movies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<SPUISearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) BOOL wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2 ;
-(void)reloadData;
-(SPSearchResultSection *)section;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(SPSearchResult *)result;
-(void)setSection:(SPSearchResultSection *)arg1 ;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(void)setResult:(SPSearchResult *)arg1 ;
-(void)setActionDelegate:(id<SPUISearchResultDetailsViewControllerDelegate>)arg1 ;
-(id<SPUISearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(BOOL)wantsInset;
-(UIColor *)contentBackgroundColor;
@end

