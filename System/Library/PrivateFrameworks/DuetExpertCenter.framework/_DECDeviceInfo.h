/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DECDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isInternalBuild;
+(BOOL)isLowEndHardware;
-(void)dealloc;
-(id)init;
@end
