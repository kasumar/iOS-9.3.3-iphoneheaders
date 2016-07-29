/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface VKRasterOverlayTileSource : VKTileSource {

	NSMutableArray* _overlays;
	NSObject*<OS_dispatch_group> _renderGroup;
	NSObject*<OS_dispatch_queue> _homeQ;
	BOOL _overrideMaxZoomLevel;

}

@property (assign,nonatomic) BOOL overrideMaxZoomLevel;              //@synthesize overrideMaxZoomLevel=_overrideMaxZoomLevel - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(long long)tileSize;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(BOOL)overrideMaxZoomLevel;
-(void)setOverrideMaxZoomLevel:(BOOL)arg1 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(unsigned)minimumDownloadZoomLevel;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 ;
-(unsigned)maximumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(void)_queueDraw:(const VKTileKey*)arg1 ;
-(void)_flush;
-(void)invalidateRect:(const SCD_Struct_VK11*)arg1 level:(long long)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(void)removeOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(NSArray *)overlays;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
@end

