/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining.h>
#import <UIKit/_UIDocumentPickerOverviewDelegate.h>
#import <UIKit/_UIDocumentPickerViewController.h>
#import <UIKit/_UIDocumentPickerServiceViewController.h>

@class NSArray, NSURL, NSString, UIViewController;

@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController, _UIDocumentPickerServiceViewController> {

	BOOL _displayedAsMenu;
	BOOL _hasBeenDismissed;
	BOOL _showingSpinner;
	int _sortOrder;
	long long _displayMode;
	NSArray* _pickableTypes;
	unsigned long long _pickerMode;
	NSURL* _uploadURL;
	NSArray* _auxiliaryOptions;
	NSString* _currentPickerIdentifier;
	UIViewController* _currentPicker;

}

@property (nonatomic,readonly) id<_UIDocumentPickerViewControllerHost> hostingViewController; 
@property (assign,nonatomic) long long displayMode;                                                        //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,copy) NSArray * pickableTypes;                                                        //@synthesize pickableTypes=_pickableTypes - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                                //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                                              //@synthesize uploadURL=_uploadURL - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                                //@synthesize sortOrder=_sortOrder - In the implementation block
@property (setter=_setAuxiliaryOptions:,nonatomic,retain) NSArray * auxiliaryOptions;                      //@synthesize auxiliaryOptions=_auxiliaryOptions - In the implementation block
@property (nonatomic,retain) NSString * currentPickerIdentifier;                                           //@synthesize currentPickerIdentifier=_currentPickerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL displayedAsMenu;                                                         //@synthesize displayedAsMenu=_displayedAsMenu - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDismissed;                                                        //@synthesize hasBeenDismissed=_hasBeenDismissed - In the implementation block
@property (assign,nonatomic) BOOL showingSpinner;                                                          //@synthesize showingSpinner=_showingSpinner - In the implementation block
@property (nonatomic,retain) UIViewController * currentPicker;                                             //@synthesize currentPicker=_currentPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_setTintColor:(id)arg1 ;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(void)_showDefaultPicker;
-(void)_prepareForDisplayWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissViewController;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(NSURL *)uploadURL;
-(void)_didSelectURL:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)_displayLocationsMenuFromRect:(CGRect)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(NSArray *)pickableTypes;
-(unsigned long long)pickerMode;
-(int)sortOrder;
-(void)_setAuxiliaryOptions:(id)arg1 ;
-(void)_documentPickerDidDismiss;
-(void)_setUploadURL:(id)arg1 ;
-(void)setupNavigationItemForPicker:(id)arg1 isRoot:(BOOL)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(BOOL)shouldShowSearch;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(NSArray *)auxiliaryOptions;
-(void)beginDownloadingURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<_UIDocumentPickerViewControllerHost>)hostingViewController;
-(BOOL)hasBeenDismissed;
-(void)setHasBeenDismissed:(BOOL)arg1 ;
-(void)setNavigationItemSpinner:(BOOL)arg1 ;
-(void)_createBookmarkAndDismissWithCloudURL:(id)arg1 ;
-(void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setCurrentPickerIdentifier:(NSString *)arg1 ;
-(NSString *)currentPickerIdentifier;
-(void)_showTopLevelViewController;
-(void)_checkFileStatus;
-(void)setDisplayedAsMenu:(BOOL)arg1 ;
-(void)_showPicker:(id)arg1 ;
-(void)_doneButton:(id)arg1 ;
-(void)_showLocationPopup:(id)arg1 ;
-(UIViewController *)currentPicker;
-(void)setCurrentPicker:(UIViewController *)arg1 ;
-(void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 placeholder:(id)arg2 ;
-(void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2 ;
-(void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(CGRect)arg2 ;
-(BOOL)displayedAsMenu;
-(void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2 ;
-(void)_tryExportingFile:(id)arg1 toLocation:(id)arg2 ;
-(id)_mangledFilenameForURL:(id)arg1 ;
-(BOOL)_appIsSharingAware;
-(void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2 ;
-(void)_dismissWithImportURL:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)pickLocationForUpload:(id)arg1 ;
-(BOOL)showingSpinner;
-(void)setShowingSpinner:(BOOL)arg1 ;
@end

