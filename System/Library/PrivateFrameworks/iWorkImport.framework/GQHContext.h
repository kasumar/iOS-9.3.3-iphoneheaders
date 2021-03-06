/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQHContext <NSObject>
@required
-(void)createMaskedImageWithId:(CFStringRef)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(CGPathRef)arg6 graphicStyle:(id)arg7 isFloating:(BOOL)arg8 state:(id)arg9;
-(void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
-(void)createShapeWithId:(CFStringRef)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6;
-(void)setBezierPath:(char*)arg1 state:(id)arg2;
-(void)prepareContext:(id)arg1;
-(void)teardownContext:(id)arg1;
-(void)setContextOpacity:(float)arg1 state:(id)arg2;
-(void)setFillColor:(id)arg1 state:(id)arg2;
-(void)setGradient:(id)arg1 state:(id)arg2;
-(void)setImageFill:(CFURLRef)arg1 srcSize:(CGSize)arg2 mode:(int)arg3 state:(id)arg4;
-(void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
-(void)translate:(CGSize)arg1 state:(id)arg2;

@end

