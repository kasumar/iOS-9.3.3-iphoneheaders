/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellIterator.h>

@class TSTMasterLayout, TSTCell, TSTTableModel;

@interface TSTLayoutCellIterator : TSTCellIterator {

	TSTMasterLayout* mMasterLayout;
	TSUColumnRowRect mLayoutRange;
	SCD_Struct_TS315 mLayoutCellID;
	TSTCell* mLayoutCell;
	SCD_Struct_TS549* mModelIteratorData;
	BOOL mQueriedModel;
	BOOL mModelIteratorHasCell;
	unsigned short mNumberOfLayoutColumns;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfRows;

}

@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
-(TSTTableModel *)tableModel;
-(TSTMasterLayout *)masterLayout;
-(id)initWithLayout:(id)arg1 range:(TSUColumnRowRect)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithMasterLayout:(id)arg1 range:(TSUColumnRowRect)arg2 ;
-(id)initWithMasterLayout:(id)arg1 ;
-(id)initWithMasterLayout:(id)arg1 range:(TSUColumnRowRect)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithLayout:(id)arg1 range:(TSUColumnRowRect)arg2 ;
-(void)dealloc;
-(id)initWithLayout:(id)arg1 ;
@end
