/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class WebNodeHighlightView, WebView;

@interface WebHighlightLayer : CALayer {

	WebNodeHighlightView* _view;
	WebView* _webView;

}
-(id)initWithHighlightView:(id)arg1 webView:(id)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
@end

