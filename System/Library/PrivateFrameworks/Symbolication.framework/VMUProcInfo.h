/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(BOOL)isProcessRunning:(int)arg1 ;
+(int)processParentId:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(unsigned)task;
-(void)update;
-(BOOL)isRunning;
-(timeval)startTime;
-(id)initWithTask:(unsigned)arg1 ;
-(id)arguments;
-(int)pid;
-(int)cpuType;
-(BOOL)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)procTableName;
-(id)envVars;
-(id)firstArgument;
-(id)requestedAppName;
-(BOOL)isCFM;
-(id)valueForEnvVar:(id)arg1 ;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)signal:(int)arg1 ;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
-(id)initWithPid:(int)arg1 ;
-(BOOL)terminate;
-(void)finalize;
-(int)ppid;
@end

