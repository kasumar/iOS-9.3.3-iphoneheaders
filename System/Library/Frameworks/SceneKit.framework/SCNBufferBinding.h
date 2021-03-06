/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCNBufferBinding : NSObject {

	NSString* _name;
	long long _frequency;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) long long frequency;              //@synthesize frequency=_frequency - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

