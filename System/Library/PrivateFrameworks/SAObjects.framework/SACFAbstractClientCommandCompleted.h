/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * outputLogs; 
@property (assign,nonatomic) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)abstractClientCommandCompleted;
+(id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)groupIdentifier;
-(NSArray *)outputLogs;
-(void)setOutputLogs:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

