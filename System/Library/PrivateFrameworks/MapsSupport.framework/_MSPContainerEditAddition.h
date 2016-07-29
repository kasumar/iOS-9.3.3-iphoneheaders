/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditAddition.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition> {

	NSArray* _objects;
	NSArray* _addedImmutableObjects;
	NSIndexSet* _indexesOfAddedObjects;

}

@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * addedImmutableObjects;                 //@synthesize addedImmutableObjects=_addedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfAddedObjects;              //@synthesize indexesOfAddedObjects=_indexesOfAddedObjects - In the implementation block
-(NSString *)description;
-(NSArray *)objects;
-(id)initWithObjects:(id)arg1 indexes:(id)arg2 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSIndexSet *)indexesOfAddedObjects;
-(NSArray *)addedImmutableObjects;
@end

