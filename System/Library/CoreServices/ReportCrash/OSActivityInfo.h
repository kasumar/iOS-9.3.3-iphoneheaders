/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReportCrash/ReportCrash-Structs.h>
@class NSMutableArray, CrashedThreadActivity, NSString, NSMutableDictionary;

@interface OSActivityInfo : NSObject {

	NSMutableArray* _breadcrumbMessages;
	NSMutableArray* _activityTraceMessages;
	CrashedThreadActivity* _crashedThreadActivity;
	NSString* _crashedActivityBreadcrumbName;
	NSMutableDictionary* _binaryInfo;
	NSMutableArray* _externalBinaryImages;
	unsigned long long _externalBinaryStartAddress;

}
-(id)initWithPid:(int)arg1 uniqueID:(unsigned long long)arg2 thread:(unsigned)arg3 target:(unsigned)arg4 ;
-(BOOL)hasCrashedThreadActivity;
-(id)crashedThreadActivityDescriptionWithBinaryImages:(id)arg1 ;
-(BOOL)hasBreadcrumbs;
-(id)breadcrumbDescription;
-(BOOL)hasGlobalTraceBuffer;
-(id)globalTraceBufferDescriptionWithBinaryImages:(id)arg1 ;
-(id)externalBinaryImages;
-(void)_extractBreadcrumbInfoWithProcessInfo:(os_activity_process_s*)arg1 ;
-(void)_extractActivityTraceMessagesWithProcessInfo:(os_activity_process_s*)arg1 thread:(unsigned)arg2 target:(unsigned)arg3 ;
-(void)addBreadcrumbWithTimeStamp:(unsigned long long)arg1 name:(const char*)arg2 activityID:(unsigned long long)arg3 ;
-(void)addActivityTraceMessageWithTimeStamp:(unsigned long long)arg1 UUIDBytes:(const char*)arg2 imagePath:(const char*)arg3 offset:(unsigned)arg4 message:(char*)arg5 ;
-(void)_extractActivityTraceMessagesWithActivityEntry:(os_activity_entry_s*)arg1 processInfo:(os_activity_process_s*)arg2 activityId:(unsigned long long)arg3 threadId:(unsigned long long)arg4 ;
-(unsigned long long)_machAbsoluteToSecsElapsed:(unsigned long long)arg1 ;
-(void)_initBinaryInfo:(id)arg1 ;
-(double)_machAbsoluteToFractionalSecsElapsed:(unsigned long long)arg1 ;
-(id)_individualTraceMessageDescription:(id)arg1 ;
-(unsigned long long)_createExternalBinaryWithUUID:(id)arg1 imagePath:(id)arg2 ;
-(void)dealloc;
@end

