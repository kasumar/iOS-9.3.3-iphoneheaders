/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedImageDescription : NSObject {

	double _scale;
	long long _idiom;
	long long _subtype;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	int _blendMode;
	long long _templateRenderingMode;
	long long _imageType;
	psdGradientColor _edgeInsets;
	psdGradientColor _alignmentEdgeInsets;
	long long _resizingMode;
	int _exifOrientation;

}

@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long idiom;                                   //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                                 //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                     //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                       //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) int blendMode;                                     //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                   //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) long long imageType;                               //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) psdGradientColor edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) psdGradientColor alignmentEdgeInsets;              //@synthesize alignmentEdgeInsets=_alignmentEdgeInsets - In the implementation block
@property (assign,nonatomic) long long resizingMode;                            //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                               //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(id)description;
-(void)setScale:(double)arg1 ;
-(long long)subtype;
-(double)scale;
-(psdGradientColor)edgeInsets;
-(long long)resizingMode;
-(int)exifOrientation;
-(psdGradientColor)alignmentEdgeInsets;
-(long long)templateRenderingMode;
-(void)setSubtype:(long long)arg1 ;
-(long long)idiom;
-(BOOL)isTemplate;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setIdiom:(long long)arg1 ;
-(void)setEdgeInsets:(psdGradientColor)arg1 ;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(void)setSizeClassVertical:(long long)arg1 ;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setAlignmentEdgeInsets:(psdGradientColor)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(void)setExifOrientation:(int)arg1 ;
-(long long)imageType;
@end

