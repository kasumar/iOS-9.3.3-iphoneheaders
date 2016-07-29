/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWidgetViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@class _SBUIWidgetViewController, NSString;

@interface _SBWidgetViewControllerInProcess : SBWidgetViewController <_SBUIWidgetHost> {

	_SBUIWidgetViewController* _widgetViewController;

}

@property (nonatomic,retain) _SBUIWidgetViewController * widgetViewController;              //@synthesize widgetViewController=_widgetViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateContentWidth:(double)arg1 ;
-(id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2 ;
-(void)requestPreferredViewHeightWithHandler:(/*^block*/id)arg1 ;
-(id)_newWidgetViewControllerWithIdentifier:(id)arg1 bundlePath:(id)arg2 ;
-(_SBUIWidgetViewController *)widgetViewController;
-(void)setWidgetViewController:(_SBUIWidgetViewController *)arg1 ;
-(void)viewDidLoad;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end

