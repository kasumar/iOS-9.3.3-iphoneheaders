/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunTimingEvent.h>

@class NSString;

@interface IDSUTunTimingEventOutgoing : NSObject <IDSUTunTimingEvent> {

	double _timestamp;
	double _duration;
	double _processTime;
	double _compressionTime;
	double _sendTime;
	long long _bytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(void)appendToString:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 sendTime:(double)arg5 bytes:(long long)arg6 ;
-(double)timestamp;
@end

