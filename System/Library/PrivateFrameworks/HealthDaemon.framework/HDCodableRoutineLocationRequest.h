/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {

	int _locationType;
	SCD_Struct_HD16 _has;

}

@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                  //@synthesize locationType=_locationType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)locationType;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(void)setLocationType:(int)arg1 ;
@end

