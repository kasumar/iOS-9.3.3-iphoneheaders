/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@class NSBundle, _UICAPackageView, UIView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper {

	NSBundle* _loadedBundle;
	_UICAPackageView* _packageView;
	UIView* _rootView;

}
+(id)identifier;
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setWallpaperOptions:(id)arg1 ;
-(void)_unloadView;
-(void)_loadView;
@end

