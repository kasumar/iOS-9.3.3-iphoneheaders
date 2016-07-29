/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>

@class CKShareID, NSString, NSData;

@interface CKDSharePCSData : CKDPCSData {

	OpaquePCSShareProtectionRef _publicPCS;
	CKShareID* _shareID;
	NSString* _shareEtag;
	long long _publicPermission;
	long long _myParticipantType;
	long long _myParticipantPermission;
	NSString* _publicPCSEtag;
	NSData* _publicPCSData;

}

@property (nonatomic,retain) CKShareID * shareID;                                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSString * shareEtag;                               //@synthesize shareEtag=_shareEtag - In the implementation block
@property (assign,nonatomic) long long publicPermission;                         //@synthesize publicPermission=_publicPermission - In the implementation block
@property (assign,nonatomic) long long myParticipantType;                        //@synthesize myParticipantType=_myParticipantType - In the implementation block
@property (assign,nonatomic) long long myParticipantPermission;                  //@synthesize myParticipantPermission=_myParticipantPermission - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef publicPCS; 
@property (nonatomic,copy) NSString * publicPCSEtag;                             //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,copy) NSData * publicPCSData;                               //@synthesize publicPCSData=_publicPCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(long long)publicPermission;
-(void)setMyParticipantPermission:(long long)arg1 ;
-(void)setMyParticipantType:(long long)arg1 ;
-(void)setPublicPermission:(long long)arg1 ;
-(void)setShareEtag:(NSString *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(NSString *)shareEtag;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSData *)publicPCSData;
-(OpaquePCSShareProtectionRef)publicPCS;
-(NSString *)publicPCSEtag;
-(BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(long long)myParticipantPermission;
-(long long)myParticipantType;
@end

