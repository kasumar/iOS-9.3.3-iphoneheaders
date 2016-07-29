/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Catalyst/Catalyst-Structs.h>
@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject {

	NSNumber* _adaptiveWriteTimeout;
	NSNumber* _keepAliveEnabled;
	NSNumber* _keepAliveDelay;
	NSNumber* _keepAliveInterval;
	NSNumber* _keepAliveCount;

}

@property (nonatomic,copy) NSNumber * adaptiveWriteTimeout;              //@synthesize adaptiveWriteTimeout=_adaptiveWriteTimeout - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveEnabled;                  //@synthesize keepAliveEnabled=_keepAliveEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveDelay;                    //@synthesize keepAliveDelay=_keepAliveDelay - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveInterval;                 //@synthesize keepAliveInterval=_keepAliveInterval - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveCount;                    //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)adaptiveWriteTimeout;
-(NSNumber *)keepAliveEnabled;
-(NSNumber *)keepAliveDelay;
-(NSNumber *)keepAliveInterval;
-(NSNumber *)keepAliveCount;
-(void)setAdaptiveWriteTimeout:(NSNumber *)arg1 ;
-(void)setKeepAliveEnabled:(NSNumber *)arg1 ;
-(void)setKeepAliveDelay:(NSNumber *)arg1 ;
-(void)setKeepAliveInterval:(NSNumber *)arg1 ;
-(void)setKeepAliveCount:(NSNumber *)arg1 ;
@end

