/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) BOOL toggle; 
@property (assign,nonatomic) BOOL value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setToggle:(BOOL)arg1 ;
-(BOOL)toggle;
-(id)encodedClassName;
@end
