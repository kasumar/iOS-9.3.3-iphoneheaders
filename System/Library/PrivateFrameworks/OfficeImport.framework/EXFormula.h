/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFormula : NSObject
+(Class)formulaClassFromXmlFormulaElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readFrom:(xmlNode*)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(EDCellHeader*)arg5 edRowBlocks:(id)arg6 state:(id)arg7 ;
+(void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4 ;
+(id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6 ;
+(id)edFormulaFromXmlFormulaElement:(xmlNode*)arg1 formulaClass:(Class)arg2 state:(id)arg3 ;
+(id)edFormulaFromXmlFormulaElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(EDCellHeader*)arg4 edRowBlocks:(id)arg5 state:(id)arg6 ;
+(void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2 ;
+(id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3 ;
@end

