/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class NSData, NSString, NSDictionary, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {

	NSData* _inviterPublicKey;
	NSString* _inviterControllerName;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (nonatomic,copy,readonly) NSData * inviterPublicKey;                     //@synthesize inviterPublicKey=_inviterPublicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterControllerName;              //@synthesize inviterControllerName=_inviterControllerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterUserID; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)bulletinContext;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(NSString *)inviterControllerName;
-(NSData *)inviterPublicKey;
-(id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterPublicKey:(id)arg6 inviterControllerName:(id)arg7 expiryDate:(id)arg8 ;
@end

