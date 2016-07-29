/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_rehash;
-(id)initWithPFArray:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)finalize;
@end

