/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchLayer.h>

@class CIImage, NSMutableArray, UIImage;

@interface BLRetouchRedEyeLayer : BLRetouchLayer {

	CIImage* _ciSourceImage;
	NSMutableArray* _eyePoints;
	UIImage* _repairSourceImage;
	UIImage* _repairedImage;

}

@property (nonatomic,copy) NSMutableArray * eyePoints;                 //@synthesize eyePoints=_eyePoints - In the implementation block
@property (nonatomic,retain) UIImage * repairSourceImage;              //@synthesize repairSourceImage=_repairSourceImage - In the implementation block
@property (nonatomic,retain) UIImage * repairedImage;                  //@synthesize repairedImage=_repairedImage - In the implementation block
+(id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(CGSize)arg3 newTimestampIncrement:(double*)arg4 ;
+(long long)indexOfPointNear:(CGPoint)arg1 inEyePoints:(id)arg2 andMaskSize:(CGSize)arg3 ;
-(BOOL)hasLayerMask;
-(void)dealloc;
-(float)amount;
-(CGRect)area;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(id)layerData;
-(void)setLayerData:(id)arg1 ;
-(CGRect)maskFrame;
-(UIImage *)repairSourceImage;
-(void)setRepairSourceImage:(UIImage *)arg1 ;
-(NSMutableArray *)eyePoints;
-(void)setRepairedImage:(UIImage *)arg1 ;
-(UIImage *)repairedImage;
-(void)hasLayerMaskDidChange;
-(void)repairRedEyes;
-(void)setEyePoints:(NSMutableArray *)arg1 ;
-(long long)indexOfPointNear:(CGPoint)arg1 ;
-(CGRect)tapAtPoint:(CGPoint)arg1 actualLocation:(CGPoint*)arg2 foundEye:(BOOL*)arg3 addedEye:(BOOL*)arg4 ;
-(void)clearRedEyes;
@end

