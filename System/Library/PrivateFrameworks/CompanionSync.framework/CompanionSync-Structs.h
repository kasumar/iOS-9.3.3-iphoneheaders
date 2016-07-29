/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFString* CFStringRef;

typedef struct os_lock_handoff_s {
	_os_lock_type_handoff_s osl_type;
	unsigned long long _osl_handoff_opaque[1];
} os_lock_handoff_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct {
	unsigned estimatedChangeCount : 1;
} SCD_Struct_SY6;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_SY8;

