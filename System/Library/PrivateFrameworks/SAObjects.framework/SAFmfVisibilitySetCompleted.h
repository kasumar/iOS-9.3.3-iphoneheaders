/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSString;

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSURL * searchContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)visibilitySetCompleted;
+(id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end

