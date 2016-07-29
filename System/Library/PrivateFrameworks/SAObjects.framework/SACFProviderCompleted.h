/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString;

@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * results; 
+(id)successResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)clientProviderCompletedWithRefId:(id)arg1 status:(long long)arg2 executionResults:(id)arg3 logs:(id)arg4 ;
+(id)failureResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)providerCompleted;
+(id)providerCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)results;
-(void)setResults:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

