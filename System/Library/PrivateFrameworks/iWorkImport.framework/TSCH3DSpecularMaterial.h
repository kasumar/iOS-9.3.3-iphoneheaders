/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexturesMaterial.h>

@interface TSCH3DSpecularMaterial : TSCH3DTexturesMaterial
+(id)instanceWithArchive:(const Chart3DSpecularMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DSpecularMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DSpecularMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(MaterialShaderVariables)defaultShaderVariables;
@end

