/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSKSelectionPath : NSObject {

	NSArray* mCurrentSelection;

}

@property (nonatomic,readonly) BOOL selectsMultipleTables; 
@property (nonatomic,readonly) BOOL isEditingTableCell; 
@property (nonatomic,readonly) BOOL isEditingTableName; 
+(id)selectionPathWithSelectionArray:(id)arg1 ;
-(id)tableNameSelection;
-(id)controlCellSelection;
-(id)cellSelection;
-(id)strokeSelection;
-(id)containedCellTextEditingSelection;
-(id)tableNameTextEditingSelection;
-(id)selectionPathByFixingUpControlCellSelection;
-(id)selectionPathWithTableTextEditingSelectionRemoved;
-(BOOL)selectsMultipleTables;
-(BOOL)isEditingTableCell;
-(BOOL)isEditingTableName;
-(id)formulaSelection;
-(id)singleSelectedTableInfo;
-(id)initWithArchive:(const SelectionPathArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithSelectionArray:(id)arg1 ;
-(id)selectionPathWithAppendedSelections:(id)arg1 ;
-(id)orderedSelections;
-(id)selectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForSelection:(id)arg1 ;
-(id)selectionPathWithAppendedSelection:(id)arg1 ;
-(id)selectionPathPoppingOffSelection:(id)arg1 ;
-(id)selectionPathPoppingToSelection:(id)arg1 ;
-(id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2 ;
-(id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1 ;
-(id)mostSpecificSelectionOfClass:(Class)arg1 ;
-(id)mostSpecificSelectionConformingToProtocol:(id)arg1 ;
-(void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
-(void)saveToArchive:(SelectionPathArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

