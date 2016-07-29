/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString, GEOTileCache;

@interface MKTileOverlay : NSObject <MKOverlay> {

	NSString* _URLTemplate;
	CGSize _tileSize;
	BOOL _geometryFlipped;
	long long _minimumZ;
	long long _maximumZ;
	BOOL _canReplaceMapContent;
	unsigned _providerID;
	GEOTileCache* _tileCache;

}

@property (assign) CGSize tileSize;                                          //@synthesize tileSize=_tileSize - In the implementation block
@property (getter=isGeometryFlipped) BOOL geometryFlipped;                   //@synthesize geometryFlipped=_geometryFlipped - In the implementation block
@property (assign) long long minimumZ;                                       //@synthesize minimumZ=_minimumZ - In the implementation block
@property (assign) long long maximumZ;                                       //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) NSString * URLTemplate;                                 //@synthesize URLTemplate=_URLTemplate - In the implementation block
@property (assign,nonatomic) BOOL canReplaceMapContent;                      //@synthesize canReplaceMapContent=_canReplaceMapContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK7 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK10 boundingMapRect; 
-(void)dealloc;
-(id)init;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(BOOL)canReplaceMapContent;
-(SCD_Struct_MK10)boundingMapRect;
-(void)setCanReplaceMapContent:(BOOL)arg1 ;
-(void)_flushCaches;
-(id)_tilesInMapRect:(SCD_Struct_MK10)arg1 zoomScale:(double)arg2 contentScale:(double)arg3 ;
-(id)URLForTilePath:(SCD_Struct_MK22)arg1 ;
-(id)initWithURLTemplate:(id)arg1 ;
-(void)setMaximumZ:(long long)arg1 ;
-(void)setMinimumZ:(long long)arg1 ;
-(GEOTileKey)_keyForPath:(SCD_Struct_MK22)arg1 ;
-(void)_loadTile:(id)arg1 result:(/*^block*/id)arg2 ;
-(long long)minimumZ;
-(NSString *)URLTemplate;
-(void)_assignProviderID;
-(void)loadTileAtPath:(SCD_Struct_MK22)arg1 result:(/*^block*/id)arg2 ;
-(long long)maximumZ;
-(int)_zoomLevelForScale:(double)arg1 ;
-(SCD_Struct_MK7)coordinate;
@end

