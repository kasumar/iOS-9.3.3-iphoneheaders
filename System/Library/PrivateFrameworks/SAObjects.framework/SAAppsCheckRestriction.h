/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * launchId; 
+(id)checkRestriction;
+(id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(id)encodedClassName;
@end

