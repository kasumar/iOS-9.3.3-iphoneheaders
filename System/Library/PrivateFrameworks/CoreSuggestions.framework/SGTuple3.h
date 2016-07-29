/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface SGTuple3 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;
	NSObject* _third;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSObject * third;               //@synthesize third=_third - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
-(NSObject *)first;
-(BOOL)isEqualToTuple3:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
-(NSObject *)third;
@end

