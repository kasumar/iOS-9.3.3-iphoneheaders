/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@protocol CNContactGroupPickerDelegate;
@interface CNContactAddNewFieldAction : CNContactAction {

	id<CNContactGroupPickerDelegate> _groupPickerDelegate;

}

@property (assign,nonatomic,__weak) id<CNContactGroupPickerDelegate> groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(id<CNContactGroupPickerDelegate>)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id<CNContactGroupPickerDelegate>)arg1 ;
@end

