/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTableRow : NSObject {

	NSMutableArray* mCells;
	float mHeight;

}
-(void)flipCellsRTL;
-(void)dealloc;
-(id)init;
-(id)description;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(unsigned long long)cellCount;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(id)addCell;
@end

