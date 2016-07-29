/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableDictionary, NSDictionary, BLPEModel;

@interface BLPhotoEffectsModel : NSObject {

	int _effectGroupIndex;
	float _effectValue;
	BOOL _hasAdjustments;
	NSMutableDictionary* _adjustments;
	NSDictionary* _analysis;
	BLPEModel* _model;

}
-(void)dealloc;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ignoreEdgeEffects:(BOOL)arg3 ;
-(BOOL)hasPhotoEffects;
-(BOOL)hasInkEffects;
-(BOOL)hasEdgeEffects;
-(BOOL)hasFastDownstreamEffects;
-(BOOL)needsPadding;
-(double)paddingForSize:(CGSize)arg1 ;
-(id)imageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(double)arg3 ;
-(BOOL)canRenderCI;
-(id)imageWithPhotoEffectsForImage:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(double)arg3 ;
-(id)ciImageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(double)arg3 ;
-(id)ciImageWithPhotoEffectsForCIImage:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(double)arg3 ;
@end

