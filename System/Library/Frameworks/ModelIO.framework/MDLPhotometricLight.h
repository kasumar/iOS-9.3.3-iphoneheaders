/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class NSMutableData, MDLTexture, NSData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {

	RTIESLight* _iesLight;
	NSMutableData* _sphericalHarmonicsCoefficients;
	MDLTexture* _lightCubeMap;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * lightCubeMap;                          //@synthesize lightCubeMap=_lightCubeMap - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
-(id)initWithIESProfile:(id)arg1 ;
-(void)generateCubemapFromLight:(unsigned long long)arg1 ;
-(void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1 ;
-(void)computeLumens;
-(float)computeInnerAngle;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(id)_computeSceneKitRenderingTexture:(unsigned long long)arg1 ;
-(CGColorRef)evaluatedColorFromSHVector:;
-(MDLTexture *)lightCubeMap;
-(unsigned long long)sphericalHarmonicsLevel;
-(NSData *)sphericalHarmonicsCoefficients;
@end

