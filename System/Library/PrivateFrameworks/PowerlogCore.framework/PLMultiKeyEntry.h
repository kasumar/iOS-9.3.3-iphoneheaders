/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry {

	NSMutableDictionary* _multiKeys;

}

@property (retain) NSMutableDictionary * multiKeys;              //@synthesize multiKeys=_multiKeys - In the implementation block
+(void)load;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)multiKeys;
-(id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
-(void)setMultiKeys:(NSMutableDictionary *)arg1 ;
-(id)serializedForJSON;
-(id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
@end
