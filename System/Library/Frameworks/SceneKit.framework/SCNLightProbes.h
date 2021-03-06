/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SCNNode;

@interface SCNLightProbes : NSObject <NSSecureCoding> {

	C3DSphere* _probes;
	SCD_Struct_SC86* _tetrahedrons;
	NSArray* _bakedLights;
	long long _bakingMethod;
	unsigned long long _probesCount;
	unsigned long long _tetrahedronCount;
	SCNNode* _owner;
	unsigned long long _probesCapacity;
	BOOL _tetrahedronsValid;

}

@property (assign,nonatomic) unsigned long long probesCount; 
@property (nonatomic,retain) NSArray * bakedLights; 
@property (assign,nonatomic) long long bakingMethod;                             //@synthesize bakingMethod=_bakingMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long tetrahedronCount; 
+(BOOL)supportsSecureCoding;
+(id)lightProbes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)_setOwner:(id)arg1 ;
-(void)_removeOwner;
-(C3DSceneRef)sceneRef;
-(SCNVector3)probePositionAtIndex:(unsigned long long)arg1 ;
-(void)setProbePosition:(SCNVector3)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)probesCount;
-(void)insertProbesAtIndex:(unsigned long long)arg1 ;
-(void)removeProbeAtIndex:(unsigned long long)arg1 ;
-(void)invalidateTetrahedons;
-(void)validateProbeArrayIfNeeded;
-(void)setProbesCount:(unsigned long long)arg1 ;
-(NSArray *)bakedLights;
-(void)setBakedLights:(NSArray *)arg1 ;
-(void)computeNeighbourIndexes;
-(void)updateTetrahedronsIfNeeded;
-(void)_customEncodingOfSCNLightProbes:(id)arg1 ;
-(void)_customDecodingOfSCNLightProbes:(id)arg1 ;
-(void)removeAllProbes;
-(void)arrangeProbesByGridWithBounds:(SCNVector3)arg1 ;
-(void)arrangeProbesByDensityWithScene:(id)arg1 ;
-(unsigned long long)tetrahedronCount;
-(void)tetrahedronAtIndex:(unsigned long long)arg1 indexes:(unsigned*)arg2 ;
-(long long)bakingMethod;
-(void)setBakingMethod:(long long)arg1 ;
@end

