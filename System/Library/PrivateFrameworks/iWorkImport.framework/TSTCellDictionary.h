/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(id)cellAtCellID:(SCD_Struct_TS315)arg1 ;
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS315)arg2 ;
-(void)removeAllCells;
-(void)applyBlockToAllCells:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allCells;
@end

