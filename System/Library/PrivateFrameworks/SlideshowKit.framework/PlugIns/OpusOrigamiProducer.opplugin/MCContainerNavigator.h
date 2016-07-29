/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableDictionary, NSString, MCPlugHaven, NSSet;

@interface MCContainerNavigator : MCContainer {

	NSMutableDictionary* mPlugs;
	NSString* mStartPlugID;
	MCPlugHaven* mStartPlug;

}

@property (readonly) NSSet * plugs; 
@property (readonly) unsigned long long countOfPlugs; 
@property (nonatomic,copy) NSString * startPlugID; 
@property (readonly) MCPlugHaven * startPlug; 
-(MCPlugHaven *)startPlug;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(NSString *)startPlugID;
-(void)setStartPlugID:(NSString *)arg1 ;
-(unsigned long long)countOfPlugs;
-(void)removePlugForID:(id)arg1 ;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)removeAllPlugs;
-(id)plugForID:(id)arg1 ;
-(void)removePlug:(id)arg1 ;
-(NSSet *)plugs;
-(void)demolish;
-(id)init;
-(id)imprint;
@end

