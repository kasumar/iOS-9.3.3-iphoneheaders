/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicIndexBarDataSource.h>
#import <libobjc.A.dylib/MusicIndexBarScrollDelegate.h>
#import <libobjc.A.dylib/MusicLibraryViewConfigurationConsuming.h>

@protocol MusicLibraryViewConfigurationConsuming;
@class MusicLibraryViewConfiguration, MusicLibraryAdaptiveViewConfiguration, UIViewController, MusicClientContext, NSString;

@interface MusicLibraryAdaptiveViewController : UIViewController <MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming> {

	BOOL _isActiveViewControllerIndexBarDataSource;
	BOOL _isActiveViewControllerIndexBarScrollDelegate;
	long long _horizontalSizeClassForActiveView;
	MusicLibraryAdaptiveViewConfiguration* _libraryViewConfiguration;
	UIViewController*<MusicLibraryViewConfigurationConsuming> _activeViewController;
	MusicClientContext* _clientContext;

}

@property (nonatomic,readonly) UIViewController*<MusicLibraryViewConfigurationConsuming> activeViewController;              //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,retain) MusicClientContext * clientContext;                                                            //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) MusicLibraryAdaptiveViewConfiguration * libraryViewConfiguration;                            //@synthesize libraryViewConfiguration=_libraryViewConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(unsigned long long)numberOfIndexBarEntries;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)_tearDownActiveView;
-(void)_reloadActiveViewIfNeeded;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)getContentOffset:(CGPoint*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2 ;
-(void)_applyClientContextToChildViewControllers;
-(void)_activeViewControllerIndexBarDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_applyClientContextToViewController:(id)arg1 ;
-(MusicLibraryAdaptiveViewConfiguration *)libraryViewConfiguration;
-(UIViewController*<MusicLibraryViewConfigurationConsuming>)activeViewController;
@end

