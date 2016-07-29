/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetEmbeddedThumbnailProperties : NSObject {

	short _embeddedThumbnailWidth;
	short _embeddedThumbnailHeight;
	int _embeddedThumbnailOffset;
	int _embeddedThumbnailLength;
	PHAsset* _asset;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL hasEmbeddedThumbnail; 
@property (nonatomic,readonly) NSData * embeddedThumbnailData; 
@property (nonatomic,readonly) int embeddedThumbnailOffset;                 //@synthesize embeddedThumbnailOffset=_embeddedThumbnailOffset - In the implementation block
@property (nonatomic,readonly) int embeddedThumbnailLength;                 //@synthesize embeddedThumbnailLength=_embeddedThumbnailLength - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailWidth;                //@synthesize embeddedThumbnailWidth=_embeddedThumbnailWidth - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailHeight;               //@synthesize embeddedThumbnailHeight=_embeddedThumbnailHeight - In the implementation block
-(PHAsset *)asset;
-(int)embeddedThumbnailOffset;
-(int)embeddedThumbnailLength;
-(short)embeddedThumbnailWidth;
-(short)embeddedThumbnailHeight;
-(BOOL)hasEmbeddedThumbnail;
-(NSData *)embeddedThumbnailData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
@end

