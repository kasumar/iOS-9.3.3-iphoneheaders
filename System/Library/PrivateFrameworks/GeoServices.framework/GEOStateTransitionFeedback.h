/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {

	int _newValue;
	int _oldValue;
	int _stateType;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType;                  //@synthesize stateType=_stateType - In the implementation block
@property (assign,nonatomic) BOOL hasOldValue; 
@property (assign,nonatomic) int oldValue;                   //@synthesize oldValue=_oldValue - In the implementation block
@property (assign,nonatomic) BOOL hasNewValue; 
@property (assign,nonatomic) int newValue;                   //@synthesize newValue=_newValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)newValue;
-(void)setOldValue:(int)arg1 ;
-(BOOL)hasStateType;
-(void)setNewValue:(int)arg1 ;
-(int)oldValue;
-(BOOL)hasOldValue;
-(void)setHasNewValue:(BOOL)arg1 ;
-(int)stateType;
-(void)setHasStateType:(BOOL)arg1 ;
-(void)setHasOldValue:(BOOL)arg1 ;
-(BOOL)hasNewValue;
-(void)setStateType:(int)arg1 ;
@end

