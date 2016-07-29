/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMapTable;

@interface PKTunablePref : NSObject {

	NSString* _prefName;
	id _prefValue;
	NSMapTable* _handlers;

}

@property (retain) NSString * prefName;                //@synthesize prefName=_prefName - In the implementation block
@property (retain) id prefValue;                       //@synthesize prefValue=_prefValue - In the implementation block
@property (retain) NSMapTable * handlers;              //@synthesize handlers=_handlers - In the implementation block
-(void)dealloc;
-(void)save:(id)arg1 ;
-(id)initWithPrefName:(id)arg1 defaultValue:(id)arg2 ;
-(id)prefValue;
-(void)addObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)viewWithContainedLabel:(id*)arg1 ;
-(void)restore:(id)arg1 ;
-(id)codeDescription;
-(void)setPrefName:(NSString *)arg1 ;
-(void)setPrefValue:(id)arg1 ;
-(void)setHandlers:(NSMapTable *)arg1 ;
-(NSMapTable *)handlers;
-(NSString *)prefName;
-(void)pushValueToModel:(id)arg1 ;
@end

