/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDWorksheet, EDCollection, EDReference, EDRowBlocks, EDRowBlock;

@interface EDReferenceIterator : NSObject {

	EDWorkbook* mWorkbook;
	EDWorksheet* mCurrentSheet;
	EDCollection* mReferences;
	EDReference* mReference;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mRowBlock;
	unsigned long long mRowBlockIndex;
	EDRowInfo* mRowInfo;
	unsigned mRowInfoIndex;
	unsigned mCellIndex;
	unsigned mNextArrayIndex;
	int mCurrentCellIndex;
	unsigned mPreviousColumnNumber;

}
+(id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
+(id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2 ;
-(void)setReference:(id)arg1 ;
-(BOOL)nextRow;
-(BOOL)nextReference;
-(void)dealloc;
-(void)setCurrentSheet:(id)arg1 ;
-(EDCellHeader*)nextCell;
-(unsigned)currentCellIndex;
-(id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3 ;
-(id)initWithReference:(id)arg1 workbook:(id)arg2 ;
-(id)initWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
@end

