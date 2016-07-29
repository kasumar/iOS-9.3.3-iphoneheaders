/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@interface BKSFenceLogger : BSFileLogger {

	BOOL _reportable;

}

@property (getter=_isReportable,nonatomic,readonly) BOOL _reportable;              //@synthesize reportable=_reportable - In the implementation block
+(id)initializeLogging;
-(void)_reloadFromDefaultsDictionary:(id)arg1 ;
-(BOOL)_isReportable;
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(id)logPath;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPreferenceDomain;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2 ;
-(unsigned long long)logDestinations;
-(BOOL)shouldEnableOnInternalBuilds;
@end

