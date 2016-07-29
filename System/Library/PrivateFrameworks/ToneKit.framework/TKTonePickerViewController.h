/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/TKTonePickerControllerDelegate.h>
#import <libobjc.A.dylib/TKTonePickerControllerDelegateInternal.h>
#import <libobjc.A.dylib/TKTonePickerTableViewControllerHelper.h>
#import <libobjc.A.dylib/TKTonePickerTableViewLayoutMarginsObserver.h>
#import <libobjc.A.dylib/TKTonePickerTableViewSeparatorObserver.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDismissalDelegate.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@protocol TKTonePickerViewControllerDelegate, TKTonePickerStyleProvider;
@class TKTonePickerController, UIImage, TKTonePickerTableViewCellLayoutManager, TKToneClassicsTableViewController, UIBarButtonItem, TKVibrationPickerViewController, UIView, NSMutableArray, MPMediaPickerController, MPMusicPlayerController, NSString, NSNumber;

@interface TKTonePickerViewController : UITableViewController <TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, MPMediaPickerControllerDelegate> {

	BOOL _showsStoreButtonInNavigationBar;
	BOOL _needsScrollPositionReset;
	BOOL _showsMedia;
	id<TKTonePickerViewControllerDelegate> _delegate;
	TKTonePickerController* _tonePickerController;
	UIImage* _checkmarkImage;
	TKTonePickerTableViewCellLayoutManager* _tableViewCellLayoutManager;
	TKToneClassicsTableViewController* _toneClassicsTableViewController;
	UIBarButtonItem* _storeBarButtonItem;
	TKVibrationPickerViewController* _vibrationPickerViewController;
	id<TKTonePickerStyleProvider> _styleProvider;
	UIView* _defaultSectionHeaderView;
	UIView* _mediaSectionHeaderView;
	NSMutableArray* _regularToneSectionHeaderViews;
	NSMutableArray* _mediaItems;
	MPMediaPickerController* _mediaPickerController;
	MPMusicPlayerController* _storedMusicPlayer;

}

@property (nonatomic,readonly) int alertType; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) BOOL showsDefault; 
@property (nonatomic,copy) NSString * defaultToneIdentifier; 
@property (assign,nonatomic) BOOL showsNone; 
@property (assign,getter=isNoneAtTop,nonatomic) BOOL noneAtTop; 
@property (nonatomic,copy) NSString * noneString; 
@property (assign,nonatomic) BOOL showsNothingSelected; 
@property (assign,nonatomic) BOOL showsStoreButtonInNavigationBar; 
@property (nonatomic,copy) NSString * selectedToneIdentifier; 
@property (assign,nonatomic) id<TKTonePickerViewControllerDelegate> delegate;                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsMedia;                                                                                                               //@synthesize showsMedia=_showsMedia - In the implementation block
@property (assign,getter=isMediaAtTop,nonatomic) BOOL mediaAtTop; 
@property (nonatomic,copy) NSNumber * selectedMediaIdentifier; 
@property (assign,nonatomic) BOOL showsVibrations; 
@property (nonatomic,copy) NSString * selectedVibrationIdentifier; 
@property (nonatomic,retain) id<TKTonePickerStyleProvider> styleProvider; 
@property (setter=_setTonePickerController:,nonatomic,retain) TKTonePickerController * _tonePickerController;                                               //@synthesize tonePickerController=_tonePickerController - In the implementation block
@property (setter=_setStyleProvider:,nonatomic,retain) id<TKTonePickerStyleProvider> _styleProvider;                                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (setter=_setCheckmarkImage:,nonatomic,retain) UIImage * _checkmarkImage;                                                                          //@synthesize checkmarkImage=_checkmarkImage - In the implementation block
@property (setter=_setTableViewCellLayoutManager:,nonatomic,retain) TKTonePickerTableViewCellLayoutManager * _tableViewCellLayoutManager;                   //@synthesize tableViewCellLayoutManager=_tableViewCellLayoutManager - In the implementation block
@property (assign,setter=_setNeedsScrollPositionReset:,nonatomic) BOOL _needsScrollPositionReset;                                                           //@synthesize needsScrollPositionReset=_needsScrollPositionReset - In the implementation block
@property (assign,setter=_setShowsStoreButtonInNavigationBar:,nonatomic) BOOL _showsStoreButtonInNavigationBar;                                             //@synthesize showsStoreButtonInNavigationBar=_showsStoreButtonInNavigationBar - In the implementation block
@property (setter=_setStoreBarButtonItem:,nonatomic,retain) UIBarButtonItem * _storeBarButtonItem;                                                          //@synthesize storeBarButtonItem=_storeBarButtonItem - In the implementation block
@property (setter=_setDefaultSectionHeaderView:,nonatomic,retain) UIView * _defaultSectionHeaderView;                                                       //@synthesize defaultSectionHeaderView=_defaultSectionHeaderView - In the implementation block
@property (setter=_setMediaSectionHeaderView:,nonatomic,retain) UIView * _mediaSectionHeaderView;                                                           //@synthesize mediaSectionHeaderView=_mediaSectionHeaderView - In the implementation block
@property (setter=_setRegularToneSectionHeaderViews:,nonatomic,retain) NSMutableArray * _regularToneSectionHeaderViews;                                     //@synthesize regularToneSectionHeaderViews=_regularToneSectionHeaderViews - In the implementation block
@property (setter=_setMediaPickerController:,nonatomic,retain) MPMediaPickerController * _mediaPickerController;                                            //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (setter=_setMediaItems:,nonatomic,retain) NSMutableArray * _mediaItems;                                                                           //@synthesize mediaItems=_mediaItems - In the implementation block
@property (setter=_setStoredMusicPlayer:,nonatomic,retain) MPMusicPlayerController * _storedMusicPlayer;                                                    //@synthesize storedMusicPlayer=_storedMusicPlayer - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerController * _musicPlayer; 
@property (setter=_setToneClassicsTableViewController:,nonatomic,retain) TKToneClassicsTableViewController * _toneClassicsTableViewController;              //@synthesize toneClassicsTableViewController=_toneClassicsTableViewController - In the implementation block
@property (setter=_setVibrationPickerViewController:,nonatomic,retain) TKVibrationPickerViewController * _vibrationPickerViewController;                    //@synthesize vibrationPickerViewController=_vibrationPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TKTonePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<TKTonePickerViewControllerDelegate>)delegate;
-(void)applicationWillSuspend;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<TKTonePickerStyleProvider>)_styleProvider;
-(void)_setStyleProvider:(id)arg1 ;
-(UIImage *)_checkmarkImage;
-(void)_reloadData;
-(int)alertType;
-(id)initWithAlertType:(int)arg1 ;
-(void)setSelectedToneIdentifier:(NSString *)arg1 ;
-(void)setSelectedVibrationIdentifier:(NSString *)arg1 ;
-(void)setShowsNothingSelected:(BOOL)arg1 ;
-(void)setShowsNone:(BOOL)arg1 ;
-(void)setNoneAtTop:(BOOL)arg1 ;
-(void)setShowsDefault:(BOOL)arg1 ;
-(void)setShowsVibrations:(BOOL)arg1 ;
-(NSString *)selectedToneIdentifier;
-(NSString *)selectedVibrationIdentifier;
-(id<TKTonePickerStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<TKTonePickerStyleProvider>)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1 ;
-(void)separatorColorDidChangeInTonePickerTableView:(id)arg1 ;
-(BOOL)isNoneAtTop;
-(NSString *)defaultToneIdentifier;
-(NSString *)noneString;
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)showsNothingSelected;
-(void)_didSelectToneWithIdentifier:(id)arg1 ;
-(void)_goToStore;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3 ;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1 ;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2 ;
-(void)_didSelectMediaItemWithIdentifier:(id)arg1 ;
-(void)tonePickerControllerRequestsPresentingToneStore:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3 ;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2 ;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg1 ;
-(BOOL)isMediaAtTop;
-(unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1 ;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2 ;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2 ;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1 ;
-(void)tonePickerControllerDidReloadTones:(id)arg1 ;
-(void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3 ;
-(void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3 ;
-(BOOL)showsDefault;
-(BOOL)showsNone;
-(void)setNoneString:(NSString *)arg1 ;
-(id)selectedTonePickerItem;
-(void)setMediaAtTop:(BOOL)arg1 ;
-(BOOL)showsVibrations;
-(void)_setShowsStoreButtonInNavigationBar:(BOOL)arg1 ;
-(void)_setTonePickerController:(id)arg1 ;
-(void)_setCheckmarkImage:(id)arg1 ;
-(void)_setTableViewCellLayoutManager:(id)arg1 ;
-(BOOL)showsMedia;
-(void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1 ;
-(TKVibrationPickerViewController *)_vibrationPickerViewController;
-(void)_setVibrationPickerViewController:(id)arg1 ;
-(TKToneClassicsTableViewController *)_toneClassicsTableViewController;
-(void)_setToneClassicsTableViewController:(id)arg1 ;
-(MPMediaPickerController *)_mediaPickerController;
-(void)_setMediaPickerController:(id)arg1 ;
-(void)_setMediaItems:(id)arg1 ;
-(void)_setStoredMusicPlayer:(id)arg1 ;
-(void)_setDefaultSectionHeaderView:(id)arg1 ;
-(void)_setMediaSectionHeaderView:(id)arg1 ;
-(void)_setRegularToneSectionHeaderViews:(id)arg1 ;
-(void)_setStoreBarButtonItem:(id)arg1 ;
-(TKTonePickerController *)_tonePickerController;
-(BOOL)_showsStoreButtonInNavigationBar;
-(void)_configureNavigationBarIfNeeded;
-(UIBarButtonItem *)_storeBarButtonItem;
-(void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2 ;
-(void)loadViewForTonePickerTableViewController:(id)arg1 ;
-(void)_updateMinimumTextIndentation;
-(BOOL)_needsScrollPositionReset;
-(void)_setNeedsScrollPositionReset:(BOOL)arg1 ;
-(UIView *)_defaultSectionHeaderView;
-(UIView *)_mediaSectionHeaderView;
-(NSMutableArray *)_regularToneSectionHeaderViews;
-(double)_minimumTextIndentationForTableView:(id)arg1 withCheckmarkImage:(id)arg2 ;
-(TKTonePickerTableViewCellLayoutManager *)_tableViewCellLayoutManager;
-(void)_resetScrollingPosition;
-(void)_handleMediaLibraryDidChangeNotification;
-(void)setSelectedMediaIdentifier:(NSNumber *)arg1 ;
-(id)selectedIdentifier:(BOOL*)arg1 ;
-(id)_mediaItemForIdentifier:(id)arg1 ;
-(unsigned long long)_addMediaIdentifierToList:(id)arg1 ;
-(NSMutableArray *)_mediaItems;
-(MPMusicPlayerController *)_storedMusicPlayer;
-(void)_playMediaItemWithIdentifier:(id)arg1 ;
-(MPMusicPlayerController *)_musicPlayer;
-(void)_configureTextColorOfLabelInCell:(id)arg1 checked:(BOOL)arg2 ;
-(void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3 ;
-(id)_pickerRowItemForIndexPath:(id)arg1 ;
-(void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3 ;
-(void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3 ;
-(void)updateCell:(id)arg1 withCheckedStatus:(BOOL)arg2 ;
-(void)updateCell:(id)arg1 withDetailText:(id)arg2 ;
-(void)_togglePlayMediaItemWithIdentifier:(id)arg1 ;
-(void)tonePickerTableViewWillDisappear:(BOOL)arg1 ;
-(void)vibrationPickerViewControllerWasDismissed:(id)arg1 ;
-(BOOL)showsStoreButtonInNavigationBar;
-(void)setShowsMedia:(BOOL)arg1 ;
-(NSNumber *)selectedMediaIdentifier;
-(void)addMediaItems:(id)arg1 ;
-(void)removeMediaItems:(id)arg1 ;
-(void)setDefaultToneIdentifier:(NSString *)arg1 ;
-(void)setShowsStoreButtonInNavigationBar:(BOOL)arg1 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
@end

