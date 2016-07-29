/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBNCTableViewController.h>
#import <SpringBoard/SBNotificationCenterWidgetHost.h>

@protocol SBWidgetViewControllerDelegate;
@class NSMutableDictionary, NSSet, NSArray, NSString;

@interface SBWidgetHandlingNCTableViewController : SBNCTableViewController <SBNotificationCenterWidgetHost> {

	NSMutableDictionary* _identifiersToWidgets;
	/*^block*/id _owedWillAppearBlock;
	NSMutableDictionary* _outstandingWidgetUpdateRequests;
	id _cancelTouchesForHitWidgetAssertion;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;

}

@property (nonatomic,__weak,readonly) NSSet * visibleWidgetIDs; 
@property (nonatomic,__weak,readonly) NSArray * allEnabledWidgetIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBWidgetViewControllerDelegate> widgetDelegate;              //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
-(void)invalidateSectionAndRowViewHeights:(/*^block*/id)arg1 ;
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(NSSet *)visibleWidgetIDs;
-(void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1 ;
-(void)setWidgetDelegate:(id<SBWidgetViewControllerDelegate>)arg1 ;
-(void)makeVisibleWidgetInSection:(id)arg1 andConnect:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)widgetViewController:(id)arg1 beginAppearanceTransitionIfNecessary:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_invokeBlockWithAllVisibleWidgets:(/*^block*/id)arg1 ;
-(void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)arg1 ;
-(void)_insertRemoteViewForWidget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_captureSnapshot:(BOOL)arg1 andInsert:(BOOL)arg2 disconnectingRemoteViewController:(BOOL)arg3 forceDisconnection:(BOOL)arg4 forWidget:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_updateWidgetViewState;
-(void)widgetViewController:(id)arg1 beginAppearanceTransitionIfNecessary:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_noteOutstandingUpdateRequestForWidget:(id)arg1 ;
-(/*^block*/id)_completionHandlerForUpdateRequestForWidget:(id)arg1 ;
-(void)_registerUpdateRequestCompletionHandler:(/*^block*/id)arg1 forWidget:(id)arg2 ;
-(void)_disconnectRemoteViewController:(BOOL)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_widgetHasOutstandingUpdateRequest:(id)arg1 ;
-(void)_insertSnapshot:(BOOL)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_captureSnapshot:(BOOL)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_insertRemoteViewsForWidgetsWithIDs:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)allEnabledWidgetIDs;
-(void)_insertSnapshotsForWidgetsWithIDs:(id)arg1 animated:(BOOL)arg2 ;
-(void)_cancelTouchesForHitWidgetIfNecessary;
-(void)addChildRowIfPossible:(id)arg1 ;
-(void)removeChildRowIfPossible:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

