/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSCECalcTimeoutObject : NSObject {

	double _timeoutInterval;
	NSString* _blockingIdentifier;

}

@property (readonly) double timeoutInterval;                     //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) NSString * blockingIdentifier;              //@synthesize blockingIdentifier=_blockingIdentifier - In the implementation block
-(NSString *)blockingIdentifier;
-(void)dealloc;
-(double)timeoutInterval;
-(id)initWithTimeout:(double)arg1 ;
@end
