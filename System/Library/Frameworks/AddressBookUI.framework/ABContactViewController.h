/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactContentViewController.h>

@class ABContactView, ABContactHeaderView;

@interface ABContactViewController : CNContactContentViewController

@property (nonatomic,readonly) ABContactView * contactView; 
@property (nonatomic,readonly) ABContactHeaderView * contactHeaderView; 
@property (assign,nonatomic) id<ABContactViewControllerDelegate> contactDelegate; 
-(void)applyStyleProvider:(id)arg1 ;
-(id)cardGroupForProperty:(id)arg1 ;
@end

