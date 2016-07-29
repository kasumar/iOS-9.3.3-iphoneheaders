/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)saveToArchive:(TileStorage*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileStorage*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(id)tileForID:(SCD_Struct_TS537)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS537)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS537)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)enumerateTilesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)removeAllTiles;
-(id)initWithOwner:(id)arg1 ;
@end

