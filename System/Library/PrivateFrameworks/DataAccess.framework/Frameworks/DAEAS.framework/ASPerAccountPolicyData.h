/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ASPerAccountPolicyData : NSObject {

	NSString* _accountPersistentUUID;

}

@property (nonatomic,readonly) NSString * policyKey; 
@property (nonatomic,readonly) NSDictionary * policyValues; 
-(id)description;
-(NSString *)policyKey;
-(id)initWithAccountPersistentUUID:(id)arg1 ;
-(NSDictionary *)policyValues;
-(void)setPolicyKey:(id)arg1 policyValues:(id)arg2 ;
@end

