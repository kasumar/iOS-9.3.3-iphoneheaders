/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;
@class NSURL, _UIAsyncInvocation, SKRemoteAccountPageViewController, SKInvocationQueueProxy;

@interface SKAccountPageViewController : UIViewController {

	NSURL* _accountURL;
	_UIAsyncInvocation* _cancelRequest;
	id<SKAccountPageViewControllerDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteAccountPageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceAccountPageViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKAccountPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)_dismissViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addRemoteView;
-(void)_requestRemoteViewController;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithAccountURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end

