/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableDictionary, NSError;

@interface MUMathExpressionBase : NSObject {

	NSMutableDictionary* _indicesForVariables;
	NSError* _lastError;

}
+(id)parserErrorToString:(SCD_Struct_MU4*)arg1 ;
-(void)setLastError:(SCD_Struct_MU4*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(id)lastError;
@end

