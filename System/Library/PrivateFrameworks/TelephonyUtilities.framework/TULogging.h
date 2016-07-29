/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TULogging : NSObject
+(BOOL)shouldLogType:(id)arg1 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 backtrace:(BOOL)arg5 format:(id)arg6 ;
+(void)_logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(BOOL)arg5 backtrace:(BOOL)arg6 format:(id)arg7 args:(char*)arg8 ;
+(void)checkpointLoggingSession:(id)arg1 ;
+(void)pulseLoggingSession;
+(BOOL)isWalkaboutEnabled;
+(void)enablePhoneLogging;
+(void)disablePhoneLogging;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(BOOL)arg4 format:(id)arg5 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(BOOL)arg5 backtrace:(BOOL)arg6 format:(id)arg7 ;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
+(void)beginLoggingSessionAsInitiator:(BOOL)arg1 ;
+(void)endLoggingSession;
@end

