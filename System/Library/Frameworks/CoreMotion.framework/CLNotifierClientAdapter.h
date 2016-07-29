/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/CLNotifierServiceClientProtocol.h>

@class NSString;

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {

	CLNotifierClientBase* _client;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)valid;
-(void)onNotification:(int)arg1 withData:(id)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithClient:(CLNotifierClientBase*)arg1 ;
@end

