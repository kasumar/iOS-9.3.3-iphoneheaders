/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mTail;

}
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)array;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end

