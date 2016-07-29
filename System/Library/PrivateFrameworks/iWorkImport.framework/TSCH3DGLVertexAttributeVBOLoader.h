/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLVBOLoader.h>

@interface TSCH3DGLVertexAttributeVBOLoader : TSCH3DGLVBOLoader {

	int mLocation;
	AttributeSpecs mAttributeSpecs;

}
+(int)attributeLocation:(id)arg1 shaderHandle:(id)arg2 ;
+(id)loader;
-(void)loadSingleValueInBuffer:(id)arg1 ;
-(void)loadSingleValue:(const float*)arg1 components:(unsigned long long)arg2 ;
-(BOOL)activateResource:(id)arg1 location:(int)arg2 specs:(const AttributeSpecs*)arg3 insideSession:(id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setClientState:(const DataBufferInfo*)arg1 ;
@end
