/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSTouchMessage : PBCodable <NSCopying> {

	int _direction;
	unsigned _repeatCount;
	int _sessionIdentifier;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                          //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatCount; 
@property (assign,nonatomic) unsigned repeatCount;                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)repeatCount;
-(void)setRepeatCount:(unsigned)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDirection;
-(BOOL)hasSessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasRepeatCount;
-(void)setHasDirection:(BOOL)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasRepeatCount:(BOOL)arg1 ;
@end

