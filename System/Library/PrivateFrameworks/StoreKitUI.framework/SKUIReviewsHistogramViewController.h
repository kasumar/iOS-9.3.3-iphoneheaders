/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIReviewsHistogramView, SKUIReviewList, NSString, UIControl, NSArray;

@interface SKUIReviewsHistogramViewController : UIViewController {

	SKUIClientContext* _clientContext;
	SKUIReviewsHistogramView* _histogramView;
	SKUIReviewList* _reviewList;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIReviewList * reviewList;                    //@synthesize reviewList=_reviewList - In the implementation block
@property (nonatomic,copy) NSString * versionString; 
@property (nonatomic,readonly) UIControl * segmentedControl; 
@property (nonatomic,copy) NSArray * segmentedControlTitles; 
@property (assign,nonatomic) long long selectedSegmentIndex; 
@property (nonatomic,readonly) UIControl * starRatingControl; 
@property (assign,nonatomic) long long personalStarRating; 
@property (nonatomic,readonly) UIControl * appSupportButton; 
@property (nonatomic,readonly) UIControl * writeAReviewButton; 
-(void)loadView;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(UIControl *)segmentedControl;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(NSString *)versionString;
-(UIControl *)appSupportButton;
-(UIControl *)starRatingControl;
-(UIControl *)writeAReviewButton;
-(long long)personalStarRating;
-(void)setReviewList:(SKUIReviewList *)arg1 ;
-(void)setSegmentedControlTitles:(NSArray *)arg1 ;
-(void)setVersionString:(NSString *)arg1 ;
-(void)setPersonalStarRating:(long long)arg1 ;
-(NSArray *)segmentedControlTitles;
-(id)_histogramView;
-(void)_reloadHistogram;
-(SKUIReviewList *)reviewList;
@end

