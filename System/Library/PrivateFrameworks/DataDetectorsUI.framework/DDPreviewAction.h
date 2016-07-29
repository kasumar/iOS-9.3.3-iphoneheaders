/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class UIViewController;

@interface DDPreviewAction : DDAction {

	UIViewController* _viewController;

}
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)dealloc;
-(id)viewController;
-(id)contact;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)createViewController;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
@end

