/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath {

	float _staticFriction;
	float _kineticFriction;
	float _skinFriction;

}

@property (assign,nonatomic) float staticFriction;               //@synthesize staticFriction=_staticFriction - In the implementation block
@property (assign,nonatomic) float kineticFriction;              //@synthesize kineticFriction=_kineticFriction - In the implementation block
@property (assign,nonatomic) float skinFriction;                 //@synthesize skinFriction=_skinFriction - In the implementation block
-(id)initWithImprint:(id)arg1 ;
-(float)kineticFriction;
-(float)skinFriction;
-(float)staticFriction;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setStaticFriction:(float)arg1 ;
-(void)setKineticFriction:(float)arg1 ;
-(void)setSkinFriction:(float)arg1 ;
-(id)imprint;
@end

