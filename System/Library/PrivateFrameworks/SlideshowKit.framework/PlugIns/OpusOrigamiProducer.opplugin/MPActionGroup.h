/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>
#import <OpusOrigamiProducer/MPActionSupport.h>

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {

	NSMutableArray* _actions;

}
+(id)actionGroup;
-(void)insertActions:(id)arg1 atIndex:(long long)arg2 ;
-(void)copyActions:(id)arg1 ;
-(void)configureAction:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(long long)arg2 ;
-(void)configureTarget;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(unsigned long long)numberOfActions;
-(void)addActions:(id)arg1 ;
@end

