/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class ReporterFilter;

@interface TransportHandler : NSObject {

	transport_connection_sRef _connection;
	unsigned long long _connectionId;
	/*function pointer*/void* _writeFn;
	unsigned _ackId;
	BOOL _readOutstanding;
	BOOL _filterUpdateOutstanding;
	BOOL _disabled;
	unsigned _reporterId;
	const char* _reporterName;
	unsigned long long _pid;
	const char* _processName;
	const char* _applicationId;
	ReporterFilter* _reporterFilter;

}
+(void)initialize;
+(void)updateFilters:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)disconnect;
-(void)connect:(transport_connection_sRef)arg1 id:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 pid:(unsigned long long)arg4 name:(char*)arg5 ;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)didReceiveEvent:(id)arg1 ;
@end

