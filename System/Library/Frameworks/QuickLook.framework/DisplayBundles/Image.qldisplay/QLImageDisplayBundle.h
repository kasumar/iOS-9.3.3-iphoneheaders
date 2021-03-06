/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Image/QLScrollableDisplayBundle.h>

@class UIImageView, NSDate;

@interface QLImageDisplayBundle : QLScrollableDisplayBundle {

	UIImageView* _imageView;
	long long _loadingIndex;
	NSDate* _imageViewDisplayDate;

}
+(double)allowedLoadingDelay;
-(void)stopTimeLog;
-(void)startTimeLog;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadWithHints:(id)arg1 ;
-(BOOL)canCopyToPasteboard;
-(void)didFinishSwiping;
-(void)cancelLoad;
-(long long)preferredWhitePointAdaptivityStyle;
@end

