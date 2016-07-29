/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
@end

