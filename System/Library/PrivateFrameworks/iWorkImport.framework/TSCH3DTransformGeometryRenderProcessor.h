/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DDataBuffer;

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor {

	TSCH3DDataBuffer* mBuffer;

}

@property (nonatomic,readonly) TSCH3DDataBuffer * buffer; 
+(id)processorWithOriginal:(id)arg1 ;
-(void)geometry:(id)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
-(void)setOriginal:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(TSCH3DDataBuffer *)buffer;
-(id)matrix;
@end

