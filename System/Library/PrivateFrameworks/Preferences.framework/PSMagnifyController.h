/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol OS_dispatch_semaphore, PSMagnifyControllerDelegate;
@class PSMagnifyMode, UISegmentedControl, UIScrollView, UIPageControl, UIView, NSURL, NSMutableDictionary, NSObject, NSString;

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate> {

	PSMagnifyMode* _originalMagnifyMode;
	PSMagnifyMode* _selectedMagnifyMode;
	UISegmentedControl* _magnifyModePicker;
	UIScrollView* _previewsScroller;
	long long _scrolledPreviewPage;
	UIPageControl* _pageControl;
	UIView* _dividerLine;
	NSURL* _HTMLResourceBaseURL;
	NSMutableDictionary* _webViewsForMagnifyMode;
	NSObject*<OS_dispatch_semaphore> _firstLoadSemaphore;
	BOOL _loaded;
	PSMagnifyMode* _initialMagnifyMode;
	BOOL _doneButtonCommits;
	BOOL _alwaysShowCancelButton;
	id<PSMagnifyControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL doneButtonCommits;                                       //@synthesize doneButtonCommits=_doneButtonCommits - In the implementation block
@property (assign,nonatomic,__weak) id<PSMagnifyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowCancelButton;                                  //@synthesize alwaysShowCancelButton=_alwaysShowCancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)commitMagnifyMode:(id)arg1 withRelaunchURL:(id)arg2 ;
+(BOOL)shouldShowMagnify;
+(id)localizedMagnifyModeName;
+(id)currentMagnifyMode;
+(void)commitMagnifyMode:(id)arg1 ;
-(void)setDelegate:(id<PSMagnifyControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<PSMagnifyControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithZoomedSelected:(BOOL)arg1 ;
-(id)currentWebViewSet;
-(id)arrayOfWebViewsWithCount:(unsigned long long)arg1 ;
-(id)localizedCSSStringFromUnlocalizedCSSString:(id)arg1 ;
-(void)magnifyModeSelectionChanged:(id)arg1 ;
-(void)setSelectedMagnifyMode:(id)arg1 ;
-(double)xOriginForPage:(long long)arg1 ;
-(BOOL)doneButtonCommits;
-(void)magnifyModeConfirmed:(id)arg1 ;
-(void)finishDone:(id)arg1 ;
-(void)finishCancel:(id)arg1 ;
-(void)setDoneButtonCommits:(BOOL)arg1 ;
-(BOOL)alwaysShowCancelButton;
-(void)setAlwaysShowCancelButton:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(id)specifiers;
@end

