/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@interface XBFileLogger : BSFileLogger
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPreferenceDomain;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2 ;
-(void)reloadFromDefaults;
@end

