/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountViewsProviderProtocol.h>

@class NSString;

@interface DAVSettingsPlugin : NSObject <ACUIAccountViewsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedAccountTypeIdentifiers;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
@end

