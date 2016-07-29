/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>

@class CNContact, CNContactStore, CNAvatarCardController, UIViewController, NSString;

@interface DDPersonAction : DDPreviewAction <CNAvatarCardControllerDelegate> {

	CNContact* _contact;
	CNContactStore* _store;
	CNAvatarCardController* _avatar;
	UIViewController* _presentingViewController;

}

@property (retain) CNContact * contact;                                      //@synthesize contact=_contact - In the implementation block
@property (retain) CNContactStore * store;                                   //@synthesize store=_store - In the implementation block
@property (retain) CNAvatarCardController * avatar;                          //@synthesize avatar=_avatar - In the implementation block
@property (__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)createViewController;
-(BOOL)requiresEmbeddingNavigationController;
-(id)mainValueFromURLString:(id)arg1 schemes:(id)arg2 ;
-(void)setAvatar:(CNAvatarCardController *)arg1 ;
-(CNAvatarCardController *)avatar;
@end

