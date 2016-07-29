/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingDescription.h>
#import <libobjc.A.dylib/SKUIProfileImagePickerDelegate.h>
#import <libobjc.A.dylib/SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate.h>

@class NSOperationQueue, NSRegularExpression, SKUISettingValueStore, NSString, UIImage;

@interface SKUIEditProfileSettingDescription : SKUISettingDescription <SKUIProfileImagePickerDelegate, SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> {

	/*^block*/id _commitBlock;
	BOOL _editing;
	NSOperationQueue* _operationQueue;
	NSRegularExpression* _handleValidation;
	BOOL _suggestedHandlesDisplayed;
	SKUISettingValueStore* _valueStore;
	BOOL _handleValid;

}

@property (getter=isEditing,nonatomic,readonly) BOOL editing;                      //@synthesize editing=_editing - In the implementation block
@property (nonatomic,copy) NSString * handle; 
@property (getter=isHandleValid,nonatomic,readonly) BOOL handleValid;              //@synthesize handleValid=_handleValid - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) UIImage * photo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(BOOL)allowsEdit;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isEditing;
-(BOOL)allowsSelection;
-(void)beginEditing;
-(void)_reloadData;
-(void)_updateValidity;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)cancelEdits;
-(BOOL)commitEdits:(/*^block*/id)arg1 ;
-(void)discardEdits;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
-(void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3 ;
-(void)profileImagePickerDidCancel:(id)arg1 ;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2 ;
-(void)setHandle:(NSString *)arg1 ;
-(BOOL)isHandleValid;
-(void)chooseNewProfilePhoto;
-(void)setPhoto:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_enterEditMode;
-(void)_uploadProfileImage:(id)arg1 ;
-(void)_updateAccountInfo;
-(void)_finalizeCommitWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_leaveEditMode;
-(void)_displayFooter:(id)arg1 ;
-(void)_displayRules:(BOOL)arg1 ;
-(id)_valueStore;
-(void)_displaySuggestedHandles:(id)arg1 ;
-(void)_fetchSuggestedHandles;
-(void)_hideFooter;
-(BOOL)_validateName:(id)arg1 ;
-(BOOL)_validateHandle:(id)arg1 ;
-(void)_hideSuggestedHandles;
-(NSString *)handle;
-(UIImage *)photo;
@end

