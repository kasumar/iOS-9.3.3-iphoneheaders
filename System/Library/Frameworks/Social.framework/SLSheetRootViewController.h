/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SLComposeSheetConfigurationItemObserving.h>

@class NSArray, UITableViewController, SLSheetTitleView, UINavigationItem, UIViewController, SLComposeServiceViewController, UIView, UIImage, UITableView, NSString;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving> {

	NSArray* _configurationItems;
	UITableViewController* _tableViewController;
	SLSheetTitleView* _titleView;
	UINavigationItem* _navItem;
	UIViewController* _autoCompletionViewController;
	SLComposeServiceViewController* _delegate;
	UIView* _contentView;
	UIImage* _serviceIconImage;

}

@property (assign,nonatomic,__weak) SLComposeServiceViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImage * serviceIconImage;                                    //@synthesize serviceIconImage=_serviceIconImage - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,copy) NSArray * configurationItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(SLComposeServiceViewController *)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(SLComposeServiceViewController *)delegate;
-(id)navigationItem;
-(void)loadView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(NSArray *)configurationItems;
-(void)resetConfigurationItems;
-(double)_preferredTableViewHeight;
-(void)setServiceIconImage:(UIImage *)arg1 ;
-(void)_updateCellForConfigurationItem:(id)arg1 ;
-(void)observeConfigurationItems:(id)arg1 ;
-(void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2 ;
-(void)configurationItemDidChange:(id)arg1 ;
-(void)setPostButtonTitle:(id)arg1 ;
-(void)setPostButtonEnabled:(BOOL)arg1 ;
-(void)updateContentViewSize:(CGSize)arg1 ;
-(void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(/*^block*/id)arg3 ;
-(void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(/*^block*/id)arg1 ;
-(void)setConfigurationItems:(NSArray *)arg1 ;
-(UIImage *)serviceIconImage;
@end

