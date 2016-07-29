/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverController.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _mirroringIncluded;
	MPAVRoutingViewController* _routingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(id)_tableViewController;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 includeMirroring:(BOOL)arg2 ;
-(id)routingController;
@end

