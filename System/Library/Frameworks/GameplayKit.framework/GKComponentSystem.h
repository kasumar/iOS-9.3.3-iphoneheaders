/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration> {

	NSMutableArray* _components;
	Class _componentClass;

}

@property (nonatomic,readonly) Class componentClass;                     //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * components; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GK4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSArray *)components;
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)removeComponentWithEntity:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)initWithComponentClass:(Class)arg1 ;
-(void)addComponentWithEntity:(id)arg1 ;
-(Class)componentClass;
@end

