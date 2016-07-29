/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSRecursiveLock, NSMutableArray;

@interface AVQueue : NSObject {

	NSRecursiveLock* _mutex;
	NSMutableArray* _items;
	void* _reserved;
	int _isBeingModifiedCount;

}
+(id)avQueue;
+(id)queueWithArray:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)removeItem:(id)arg1 ;
-(id)initWithArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeItemAtIndex:(unsigned long long)arg1 ;
-(long long)_instantiateItem;
-(BOOL)appendItemsFromArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)appendItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)itemWasAdded:(id)arg1 atIndex:(long long)arg2 ;
-(void)itemWillBeRemoved:(id)arg1 atIndex:(long long)arg2 ;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(id)itemAfterItem:(id)arg1 ;
-(BOOL)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3 ;
-(void)removeItemsInRange:(NSRange)arg1 ;
-(BOOL)isBeingModified;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)removeAllItems;
-(id)initWithError:(id*)arg1 ;
-(unsigned long long)itemCount;
@end

