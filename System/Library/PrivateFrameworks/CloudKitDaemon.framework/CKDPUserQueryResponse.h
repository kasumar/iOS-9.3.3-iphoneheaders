/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUser;

@interface CKDPUserQueryResponse : PBCodable <NSCopying> {

	CKDPUser* _user;

}

@property (nonatomic,readonly) BOOL hasUser; 
@property (nonatomic,retain) CKDPUser * user;              //@synthesize user=_user - In the implementation block
-(CKDPUser *)user;
-(void)setUser:(CKDPUser *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasUser;
@end

