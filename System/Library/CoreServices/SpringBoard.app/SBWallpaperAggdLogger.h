/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBWallpaperAggdLogger : NSObject {

	long long _aggd_lockscreenWallpaperType;
	long long _aggd_lockscreenWallpaperIdentifier;
	long long _aggd_homescreenWallpaperType;
	long long _aggd_homescreenWallpaperIdentifier;
	long long _aggd_irisWallpaperEnabled;
	long long _aggd_sharedWallpaper;

}
-(void)_clearAggdKeysForLocations:(long long)arg1 ;
-(void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(BOOL)arg2 hasProcedural:(BOOL)arg3 name:(id)arg4 ;
-(void)saveWallpaperAggdCurrentValues;
-(id)_valueString;
-(id)init;
@end

