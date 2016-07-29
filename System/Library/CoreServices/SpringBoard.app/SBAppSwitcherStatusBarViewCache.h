/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, UIView, UIWindow;

@interface SBAppSwitcherStatusBarViewCache : NSObject {

	NSMutableDictionary* _cachedStatusBarQueues;
	NSMutableDictionary* _statusBarsForSnapshots;
	NSMutableSet* _homePageCellStatusBars;
	UIView* _hiddenStatusBarCacheView;
	UIView* _statusBarSnapshottingView;
	BOOL _vendingSnapshots;
	UIWindow* _appSwitcherWindow;

}

@property (assign,getter=isVendingSnapshots,nonatomic) BOOL vendingSnapshots; 
@property (nonatomic,retain) UIWindow * appSwitcherWindow;                                 //@synthesize appSwitcherWindow=_appSwitcherWindow - In the implementation block
-(void)_prepareForSnapshotOfStyleRequest:(id)arg1 orientation:(long long)arg2 ;
-(id)barForStyleRequest:(id)arg1 orientation:(long long)arg2 ;
-(void)recycleBar:(id)arg1 ;
-(id)fakeStatusBarForHomePageCell;
-(void)recycleBarForHomePageCell:(id)arg1 ;
-(id)_cacheKeyForStyleRequest:(id)arg1 orientation:(long long)arg2 ;
-(/*^block*/id)_generationBlockForStyleRequest:(id)arg1 orientation:(long long)arg2 ;
-(id)barSnapshotForStyleRequest:(id)arg1 orientation:(long long)arg2 ;
-(BOOL)isVendingSnapshots;
-(void)setVendingSnapshots:(BOOL)arg1 ;
-(void)setAppSwitcherWindow:(UIWindow *)arg1 ;
-(void)preheatStatusBarCache;
-(UIWindow *)appSwitcherWindow;
-(void)dealloc;
-(id)init;
@end

