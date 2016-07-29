/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation {

	double _scalar;

}

@property (assign,nonatomic) double scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(double)arg3 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setScalar:(double)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(double)scalar;
-(id)description;
-(id)imprint;
@end

