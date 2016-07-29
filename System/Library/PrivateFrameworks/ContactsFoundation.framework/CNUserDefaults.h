/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPrimitiveUserDefaults;
@class NSDictionary;

@interface CNUserDefaults : NSObject {

	id<CNPrimitiveUserDefaults> _primitiveDefaults;
	NSDictionary* _registeredDefaults;

}

@property (copy) NSDictionary * registeredDefaults;              //@synthesize registeredDefaults=_registeredDefaults - In the implementation block
+(id)standardPreferences;
+(id)preferencesWithApplicationID:(id)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(id)initWithApplicationID:(id)arg1 ;
-(id)initWithPrimitiveDefaults:(id)arg1 ;
-(void)setRegisteredDefaults:(NSDictionary *)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(NSDictionary *)registeredDefaults;
-(BOOL)boolForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(id)primitiveDefaults;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)userHasOptedOutOfPreference:(id)arg1 ;
-(BOOL)userHasOptedInToPreference:(id)arg1 ;
-(long long)integerForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
@end

