/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>

@protocol MusicClientContextConsumingSKUINavigationBarDisplayConfiguring;
@class UIViewController, NSString;

@interface MusicProfileTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIModalSourceViewProvider, SKUINavigationBarDisplayConfiguring> {

	UIViewController*<MusicClientContextConsuming>*<SKUINavigationBarDisplayConfiguring> _profileViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)previewMenuItems;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setClientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(BOOL)managesNavigationBarContents;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(long long)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 ;
@end
