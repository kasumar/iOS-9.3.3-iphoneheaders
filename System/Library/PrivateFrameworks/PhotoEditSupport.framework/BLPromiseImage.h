/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImage.h>

@class BLImagePatchList, BLPixelImageBuffer, BLCropModel, BLAdjustmentModel, BLPhotoEffectsModel, BLRetouchModel, BLRepairModel, NSLock, NSDictionary;

@interface BLPromiseImage : BLImage {

	CGImageRef _sourceCGImage;
	BLImagePatchList* _imagePatchList;
	BLImagePatchList* _repairImagePatchList;
	BLPixelImageBuffer* _flattenedImageBuffer;
	long long _backOrientation;
	long long _initialOrientation;
	long long _actualOrientation;
	CGSize _sourceSize;
	BLCropModel* _userCropModel;
	BLCropModel* _cropModel;
	BLAdjustmentModel* _adjustmentModel;
	BLPhotoEffectsModel* _photoEffectsModel;
	BLRetouchModel* _retouchModel;
	BLRepairModel* _repairModel;
	NSLock* _drawLock;
	NSDictionary* _adjustments;
	NSDictionary* _analysis;

}

@property (nonatomic,readonly) CGSize sourceSize;              //@synthesize sourceSize=_sourceSize - In the implementation block
+(void)convertXMP:(id)arg1 toAdjustments:(id)arg2 andAnalysis:(id)arg3 size:(CGSize)arg4 image:(id)arg5 needsHistogram:(BOOL*)arg6 ;
+(CGSize)maximumSizeForFlattening;
+(id)imageWithImage:(id)arg1 ;
-(void)dealloc;
-(CGImageRef)CGImage;
-(id)CIImage;
-(id)UIImage;
-(BOOL)hasColor;
-(BOOL)hasCrop;
-(id)initWithCGImage:(CGImageRef)arg1 orImagePatchList:(id)arg2 flattenedImageBuffer:(id)arg3 backOrientation:(long long)arg4 orientation:(long long)arg5 userCrop:(CGRect)arg6 adjustmentData:(id)arg7 andAnalysisData:(id)arg8 andOptionFlags:(int)arg9 ;
-(BOOL)hasRedeye;
-(BOOL)hasExposure;
-(BOOL)hasPhotoEffects;
-(BOOL)hasRetouch;
-(BOOL)hasRepairOrRedeye;
-(BOOL)hasInkEffects;
-(BOOL)hasEdgeEffects;
-(BOOL)hasFastDownstreamEffects;
-(BOOL)hasRepair;
-(void)drawInContext:(CGContextRef)arg1 forRect:(CGRect)arg2 andSize:(CGSize)arg3 ;
-(void)_drawImagePatchListInContext:(CGContextRef)arg1 imagePatchList:(id)arg2 size:(CGSize)arg3 drawScaleX:(double)arg4 drawScaleY:(double)arg5 totalPadding:(double)arg6 ;
-(CGSize)_targetSizeForBoundingSize:(CGSize)arg1 shouldScaleForScreen:(BOOL)arg2 ;
-(void)prepareForDrawing;
-(BOOL)_flattenInContext:(CGContextRef)arg1 targetSize:(CGSize)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)flattenedImageInBoundingSize:(CGSize)arg1 shouldScaleForScreen:(BOOL)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)flattenedImageInBoundingSize:(CGSize)arg1 shouldScaleForScreen:(BOOL)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6 ;
-(id)initWithPromiseImage:(id)arg1 andOptionFlags:(int)arg2 ;
-(id)initWithPromiseImage:(id)arg1 userCrop:(CGRect)arg2 andOptionFlags:(int)arg3 ;
-(id)initWithImagePatchList:(id)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 flattenedImageBuffer:(id)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6 ;
-(void)setRetouchLayerStack:(id)arg1 ;
-(id)retouchLayerStack;
-(void)setRepairLayerStack:(id)arg1 ;
-(id)repairLayerStack;
-(id)flattenedImageFromRect:(CGRect)arg1 forSize:(CGSize)arg2 ;
-(id)flattenedPixelImageBufferInBoundingSize:(CGSize)arg1 shouldScaleForScreen:(BOOL)arg2 ;
-(CGSize)sourceSize;
-(BOOL)hasEdits;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4 andOptionFlags:(int)arg5 ;
-(id)flattenedImageInBoundingSize:(CGSize)arg1 ;
-(CGSize)maximumSize;
-(BOOL)hasRotation;
@end

