/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <UIKit/_UIDocumentPickerViewControllerHost.h>
#import <UIKit/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerRemoteViewControllerContaining;
@class UIViewController, NSString;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

	UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> _publicController;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)invalidate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPublicController:(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_dismissViewController;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)viewDidLoad;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
-(void)_didSelectURLWrapper:(id)arg1 ;
-(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

