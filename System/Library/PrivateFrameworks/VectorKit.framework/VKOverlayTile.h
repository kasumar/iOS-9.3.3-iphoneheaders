/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VKTile.h>

@class NSMutableArray, VKVectorTile, NSMapTable, NSArray;

@interface VKOverlayTile : VKTile {

	NSMutableArray* _overlays;
	VKVectorTile* _roadTile;
	NSMapTable* _tileForOverlay;
	float _maximumStyleZ;

}

@property (nonatomic,readonly) NSArray * overlays;                 //@synthesize overlays=_overlays - In the implementation block
@property (nonatomic,retain) VKVectorTile * roadTile;              //@synthesize roadTile=_roadTile - In the implementation block
@property (nonatomic,readonly) float maximumStyleZ;                //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
-(void)dealloc;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(float)maximumStyleZ;
-(void)setRoadTile:(VKVectorTile *)arg1 ;
-(void)setTile:(id)arg1 forOverlay:(id)arg2 ;
-(id)tileForOverlay:(id)arg1 ;
-(VKVectorTile *)roadTile;
-(NSArray *)overlays;
-(void)addOverlay:(id)arg1 ;
@end

