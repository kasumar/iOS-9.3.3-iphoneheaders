/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, UIImage;

@interface WallpaperMotionItem : NSObject {

	NSString* _motionKey;
	NSString* _videoPath;
	NSString* _imagePath;
	NSNumber* _stillPositionInVideo;
	NSString* _thumbnailPath;
	UIImage* _cachedThumbnailImage;

}

@property (nonatomic,retain) NSString * motionKey;                         //@synthesize motionKey=_motionKey - In the implementation block
@property (nonatomic,retain) NSString * videoPath;                         //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,retain) NSString * imagePath;                         //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,retain) NSNumber * stillPositionInVideo;              //@synthesize stillPositionInVideo=_stillPositionInVideo - In the implementation block
@property (nonatomic,retain) NSString * thumbnailPath;                     //@synthesize thumbnailPath=_thumbnailPath - In the implementation block
@property (nonatomic,retain) UIImage * cachedThumbnailImage;               //@synthesize cachedThumbnailImage=_cachedThumbnailImage - In the implementation block
-(NSString *)videoPath;
-(void)setVideoPath:(NSString *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imagePath;
-(NSString *)thumbnailPath;
-(UIImage *)cachedThumbnailImage;
-(NSString *)motionKey;
-(void)setMotionKey:(NSString *)arg1 ;
-(NSNumber *)stillPositionInVideo;
-(void)setStillPositionInVideo:(NSNumber *)arg1 ;
-(void)setThumbnailPath:(NSString *)arg1 ;
-(void)setCachedThumbnailImage:(UIImage *)arg1 ;
@end

