/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter;

@interface MCUIFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;

}
+(id)sharedInstance;
-(id)numberFormatter;
-(void)dealloc;
-(id)init;
-(void)_localeDidChange:(id)arg1 ;
@end

