/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
+(id)_vk_newWeakSet;
+(id)nonRetainingSet;
+(id)setWithCapacity:(unsigned long long)arg1 ;
-(void)ic_addNonNilObject:(id)arg1 ;
-(void)ic_removeNonNilObject:(id)arg1 ;
-(void)naui_safeAddObject:(id)arg1 ;
-(void)pl_addObjectIfNotNil:(id)arg1 ;
-(void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)minusPathSet:(id)arg1 ;
-(id)mf_uniquedObject:(id)arg1 ;
-(void)_cn_addNonNilObject:(id)arg1 ;
-(void)axSafelyAddObject:(id)arg1 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(Class)classForCoder;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
@end

