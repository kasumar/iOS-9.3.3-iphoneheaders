/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUNavigationController.h>
#import <libobjc.A.dylib/SKUIComposeReviewFormDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SKUIComposeReviewFormViewController, SUPlaceholderViewController, SKUIReviewMetadata, NSString;

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UIAlertViewDelegate> {

	SKUIComposeReviewFormViewController* _formViewController;
	SUPlaceholderViewController* _placeholderViewController;

}

@property (assign,nonatomic,__weak) id<SKUIComposeReviewDelegate> delegate; 
@property (nonatomic,copy,readonly) SKUIReviewMetadata * editedReviewMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setRating:(float)arg1 ;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(void)_loadReviewWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendDidSubmit;
-(void)_sendDidCancel;
-(void)submitReview;
-(void)_finishLoadWithOutput:(id)arg1 error:(id)arg2 ;
-(void)composeReviewFormDidCancel:(id)arg1 ;
-(void)composeReviewFormDidSubmit:(id)arg1 ;
-(void)loadReviewWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_cancelAction:(id)arg1 ;
@end

