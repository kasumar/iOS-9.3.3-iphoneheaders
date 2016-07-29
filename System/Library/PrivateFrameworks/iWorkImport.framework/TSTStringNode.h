/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTStringNode : TSTExpressionNode {

	NSString* mValue;

}

@property (nonatomic,retain) NSString * value; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(StringNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const StringNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS315)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)initWithContext:(id)arg1 stringValue:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)p_languageGuessForString:(id)arg1 isRTL:(BOOL*)arg2 ;
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)string;
-(int)tokenType;
@end

