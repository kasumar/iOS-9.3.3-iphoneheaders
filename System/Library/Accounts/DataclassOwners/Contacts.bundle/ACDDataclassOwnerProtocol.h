/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/DataclassOwners/Contacts.bundle/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@optional
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

@required
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;

@end
