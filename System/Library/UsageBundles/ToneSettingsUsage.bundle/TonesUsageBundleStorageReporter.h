/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/ToneSettingsUsage.bundle/ToneSettingsUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSString;

@interface TonesUsageBundleStorageReporter : NSObject <PSStorageReporting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_localizedStringWithIdentifier:(id)arg1 ;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2 ;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
@end
