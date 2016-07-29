/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKTileSelection : NSObject {

	long long _tileSize;
	BOOL _bootstrap;
	unsigned long long _maxZ;
	double _lodBias;

}

@property (assign,nonatomic) long long tileSize;                   //@synthesize tileSize=_tileSize - In the implementation block
@property (assign,nonatomic) BOOL bootstrap;                       //@synthesize bootstrap=_bootstrap - In the implementation block
@property (assign,nonatomic) unsigned long long maxZ;              //@synthesize maxZ=_maxZ - In the implementation block
@property (assign,nonatomic) double lodBias;                       //@synthesize lodBias=_lodBias - In the implementation block
-(id)init;
-(void)setTileSize:(long long)arg1 ;
-(long long)tileSize;
-(void)setMaxZ:(unsigned long long)arg1 ;
-(void)setLodBias:(double)arg1 ;
-(double)lodBias;
-(unsigned long long)maxZ;
-(id)keysForContext:(id)arg1 neighbors:(id)arg2 selectionScale:(float)arg3 ;
-(BOOL)bootstrap;
-(void)setBootstrap:(BOOL)arg1 ;
-(SCD_Struct_VK597)relevantTilesForContext:(id)arg1 ;
@end

