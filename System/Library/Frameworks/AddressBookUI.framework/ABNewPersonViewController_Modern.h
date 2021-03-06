/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>

@protocol ABNewPersonViewControllerDelegate, ABStyleProvider, CNPresenterDelegate;
@class ABContactViewController, _UIAccessDeniedView, ABPersonViewControllerHelper, ABPersonTableViewDataSource, CNContact, ABContactsFilter, CNContactViewController, NSString;

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, CNContactViewControllerPrivateDelegate> {

	void* _addressBook;
	void* _displayedPerson;
	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	BOOL _isRealViewLoaded;
	ABContactViewController* _contactViewController;
	_UIAccessDeniedView* _accessDeniedView;
	const void* _parentGroup;
	ABPersonViewControllerHelper* _helper;
	ABPersonTableViewDataSource* _dataSource;
	void* _parentSource;
	CNContact* _mergeContact;
	id<ABStyleProvider> _styleProvider;
	ABContactsFilter* _parentContactsFilter;
	id<CNPresenterDelegate> _presentingDelegate;
	CNContactViewController* _cnContactViewController;

}

@property (assign,nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate; 
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (assign,nonatomic) const void* parentGroup;                                                  //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                  //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) BOOL savesNewContactOnSuspend; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABContactsFilter * parentContactsFilter;                                  //@synthesize parentContactsFilter=_parentContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) id<CNPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                 //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) BOOL isRealViewLoaded;                                                    //@synthesize isRealViewLoaded=_isRealViewLoaded - In the implementation block
@property (nonatomic,retain) CNContactViewController * cnContactViewController;                        //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)save:(id)arg1 ;
-(const void*)displayedPerson;
-(void)setParentGroup:(const void*)arg1 ;
-(void)setParentSource:(void*)arg1 ;
-(void)setSavesNewContactOnSuspend:(BOOL)arg1 ;
-(void)accessChanged;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(const void*)parentGroup;
-(void)loadContactViewController;
-(BOOL)isRealViewLoaded;
-(void)loadRealView;
-(void)setIsRealViewLoaded:(BOOL)arg1 ;
-(CNContactViewController *)cnContactViewController;
-(void*)parentSource;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(id<ABNewPersonViewControllerDelegate>)newPersonViewDelegate;
-(BOOL)savesNewContactOnSuspend;
-(ABPersonViewControllerHelper *)helper;
-(ABContactsFilter *)parentContactsFilter;
-(void)setParentContactsFilter:(ABContactsFilter *)arg1 ;
-(const void*)addressBook;
-(void)setMergeContact:(CNContact *)arg1 ;
-(CNContact *)mergeContact;
-(ABContactViewController *)contactViewController;
-(void)setNewPersonViewDelegate:(id<ABNewPersonViewControllerDelegate>)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
@end

