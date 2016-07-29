/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _DKObjectType, _CDEventStreamProperties;

@interface _DKEventStream : NSObject <NSSecureCoding> {

	NSString* _name;
	_DKObjectType* _eventValueType;
	_CDEventStreamProperties* _eventProperties;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) _DKObjectType * eventValueType;                          //@synthesize eventValueType=_eventValueType - In the implementation block
@property (readonly) _CDEventStreamProperties * eventProperties;              //@synthesize eventProperties=_eventProperties - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
+(id)eventStreamWithName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 valueType:(id)arg2 ;
-(void)setupEventProperties:(id)arg1 ;
-(_DKObjectType *)eventValueType;
-(_CDEventStreamProperties *)eventProperties;
@end

