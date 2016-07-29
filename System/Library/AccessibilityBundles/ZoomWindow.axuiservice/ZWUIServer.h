/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class ZWRootViewController, NSObject, NSString;

@interface ZWUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {

	ZWRootViewController* _zoomRootViewController;
	NSObject*<OS_dispatch_group> _showHideGroup;
	NSObject*<OS_dispatch_queue> _showHideQueue;

}

@property (nonatomic,readonly) ZWRootViewController * zoomRootViewController; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> showHideGroup;                   //@synthesize showHideGroup=_showHideGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> showHideQueue;                   //@synthesize showHideQueue=_showHideQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)showHideQueue;
-(NSObject*<OS_dispatch_group>)showHideGroup;
-(void)setShowHideGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setShowHideQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ZWRootViewController *)zoomRootViewController;
-(void)_showingOrHidingControllerWillBegin;
-(void)_showingOrHidingControllerWillEnd;
-(void)_waitForControllerShowHideToComplete:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end

