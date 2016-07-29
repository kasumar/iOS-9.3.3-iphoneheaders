/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLDeletePhotosActionControllerDelegate;
@class UIAlertController, NSArray, PLPhotoLibrary;

@interface PLDeletePhotosActionController : NSObject {

	UIAlertController* _actionSheetController;
	UIAlertController* _overQuotaConfirmation;
	UIAlertController* _oneTimeConfirmation;
	NSArray* _additionalAssetsToDelete;
	/*^block*/id _completionHandler;
	/*^block*/id _willDeleteHandler;
	long long _action;
	id<PLDeletePhotosActionControllerDelegate> _delegate;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _assets;

}

@property (nonatomic,__weak,readonly) id<PLDeletePhotosActionControllerDelegate> delegate; 
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary;                                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain,readonly) NSArray * assets;                                                 //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) long long action;                                                        //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(id<PLDeletePhotosActionControllerDelegate>)delegate;
-(long long)action;
-(void)_actionSheetDeletePressed:(BOOL)arg1 ;
-(void)_overQuotaAlertConfirmed:(BOOL)arg1 ;
-(void)_oneTimeAlertConfirmed;
-(void)_setupActionSheet;
-(void)_setupOverQuotaConfirmationSheet;
-(void)_setupOnetimeConfirmationSheet;
-(void)runDestructiveActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_didCompleteWithDestructiveAction:(BOOL)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 action:(long long)arg3 delegate:(id)arg4 ;
-(void)performWithWillDeleteHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)assets;
-(void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 ;
-(void)_showOverQuotaConfirmationSheet;
-(void)_showOnetimeConfirmation;
-(PLPhotoLibrary *)photoLibrary;
@end

