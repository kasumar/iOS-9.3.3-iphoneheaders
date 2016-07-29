/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OITSUPointerKeyDictionary, EDString, EDFormula;

@interface EDName : NSObject {

	NSString* _formulaString;
	OITSUPointerKeyDictionary* _maxWorksheetReferences;
	EDString* _nameString;
	EDFormula* _formula;
	unsigned long long _sheetIndex;

}

@property (nonatomic,retain) EDString * nameString;                                             //@synthesize nameString=_nameString - In the implementation block
@property (nonatomic,readonly) BOOL isInternalFunction; 
@property (nonatomic,readonly) NSString * internalFunctionName; 
@property (nonatomic,readonly) EDFormula * formula;                                             //@synthesize formula=_formula - In the implementation block
@property (assign,nonatomic) unsigned long long sheetIndex;                                     //@synthesize sheetIndex=_sheetIndex - In the implementation block
@property (nonatomic,readonly) OITSUPointerKeyDictionary * maxWorksheetReferences; 
+(id)name;
-(id)formulaString;
-(void)setFormulaString:(id)arg1 workbook:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(EDFormula *)formula;
-(unsigned long long)sheetIndex;
-(void)setSheetIndex:(unsigned long long)arg1 ;
-(void)setNameString:(EDString *)arg1 ;
-(BOOL)isInternalFunction;
-(void)setFormula:(id)arg1 workbook:(id)arg2 ;
-(EDString *)nameString;
-(BOOL)isEqualToEDName:(id)arg1 ;
-(NSString *)internalFunctionName;
-(OITSUPointerKeyDictionary *)maxWorksheetReferences;
@end

