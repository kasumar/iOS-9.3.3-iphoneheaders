/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentity, NSString, CKShareID;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	CKUserIdentity* _userIdentity;
	long long _type;
	long long _acceptanceStatus;
	long long _permission;
	NSString* _participantID;
	CKShareID* _shareID;
	CKUserIdentity* _originalUserIdentity;
	long long _originalParticipantType;
	long long _originalAcceptanceStatus;
	long long _originalPermission;

}

@property (nonatomic,retain) CKUserIdentity * userIdentity;                      //@synthesize userIdentity=_userIdentity - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                         //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) long long permission;                               //@synthesize permission=_permission - In the implementation block
@property (nonatomic,retain) NSString * participantID;                           //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                                //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,retain) CKUserIdentity * originalUserIdentity;              //@synthesize originalUserIdentity=_originalUserIdentity - In the implementation block
@property (assign,nonatomic) long long originalParticipantType;                  //@synthesize originalParticipantType=_originalParticipantType - In the implementation block
@property (assign,nonatomic) long long originalAcceptanceStatus;                 //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalPermission;                       //@synthesize originalPermission=_originalPermission - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEquivalentToParticipant:(id)arg1 ;
-(long long)originalParticipantType;
-(void)setOriginalParticipantType:(long long)arg1 ;
-(long long)originalAcceptanceStatus;
-(void)setOriginalAcceptanceStatus:(long long)arg1 ;
-(long long)originalPermission;
-(void)setOriginalPermission:(long long)arg1 ;
-(void)setUserIdentity:(CKUserIdentity *)arg1 ;
-(CKUserIdentity *)originalUserIdentity;
-(void)setOriginalUserIdentity:(CKUserIdentity *)arg1 ;
-(BOOL)isCurrentUser;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(long long)permission;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)setPermission:(long long)arg1 ;
-(id)initWithUserIdentity:(id)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(NSString *)participantID;
-(CKUserIdentity *)userIdentity;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(void)setParticipantID:(NSString *)arg1 ;
-(long long)acceptanceStatus;
@end

