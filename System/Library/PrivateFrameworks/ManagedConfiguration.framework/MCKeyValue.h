/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCKeyValue : NSObject {

	NSString* _key;
	id _value;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
-(id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithData:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithDate:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setDate:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithValue:(id)arg1 localizedKey:(id)arg2 ;
-(void)setData:(id)arg1 localizedKey:(id)arg2 ;
-(void)setValue:(id)arg1 localizedKey:(id)arg2 ;
-(NSString *)key;
-(id)value;
-(unsigned long long)valueType;
@end

