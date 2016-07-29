/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebView.h>

@class _UIServiceWebViewController;

@interface _UIServiceWebView : UIWebView {

	BOOL _shouldDecidePolicyRemotely;
	_UIServiceWebViewController* _serviceWebViewController;

}

@property (assign,nonatomic) _UIServiceWebViewController * serviceWebViewController;              //@synthesize serviceWebViewController=_serviceWebViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldDecidePolicyRemotely;                                     //@synthesize shouldDecidePolicyRemotely=_shouldDecidePolicyRemotely - In the implementation block
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(BOOL)_webView:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_webView:(id)arg1 dismissViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_makeAlertView;
-(void)setShouldDecidePolicyRemotely:(BOOL)arg1 ;
-(void)setServiceWebViewController:(_UIServiceWebViewController *)arg1 ;
-(_UIServiceWebViewController *)serviceWebViewController;
-(BOOL)shouldDecidePolicyRemotely;
@end

