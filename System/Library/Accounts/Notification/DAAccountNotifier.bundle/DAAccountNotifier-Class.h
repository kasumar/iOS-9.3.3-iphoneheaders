/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface DAAccountNotifier : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_leafAccountTypesToCheckForEquality;
-(BOOL)_sanityCheckChildAccountOfType:(id)arg1 withParent:(id)arg2 oldParentAccount:(id)arg3 inStore:(id)arg4 modifiedDataClasses:(id)arg5 ;
-(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
-(id)_dataclassesWeCareAbout;
-(BOOL)_sanityCheckCalDAVAccount:(id)arg1 modifiedDataClasses:(id)arg2 ;
-(BOOL)_sanityCheckChildDAVAccount:(id)arg1 withParent:(id)arg2 modifiedDataClasses:(id)arg3 ;
-(id)_parentAccountTypes;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)arg1 inStore:(id)arg2 ;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2 ;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2 ;
-(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
@end
