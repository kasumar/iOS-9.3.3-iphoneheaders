/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, MRImageManager, MRImage, NSDictionary;

@interface MRAssetMaster : NSObject {

	NSMutableDictionary* _players;
	NSMutableSet* _unusedPlayers;
	BOOL _isEmbeddedAsset;
	BOOL _isValid;
	BOOL _isSupportedMovie;
	NSString* _path;
	MRImageManager* _imageManager;
	MRImage* _thumbnail;
	double _timestamp;
	CGSize _originalSize;

}

@property (readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (readonly) MRImageManager * imageManager;              //@synthesize imageManager=_imageManager - In the implementation block
@property (readonly) MRImage * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) CGSize originalSize;                        //@synthesize originalSize=_originalSize - In the implementation block
@property (readonly) BOOL isValid;                               //@synthesize isValid=_isValid - In the implementation block
@property (readonly) BOOL isEmbeddedAsset;                       //@synthesize isEmbeddedAsset=_isEmbeddedAsset - In the implementation block
@property (readonly) BOOL isSupportedMovie;                      //@synthesize isSupportedMovie=_isSupportedMovie - In the implementation block
@property (readonly) NSDictionary * players;                     //@synthesize players=_players - In the implementation block
-(id)initWithPath:(id)arg1 originalSize:(CGSize)arg2 isEmbeddedAsset:(BOOL)arg3 isSupportedMovie:(BOOL)arg4 andImageManager:(id)arg5 ;
-(id)retainedByUserPlayerForSize:(CGSize)arg1 andOptions:(id)arg2 ;
-(void)relinquishPlayer:(id)arg1 ;
-(id)thumbnailForFlagsMonochromatic:(BOOL)arg1 mipmap:(BOOL)arg2 powerOfTwo:(BOOL)arg3 ;
-(BOOL)isSupportedMovie;
-(BOOL)purgeResources;
-(BOOL)isEmbeddedAsset;
-(void)dealloc;
-(double)timestamp;
-(void)invalidate;
-(BOOL)isValid;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)path;
-(MRImage *)thumbnail;
-(CGSize)originalSize;
-(MRImageManager *)imageManager;
-(NSDictionary *)players;
@end

