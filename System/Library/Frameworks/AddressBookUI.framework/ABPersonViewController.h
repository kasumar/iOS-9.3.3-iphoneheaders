/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSTimer, ABPersonTableViewDataSource, ABPersonTableViewActionsDelegate, ABPersonTableViewSharingDelegate, ABContactViewController, NSArray, NSString, UIFont, UIView, UIImage, ABUIPerson, AFContextManager, ABPersonViewControllerHelper;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration> {

	id<ABPersonViewControllerDelegate> _personViewDelegate;
	id _helper;
	id _internal;
	BOOL _internal2;
	NSTimer* _editAnimationTimer;
	BOOL _allowsContactBlocking;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
	ABContactViewController* _contactViewController;

}

@property (assign,nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate; 
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL allowsActions; 
@property (assign,nonatomic) BOOL shouldShowLinkedPeople; 
@property (assign,nonatomic) BOOL allowsSharing; 
@property (assign,nonatomic) BOOL allowsAddToFavorites; 
@property (assign,nonatomic) BOOL allowsDeletion; 
@property (assign,nonatomic) BOOL allowsCancel; 
@property (assign,nonatomic) BOOL allowsSounds; 
@property (assign,nonatomic) BOOL allowsVibrations; 
@property (assign,nonatomic) BOOL allowsConferencing; 
@property (assign,nonatomic) BOOL allowsContactBlocking;                                         //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) ABContactViewController * contactViewController;                    //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,readonly) UIView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView; 
@property (assign,nonatomic) BOOL shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) BOOL shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (assign,nonatomic) BOOL badgeEmailPropertiesForMailVIP; 
@property (assign,nonatomic) BOOL observesExternalChanges; 
@property (nonatomic,retain) ABUIPerson * displayedUIPerson; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider; 
@property (assign,nonatomic) BOOL appearsInLinkingPeoplePicker; 
@property (assign,nonatomic) BOOL allowsSettingAsPreferredCardForName; 
@property (nonatomic,readonly) AFContextManager * contextManager; 
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper; 
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewActionsDelegate * actionsDelegate;               //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewSharingDelegate * sharingDelegate;               //@synthesize sharingDelegate=_sharingDelegate - In the implementation block
@property (assign,nonatomic) id<ABPersonEditDelegate> editDelegate; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5 ;
-(id)newActionButton;
-(void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7 ;
-(void)setActionShouldPickHighlightedItem:(BOOL)arg1 ;
-(void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7 ;
-(void)setCustomAppearanceProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)tableHeaderView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)message;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(void)setAttribution:(NSString *)arg1 ;
-(NSString *)attribution;
-(void)updateRecord;
-(BOOL)supportedInterfaceOrientation:(long long)arg1 ;
-(int)abViewControllerType;
-(BOOL)isReadonly;
-(double)ab_heightToFitForViewInPopoverView;
-(ABPersonTableViewActionsDelegate *)actionsDelegate;
-(const void*)displayedPerson;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(BOOL)allowsCancel;
-(BOOL)handleExternalChange;
-(ABPersonViewControllerHelper *)helper;
-(ABUIPerson *)displayedUIPerson;
-(void)setDisplayedUIPerson:(ABUIPerson *)arg1 ;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsConferencing;
-(NSArray *)displayedProperties;
-(BOOL)allowsActions;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(BOOL)arg1 ;
-(void)setAllowsVibrations:(BOOL)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(BOOL)arg1 ;
-(void)setObservesExternalChanges:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)allowsSounds;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(BOOL)shouldShowLinkedPeople;
-(BOOL)allowsAddToFavorites;
-(BOOL)allowsSharing;
-(ABPersonTableViewSharingDelegate *)sharingDelegate;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(BOOL)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(BOOL)allowsVibrations;
-(BOOL)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1 ;
-(BOOL)shouldShowLinkingUIOnCard;
-(BOOL)appearsInLinkingPeoplePicker;
-(void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1 ;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2 ;
-(BOOL)observesExternalChanges;
-(BOOL)manuallyLinkPerson:(id)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(id<ABPersonViewControllerDelegate>)personViewDelegate;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(BOOL)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(BOOL)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(BOOL)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomFooterView:(UIView *)arg1 ;
-(UIView *)customFooterView;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(BOOL)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(BOOL)_updateAllDataForExternalChange;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)cancelEditing:(BOOL)arg1 ;
-(AFContextManager *)contextManager;
-(void)_removeContextProviderOnMainThread;
-(void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)arg1 ;
-(BOOL)isDelayingChangeNotifications;
-(void)startDelayingChangeNotifications;
-(void)pickerCancel:(id)arg1 ;
-(void)editCancel:(id)arg1 ;
-(void)_editAnimationTimerFired:(id)arg1 ;
-(void)peoplePickerLinkButtonTapped;
-(void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1 ;
-(void)_handleLocalChange:(CFDictionaryRef)arg1 ;
-(void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2 ;
-(void)saveChanges;
-(const void*)addressBook;
-(ABContactViewController *)contactViewController;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(void)setContactViewController:(ABContactViewController *)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setEditDelegate:(id<ABPersonEditDelegate>)arg1 ;
-(id<ABPersonEditDelegate>)editDelegate;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)updateTitle;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsSounds:(BOOL)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(void)updateNavigationButtons;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setShouldShowLinkedPeople:(BOOL)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setPersonViewDelegate:(id<ABPersonViewControllerDelegate>)arg1 ;
-(BOOL)allowsDeletion;
-(UIFont *)messageFont;
@end

