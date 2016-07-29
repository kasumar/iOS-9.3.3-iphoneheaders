/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQSTable.h>

@interface GQSSpiceTable : GQSTable {

	CFDictionaryRef mVectorUidToAlongMap;
	BOOL mReadingRowVectors;
	vector<float, std::__1::allocator<float> >* mRowPositions;
	vector<float, std::__1::allocator<float> >* mColumnPositions;
	float mCurrentCellMinX;
	float mCurrentCellMaxX;
	float mCurrentCellMinY;
	float mCurrentCellMaxY;
	id mCurrentCellStorage;
	id mCurrentCellStyle;

}
-(float)alongValueForVectorUid:(const char*)arg1 ;
-(void)aboutToReadCells;
-(void)setAlongValue:(float)arg1 forOwnedVectorUid:(char*)arg2 ;
-(void)aboutToReadRowVectors;
-(void)aboutToReadColumnVectors;
-(void)dealloc;
-(id)init;
@end

