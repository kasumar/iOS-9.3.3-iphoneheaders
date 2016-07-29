/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {

	CMDrawableMapper* _mapper;
	NSMutableArray* _actions;
	CGRect _frame;
	CGRect _finalFrame;
	CFDataRef _data;
	CGDataConsumerRef _dataConsumer;
	CGContextRef _cgContext;
	NSAffineTransform* _currentTransform;
	NSMutableArray* _transforms;
	CGImageRef _fillImage;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(void)setLineWidth:(float)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setFillImage:(CGImageRef)arg1 ;
-(void)addTransform:(id)arg1 ;
-(void)restoreLastTransform;
-(CGRect)transformRectToGroup:(CGRect)arg1 ;
-(CGRect)pdfFrame;
-(id)copyPDF;
-(void)_applyTransform:(id)arg1 ;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_closeContext;
-(void)_addTransform:(id)arg1 ;
-(void)_restoreLastTransform;
-(CGRect)_transformRect:(CGRect)arg1 withTransform:(id)arg2 ;
-(CGContextRef)_cgContext;
-(void)setMapper:(id)arg1 ;
-(id)mapper;
-(float)currentScaleFactor;
-(CGAffineTransform)currentTransform;
-(void)setLineDash:(id)arg1 ;
-(void)addDebugPath:(CGPathRef)arg1 ;
-(void)addPath:(CGPathRef)arg1 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
@end

