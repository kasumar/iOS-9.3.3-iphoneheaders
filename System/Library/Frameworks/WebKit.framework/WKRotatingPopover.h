/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WKRotatingPopoverDelegate;
@class WKContentView, UIPopoverController, NSString;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {

	WKContentView* _view;
	BOOL _isRotating;
	CGPoint _presentationPoint;
	RetainPtr<UIPopoverController>* _popoverController;
	id<WKRotatingPopoverDelegate> _dismissionDelegate;

}

@property (assign,nonatomic) CGPoint presentationPoint;                                     //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController; 
@property (assign,nonatomic) id<WKRotatingPopoverDelegate> dismissionDelegate;              //@synthesize dismissionDelegate=_dismissionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPopoverController *)popoverController;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(unsigned long long)popoverArrowDirections;
-(CGPoint)presentationPoint;
-(void)setDismissionDelegate:(id<WKRotatingPopoverDelegate>)arg1 ;
-(id<WKRotatingPopoverDelegate>)dismissionDelegate;
@end

