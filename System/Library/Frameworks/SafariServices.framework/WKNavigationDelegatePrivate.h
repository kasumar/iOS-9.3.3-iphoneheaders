/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>
@optional
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
-(BOOL)_webView:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)_webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)_webViewWebProcessDidBecomeResponsive:(id)arg1;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
-(id)_webCryptoMasterKeyForWebView:(id)arg1;
-(void)_webViewDidBeginNavigationGesture:(id)arg1;
-(void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 willSnapshotBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
-(void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
-(void)_webViewWebProcessDidCrash:(id)arg1;

@end
