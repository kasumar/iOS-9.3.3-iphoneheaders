/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UIImage, SKUIResourceLoader, UITableView, NSString;

@interface MSCLAlbumSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _albumItems;
	BOOL _loading;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;
	long long _selectedItemIndex;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;
	NSString* _headerText;

}

@property (nonatomic,copy) NSArray * albumItems;                         //@synthesize albumItems=_albumItems - In the implementation block
@property (nonatomic,retain) NSString * headerText;                      //@synthesize headerText=_headerText - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) long long selectedItemIndex;                //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (nonatomic,copy) id selectionBlock;                            //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isLoading;
-(id)_placeholderImage;
-(void)setLoading:(BOOL)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_resourceLoader;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(id)selectionBlock;
-(id)_imageDataConsumer;
-(void)setSelectionBlock:(id)arg1 ;
-(void)setAlbumItems:(NSArray *)arg1 ;
-(id)_imageForItemIndex:(long long)arg1 ;
-(NSArray *)albumItems;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
@end

