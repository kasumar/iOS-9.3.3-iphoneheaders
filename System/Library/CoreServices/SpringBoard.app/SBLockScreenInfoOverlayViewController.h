/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockScreenInfoOverlayView, NSString;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockScreenInfoOverlayView* _overlayView;
	NSString* _title;

}

@property (assign,nonatomic,__weak) id<SBLockScreenInfoOverlayDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithTitle:(id)arg1 ;
-(void)handleTapGestureFromView:(id)arg1 ;
@end
