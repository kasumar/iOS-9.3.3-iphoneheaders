/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKComposeReviewDelegate.h>

@class NSURL, SKComposeReviewViewController, NSString;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {

	NSURL* _compositionURL;
	SKComposeReviewViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSURL * compositionURL;              //@synthesize compositionURL=_compositionURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)loadView;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id)copyScriptViewController;
-(void)_showRemoteView;
-(NSURL *)compositionURL;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reviewComposeViewControllerDidFinish:(id)arg1 ;
@end

