/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {

	unsigned long long mColumnCount;
	unsigned long long mRowCount;
	float mRectWidth;
	float mRectHeight;
	BOOL mHasArrows;
	BOOL mIsSnake;
	BOOL mIsHorizontal;
	BOOL mIsLinear;

}
-(unsigned long long)columnCount;
-(void)setColumnsAndRowsCount;
-(CGSize)gapSize;
-(double)gapRatio;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

