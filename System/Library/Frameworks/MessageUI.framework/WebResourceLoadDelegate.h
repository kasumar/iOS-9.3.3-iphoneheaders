/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebResourceLoadDelegate <NSObject>
@optional
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
-(void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveContentLength:(long long)arg3 fromDataSource:(id)arg4;
-(void)webView:(id)arg1 plugInFailedWithError:(id)arg2 dataSource:(id)arg3;

@end

