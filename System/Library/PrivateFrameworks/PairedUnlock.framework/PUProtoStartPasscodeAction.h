/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlock/PairedUnlock-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUProtoStartPasscodeAction : PBCodable <NSCopying> {

	unsigned _actionID;
	unsigned _passcodeType;
	SCD_Struct_PU1 _has;

}

@property (assign,nonatomic) unsigned actionID;                  //@synthesize actionID=_actionID - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeType; 
@property (assign,nonatomic) unsigned passcodeType;              //@synthesize passcodeType=_passcodeType - In the implementation block
-(unsigned)passcodeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPasscodeType:(unsigned)arg1 ;
-(void)setActionID:(unsigned)arg1 ;
-(unsigned)actionID;
-(void)setHasPasscodeType:(BOOL)arg1 ;
-(BOOL)hasPasscodeType;
@end

