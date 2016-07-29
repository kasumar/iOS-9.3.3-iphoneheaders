/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIDocumentMenuDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WebOpenPanelResultListener, UIWebFileUploadPanelDelegate;
@class UIDocumentMenuViewController, UIImagePickerController, UIViewController, UIPopoverController, DOMNode, NSArray, UIWebDocumentView, NSObject, NSString;

@interface UIWebFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {

	UIDocumentMenuViewController* _documentMenuController;
	UIImagePickerController* _imagePicker;
	UIViewController* _presentationViewController;
	UIPopoverController* _presentationPopover;
	BOOL _documentViewPresentedViewController;
	CGPoint _interactionPoint;
	DOMNode* _interactionElement;
	BOOL _allowMultipleFiles;
	BOOL _isUsingCamera;
	NSArray* _mimeTypes;
	UIWebDocumentView* _documentView;
	NSObject*<WebOpenPanelResultListener> _resultListener;
	id<UIWebFileUploadPanelDelegate> _delegate;

}

@property (assign,nonatomic) id<UIWebFileUploadPanelDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * mimeTypes;                                                 //@synthesize mimeTypes=_mimeTypes - In the implementation block
@property (assign,nonatomic) UIWebDocumentView * documentView;                                  //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,retain) NSObject*<WebOpenPanelResultListener> resultListener;              //@synthesize resultListener=_resultListener - In the implementation block
@property (assign,nonatomic) BOOL allowMultipleFiles;                                           //@synthesize allowMultipleFiles=_allowMultipleFiles - In the implementation block
@property (assign,nonatomic) BOOL isUsingCamera;                                                //@synthesize isUsingCamera=_isUsingCamera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UIWebFileUploadPanelDelegate>)arg1 ;
-(void)dealloc;
-(id<UIWebFileUploadPanelDelegate>)delegate;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(UIWebDocumentView *)documentView;
-(void)dismiss;
-(id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(BOOL)arg3 documentView:(id)arg4 ;
-(void)present;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2 ;
-(void)documentMenuWasCancelled:(id)arg1 ;
-(void)setMimeTypes:(NSArray *)arg1 ;
-(void)setDocumentView:(UIWebDocumentView *)arg1 ;
-(void)setResultListener:(NSObject*<WebOpenPanelResultListener>)arg1 ;
-(void)setAllowMultipleFiles:(BOOL)arg1 ;
-(void)setIsUsingCamera:(BOOL)arg1 ;
-(void)_dispatchDidDismiss;
-(NSArray *)mimeTypes;
-(BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2 ;
-(id)_UTIsForMIMETypes;
-(id)_mediaTypesForPickerSourceType:(long long)arg1 ;
-(id)_photoPickerWithSourceType:(long long)arg1 ;
-(void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_documentPickerMenuMediaTypes;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(id)_cameraButtonLabel;
-(void)_presentForCurrentInterfaceIdiom:(id)arg1 ;
-(void)_dismissDisplayAnimated:(BOOL)arg1 ;
-(void)_showDocumentPickerMenu;
-(void)_cancel;
-(void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_uploadItemForImage:(id)arg1 withAssetURL:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(void)_processMediaInfoDictionaries:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(NSObject*<WebOpenPanelResultListener>)resultListener;
-(BOOL)allowMultipleFiles;
-(BOOL)isUsingCamera;
@end

