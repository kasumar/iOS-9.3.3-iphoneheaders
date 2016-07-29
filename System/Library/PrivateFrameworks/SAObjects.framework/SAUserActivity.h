/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUserActivity : SADomainObject

@property (nonatomic,copy) NSString * internalGUID; 
@property (assign,nonatomic) BOOL isEligibleForReminders; 
+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(BOOL)isEligibleForReminders;
-(void)setIsEligibleForReminders:(BOOL)arg1 ;
-(id)encodedClassName;
@end

