/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(BOOL)isClassCLocked;
+(void)runBlockWhenDeviceIsReadyForSuggestions:(/*^block*/id)arg1 ;
+(BOOL)isDeviceFormattedForProtection;
+(void)blockUntilFirstUnlock;
+(void)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(BOOL)isConstrainedDevice;
+(id)currentOsBuild;
+(BOOL)isUnlocked;
+(int)lockState;
@end

