/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/QLScrubViewDataSource.h>
#import <UIKit/UIWebPDFViewHandlerDelegate.h>

@class UIWebView, UIView, QLPreviewConverter, NSURLRequest, QLScrubView, NSMutableArray, NSData, QLPDFHanderDelegateForwarder, NSString;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {

	UIWebView* _webView;
	UIView* _accessoryView;
	QLPreviewConverter* _previewConverter;
	NSURLRequest* _previewRequest;
	unsigned _isLoadedDuringZoom : 1;
	unsigned _isHTMLContent : 1;
	unsigned _isXMLContent : 1;
	unsigned _isPDFContent : 1;
	unsigned _isSpreadsheetContent : 1;
	unsigned _isPlainText : 1;
	unsigned _isRTFContent : 1;
	unsigned _isCSVContent : 1;
	unsigned _loadStarted : 1;
	double _defaultZoom;
	QLScrubView* _scrubView;
	long long _lastPage;
	BOOL _inScroll;
	BOOL _webViewReadyForThumbnailing;
	NSMutableArray* _htmlSlideNodes;
	NSData* _pdfPreviewData;
	QLPDFHanderDelegateForwarder* _forwarder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(long long)pageCount;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(id)alertViewForUIWebPDFViewHandler:(id)arg1 ;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1 ;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2 ;
-(unsigned long long)currentPageNumber;
-(void)setPreviewItem:(id)arg1 ;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(BOOL)needsContentInset;
-(void)setNavigationBarVerticalOffset:(double)arg1 ;
-(BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(int)airPlayMode;
-(id)pdfPreviewData;
-(id)printPageHelper;
-(id)gestureRecognizersForFullScreenDisplay;
-(void)_tearDownWebView;
-(void)updateFrameWithOrb;
-(id)_getWebView:(BOOL)arg1 ;
-(void)_updateScrubberForTraitCollection:(id)arg1 ;
-(void)_hideScrubberIfNeeded:(double)arg1 ;
-(void)_showScrubberIfNeeded:(double)arg1 ;
-(id)_copyPreviewConverterForPreviewItem:(id)arg1 ;
-(CGPDFDocumentRef)_getCGPDFDocumentRef;
-(id)_scrubView:(BOOL)arg1 ;
-(void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)previewConverter;
-(id)_htmlSlideNodes;
-(CGSize)pageSizeAtIndex:(long long)arg1 ;
-(id)_htmlPageXPath;
-(void)scrollToPage:(unsigned long long)arg1 ;
-(long long)numberOfPagesInScrubView:(id)arg1 ;
-(id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned long long)arg2 ;
-(CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2 ;
-(void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2 ;
-(void)userInteractedWithScrubView:(id)arg1 ;
-(void)cancelLoad;
-(long long)preferredWhitePointAdaptivityStyle;
@end

