/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMUIndent : NSObject {

	NSString* _level;
	NSString* _step;
	unsigned long long _factor;

}

@property (nonatomic,readonly) NSString * level;                       //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) NSString * step;                        //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) unsigned long long factor;              //@synthesize factor=_factor - In the implementation block
+(id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
+(id)indentWithLevel:(id)arg1 ;
-(id)description;
-(NSString *)level;
-(NSString *)step;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
-(id)indentByFactor:(unsigned long long)arg1 ;
-(unsigned long long)factor;
@end

