/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupPrivacyPolicy : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * privacyCategory; 
@property (nonatomic,copy) NSString * redactionTarget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privacyPolicy;
+(id)privacyPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)privacyCategory;
-(void)setPrivacyCategory:(NSString *)arg1 ;
-(NSString *)redactionTarget;
-(void)setRedactionTarget:(NSString *)arg1 ;
-(id)encodedClassName;
@end

