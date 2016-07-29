/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYPeer;

@interface SYClock : PBCodable <NSCopying> {

	unsigned long long _version;
	SYPeer* _peer;

}

@property (nonatomic,retain) SYPeer * peer;                           //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
-(unsigned long long)increment;
-(id)_myDescription;
-(unsigned long long)increaseBy:(unsigned long long)arg1 ;
-(SYPeer *)peer;
-(void)setPeer:(SYPeer *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

