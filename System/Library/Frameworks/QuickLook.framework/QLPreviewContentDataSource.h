/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewContentDataSource <NSObject>
@required
-(long long)currentSourceUUIDForPreviewContentController:(id)arg1;
-(long long)numberOfPreviewItemsInPreviewContentController:(id)arg1;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(/*^block*/id)arg3;

@end

