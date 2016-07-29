/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>
#import <iWorkImport/TSDPathPainter.h>

@class NSString;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSDPathPainter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL tsch_hasAllResources; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(void)registerSubclass:(Class)arg1 ;
+(id)p_subclassRegistry;
+(BOOL)tsch_hasAllResourcesForFill:(id)arg1 ;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(BOOL)tsch_hasAllResources;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isClear;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)drawsInOneStep;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)isOpaque;
-(id)referenceColor;
-(BOOL)isNearlyWhite;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
@end

