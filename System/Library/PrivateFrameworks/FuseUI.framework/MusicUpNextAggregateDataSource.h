/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MusicUpNextCompositeDataSourceDelegate.h>

@protocol MusicUpNextAggregateDataSourceDelegate;
@class NSIndexPath, MusicUpNextPlaybackHistoryDataSource, MusicEntityValueContext, MusicUpNextNowPlayingDataSource, MusicUpNextQueueDataSource, NSArray, UIViewController, MPUAVPlayer, NSString;

@interface MusicUpNextAggregateDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, MusicUpNextCompositeDataSourceDelegate> {

	NSIndexPath* _nowPlayingIndexPath;
	MusicUpNextPlaybackHistoryDataSource* _historyDataSource;
	MusicEntityValueContext* _itemEntityValueContext;
	MusicUpNextNowPlayingDataSource* _nowPlayingDataSource;
	MusicUpNextQueueDataSource* _queueDataSource;
	BOOL _hidesNowPlaying;
	NSArray* _compositeDataSources;
	id<MusicUpNextAggregateDataSourceDelegate> _delegate;
	UIViewController* _presentingViewController;
	MPUAVPlayer* _player;

}

@property (nonatomic,readonly) NSArray * compositeDataSources;                                        //@synthesize compositeDataSources=_compositeDataSources - In the implementation block
@property (assign,nonatomic,__weak) id<MusicUpNextAggregateDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                      //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) MPUAVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL hidesNowPlaying;                                                    //@synthesize hidesNowPlaying=_hidesNowPlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MusicUpNextAggregateDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<MusicUpNextAggregateDataSourceDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPlayer:(MPUAVPlayer *)arg1 ;
-(MPUAVPlayer *)player;
-(id)initWithCompositeDataSources:(id)arg1 ;
-(NSArray *)compositeDataSources;
-(id)nowPlayingIndexPath;
-(id)entityValueProviderForIndexPath:(id)arg1 ;
-(id)horizontalLockupContentDescriptorForIndexPath:(id)arg1 ;
-(id)reuseIdentifierForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)contextForIndexPath:(id)arg1 ;
-(void)setHidesNowPlaying:(BOOL)arg1 ;
-(BOOL)hidesNowPlaying;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(id)_dataSourceForSection:(long long)arg1 ;
-(id)_normalizedIndexPath:(id)arg1 ;
-(id)_indexPathsForNormalizedIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(long long)_normalizedSectionForSection:(long long)arg1 ;
-(long long)_sectionForNormalizedSection:(long long)arg1 dataSource:(id)arg2 ;
-(id)_indexPathForNormalizedIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)_playbackItemDidChangeNotification:(id)arg1 ;
-(void)compositeDataSource:(id)arg1 didUpdate:(id)arg2 ;
-(Class)tableViewCellClassForIndexPath:(id)arg1 ;
-(id)_normalizedIndexPaths:(id)arg1 ;
@end

