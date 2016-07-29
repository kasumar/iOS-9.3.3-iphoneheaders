/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VKPlatform : NSObject {

	unsigned long long _memSize;
	int _numCPUs;
	BOOL _proceduralRoadAlpha;
	BOOL _useCheapTrafficShader;
	BOOL _supportsBuildingStrokes;
	BOOL _supports3DBuildingStrokes;
	BOOL _lowPerformanceDevice;
	BOOL _supportsCoastlineGlows;

}

@property (nonatomic,readonly) BOOL roadsWithSimpleLineMeshesAvailable; 
@property (nonatomic,readonly) unsigned long long tileMaximumLimit; 
@property (nonatomic,readonly) unsigned tilePrefetchNumberOfScreens; 
@property (nonatomic,readonly) BOOL supportsHiResRTT; 
@property (nonatomic,readonly) BOOL isPad; 
@property (nonatomic,readonly) BOOL shouldDrawWhenReady; 
@property (nonatomic,readonly) BOOL shouldStyleLabelsInParallel; 
@property (nonatomic,readonly) BOOL shouldLayoutLabelsInParallel; 
@property (nonatomic,readonly) BOOL shouldPregenerateLabelGlyphs; 
@property (nonatomic,readonly) BOOL canMakeSharingThumbnails; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) double mainScreenPPI; 
@property (nonatomic,readonly) double maxContentScaleForRendering; 
@property (nonatomic,readonly) BOOL supportsBuildingShadows; 
@property (nonatomic,readonly) BOOL supportsBuildingStrokes;                         //@synthesize supportsBuildingStrokes=_supportsBuildingStrokes - In the implementation block
@property (nonatomic,readonly) BOOL supports3DBuildingStrokes;                       //@synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes - In the implementation block
@property (nonatomic,readonly) BOOL supportsHiResBuildings; 
@property (nonatomic,readonly) BOOL supports3DBuildings; 
@property (nonatomic,readonly) BOOL supportsCoastlineGlows;                          //@synthesize supportsCoastlineGlows=_supportsCoastlineGlows - In the implementation block
@property (nonatomic,readonly) BOOL proceduralRoadAlpha;                             //@synthesize proceduralRoadAlpha=_proceduralRoadAlpha - In the implementation block
@property (nonatomic,readonly) BOOL useCheapTrafficShader;                           //@synthesize useCheapTrafficShader=_useCheapTrafficShader - In the implementation block
@property (nonatomic,readonly) unsigned long long memorySize;                        //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) unsigned char tileDecodeQueueWidth; 
@property (nonatomic,readonly) BOOL lowPerformanceDevice; 
@property (nonatomic,readonly) double routeLineSimplificationEpsilon; 
+(id)sharedPlatform;
-(void)dealloc;
-(id)init;
-(BOOL)lowPerformanceDevice;
-(double)mainScreenPPI;
-(BOOL)supports3DBuildings;
-(BOOL)supportsBuildingShadows;
-(BOOL)supportsBuildingStrokes;
-(BOOL)supports3DBuildingStrokes;
-(BOOL)supportsCoastlineGlows;
-(BOOL)proceduralRoadAlpha;
-(unsigned char)tileDecodeQueueWidth;
-(BOOL)shouldLayoutLabelsInParallel;
-(BOOL)shouldPregenerateLabelGlyphs;
-(BOOL)useCheapTrafficShader;
-(BOOL)supportsHiResBuildings;
-(BOOL)shouldDrawWhenReady;
-(BOOL)shouldStyleLabelsInParallel;
-(void)_determineHardware;
-(BOOL)roadsWithSimpleLineMeshesAvailable;
-(unsigned long long)_calculateMemSize;
-(double)routeLineSimplificationEpsilon;
-(unsigned long long)tileMaximumLimit;
-(unsigned long long)tileReserveLimit:(BOOL)arg1 ;
-(unsigned)tilePrefetchNumberOfScreens;
-(unsigned long long)memorySize;
-(BOOL)canMakeSharingThumbnails;
-(double)maxContentScaleForRendering;
-(BOOL)supportsHiResRTT;
-(double)mainScreenScale;
-(BOOL)isPad;
@end

