/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AASetupAssistantCreateResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSString * HSAAction; 
@property (nonatomic,readonly) NSString * HSAData; 
-(NSNumber *)status;
-(NSString *)personID;
-(NSString *)statusMessage;
-(NSString *)HSAAction;
-(NSString *)HSAData;
-(NSString *)appleID;
@end

