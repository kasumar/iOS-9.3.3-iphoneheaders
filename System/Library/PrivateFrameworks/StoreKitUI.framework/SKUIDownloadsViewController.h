/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SKUIDownloadsChildViewControllerDelegate.h>

@class SKUIImageDataConsumer, SSDownloadManager, NSArray, NSMutableDictionary, NSCache, SKUIIPhoneDownloadsViewController, SKUIIPadDownloadsViewController, UIImage, NSString;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate> {

	SKUIImageDataConsumer* _consumer;
	SSDownloadManager* _downloadManager;
	NSArray* _downloads;
	NSMutableDictionary* _imageOperations;
	NSCache* _images;
	SKUIIPhoneDownloadsViewController* _iphoneViewController;
	SKUIIPadDownloadsViewController* _ipadViewController;
	UIImage* _nullImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_sizeClassForSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)childViewController:(id)arg1 artworkForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 performActionForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 removeDownloads:(id)arg2 ;
-(void)_reloadView;
-(void)_reloadManagerFromServer;
-(void)_reloadBadge;
-(void)_reloadViewControllerWithSize:(CGSize)arg1 ;
-(void)_setArtwork:(id)arg1 forURLString:(id)arg2 ;
@end

