/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPersonLinkingUIDelegate
@required
-(BOOL)shouldAllowLinkingAnotherContact;
-(long long)numberOfLinkedCardRows;
-(id)sourceNameForCardAtRow:(long long)arg1;
-(id)personNameForCardAtRow:(long long)arg1;
-(BOOL)manuallyUnlinkCardAtRow:(long long)arg1;
-(BOOL)canUnlinkCardAtRow:(long long)arg1;
-(BOOL)manuallyLinkPerson:(id)arg1;
-(BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
-(id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
-(id)newPeoplePickerForLinking;

@end

