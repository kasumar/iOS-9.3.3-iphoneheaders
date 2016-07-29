/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPUSharedLibrariesViewController, UINavigationController;

@interface MPUSharedLibrariesViewController : UIViewController {

	_MPUSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic) BOOL showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsLocalLibrary; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setShowsLocalLibrary:(BOOL)arg1 ;
-(BOOL)showsLocalLibrary;
-(void)dismissSharedLibrariesViewController:(BOOL)arg1 ;
-(void)presentSharedLibrariesViewController:(BOOL)arg1 ;
@end

