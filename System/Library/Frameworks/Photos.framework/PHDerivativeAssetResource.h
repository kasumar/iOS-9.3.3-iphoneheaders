/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetResource.h>

@class PLImageFormat;

@interface PHDerivativeAssetResource : PHAssetResource {

	BOOL _tableFormat;
	PLImageFormat* _format;

}

@property (getter=isThumbnail,nonatomic,readonly) BOOL thumbnail; 
@property (getter=isTableFormat,nonatomic,readonly) BOOL tableFormat;                      //@synthesize tableFormat=_tableFormat - In the implementation block
@property (getter=isCroppedToSquare,nonatomic,readonly) BOOL croppedToSquare; 
@property (nonatomic,retain) PLImageFormat * format;                                       //@synthesize format=_format - In the implementation block
+(id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1 ;
+(id)CPLDerivativeAssetResourcesForAsset:(id)arg1 usingLibrary:(id)arg2 ;
+(id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2 ;
+(id)tableThumbnailDataForAsset:(id)arg1 resource:(id)arg2 dataSpecification:(id*)arg3 ;
-(id)description;
-(id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2 ;
-(id)initWithCloudResource:(id)arg1 forAsset:(id)arg2 ;
-(id)initWithQualityClass:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)isTableThumbnail;
-(BOOL)isCroppedToSquare;
-(BOOL)isTableFormat;
-(PLImageFormat *)format;
-(void)setFormat:(PLImageFormat *)arg1 ;
-(BOOL)isThumbnail;
@end

