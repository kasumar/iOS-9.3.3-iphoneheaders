/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@class AVAsset;

@interface ISCrossfadeChefOperation : NSOperation {

	int _photoEXIFOrientation;
	AVAsset* _videoAsset;
	double _crossfadeDuration;
	double _sourceStartTime;
	id _stillPhoto;
	unsigned long long _numberOfFrames;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                           //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) double crossfadeDuration;                       //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,readonly) double sourceStartTime;                         //@synthesize sourceStartTime=_sourceStartTime - In the implementation block
@property (nonatomic,retain) id stillPhoto;                                    //@synthesize stillPhoto=_stillPhoto - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                       //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFrames;              //@synthesize numberOfFrames=_numberOfFrames - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                              //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                          //@synthesize resultHandler=_resultHandler - In the implementation block
-(CGSize)targetSize;
-(id)resultHandler;
-(AVAsset *)videoAsset;
-(double)crossfadeDuration;
-(int)photoEXIFOrientation;
-(id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(CGImageRef)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(CGSize)arg7 resultHandler:(/*^block*/id)arg8 ;
-(void)setStillPhoto:(id)arg1 ;
-(double)sourceStartTime;
-(id)stillPhoto;
-(unsigned long long)numberOfFrames;
@end

