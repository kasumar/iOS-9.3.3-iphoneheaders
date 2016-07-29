/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <iWorkImport/TSDTextSelection.h>

@class TSTCellRegion, NSString;

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {

	int mSelectionType;
	SCD_Struct_TS315 mAnchorCellID;
	TSTCellRegion* mCellRegion;
	TSTCellRegion* mBaseRegion;
	SCD_Struct_TS315 mCursorCellID;
	NSRange mSearchReferenceRange;

}

@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) int selectionType; 
@property (nonatomic,readonly) SCD_Struct_TS315 anchorCellID; 
@property (nonatomic,readonly) TSTCellRegion * baseRegion; 
@property (nonatomic,readonly) SCD_Struct_TS315 cursorCellID; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (assign,nonatomic) NSRange searchReferenceRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) BOOL isAtEndOfLine; 
+(Class)archivedSelectionClass;
+(id)selectionWithTableModel:(id)arg1 cellID:(SCD_Struct_TS315)arg2 ;
+(id)selectionWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
+(id)selectionWithTableModel:(id)arg1 rowIndices:(id)arg2 ;
+(id)selectionWithTableModel:(id)arg1 cellUID:(const TSTCellUID*)arg2 ;
+(id)selectionWithTableModel:(id)arg1 columnIndices:(id)arg2 ;
-(void)saveToArchive:(SelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(TSTCellRegion *)cellRegion;
-(void)setCellRange:(TSUColumnRowRect)arg1 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS315)arg3 cursorCellID:(SCD_Struct_TS315)arg4 baseRegion:(id)arg5 selectionType:(int)arg6 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS315)arg3 cursorCellID:(SCD_Struct_TS315)arg4 baseRegion:(id)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS315)arg3 cursorCellID:(SCD_Struct_TS315)arg4 selectionType:(int)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRange:(TSUColumnRowRect)arg2 type:(int)arg3 anchorCellID:(SCD_Struct_TS315)arg4 cursorCellID:(SCD_Struct_TS315)arg5 ;
-(id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3 ;
-(id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3 ;
-(SCD_Struct_TS315)anchorCellID;
-(SCD_Struct_TS315)cursorCellID;
-(TSTCellRegion *)baseRegion;
-(id)initWithTableModel:(id)arg1 andCellID:(SCD_Struct_TS315)arg2 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
-(id)initWithTableModel:(id)arg1 rowIndices:(id)arg2 ;
-(id)initWithTableModel:(id)arg1 columnIndices:(id)arg2 ;
-(NSRange)searchReferenceRange;
-(BOOL)canEditWithCellSubselectionInTable:(id)arg1 ;
-(BOOL)isAtEndOfLine;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS315)arg3 cursorCellID:(SCD_Struct_TS315)arg4 ;
-(id)initWithTableModel:(id)arg1 selectionType:(int)arg2 ;
-(id)initWithTableModel:(id)arg1 andCellRange:(TSUColumnRowRect)arg2 ;
-(id)initWithTableModel:(id)arg1 cellID:(SCD_Struct_TS315)arg2 selectionType:(int)arg3 ;
-(id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
-(id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(SCD_Struct_TS271)arg3 ;
-(id)selectionByExtendingWithCellRange:(TSUColumnRowRect)arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(SCD_Struct_TS315)arg4 ;
-(id)selectionByAddingCellRange:(TSUColumnRowRect)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS315)arg3 cursor:(SCD_Struct_TS315)arg4 selectionType:(int)arg5 ;
-(id)selectionByRemovingCellRange:(TSUColumnRowRect)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS315)arg3 cursor:(SCD_Struct_TS315)arg4 selectionType:(int)arg5 ;
-(id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1 ;
-(id)selectionWithHiddenRowsRemovedInTableInfo:(id)arg1 ;
-(void)insert:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(void)remove:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(BOOL)areCellsInTheSameRegionInTable:(id)arg1 ;
-(BOOL)containsSelection:(id)arg1 ;
-(BOOL)containsCell:(SCD_Struct_TS315)arg1 ;
-(BOOL)canEditWithControlCellSubselectionInTable:(id)arg1 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg1 ;
-(void)setSearchReferenceRange:(NSRange)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(BOOL)isEqualToSelection:(id)arg1 ;
-(int)selectionType;
-(unsigned long long)cellCount;
@end

