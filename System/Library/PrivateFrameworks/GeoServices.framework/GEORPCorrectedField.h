/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying> {

	NSString* _correctedValue;
	int _field;
	NSString* _fieldName;
	NSString* _originalValue;
	BOOL _isMarkedIncorrect;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasField; 
@property (assign,nonatomic) int field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;                   //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue;               //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;              //@synthesize correctedValue=_correctedValue - In the implementation block
@property (assign,nonatomic) BOOL hasIsMarkedIncorrect; 
@property (assign,nonatomic) BOOL isMarkedIncorrect;                 //@synthesize isMarkedIncorrect=_isMarkedIncorrect - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)field;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)originalValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(BOOL)hasCorrectedValue;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(NSString *)correctedValue;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(BOOL)hasField;
-(void)setFieldName:(NSString *)arg1 ;
-(BOOL)isMarkedIncorrect;
-(BOOL)hasIsMarkedIncorrect;
-(BOOL)hasFieldName;
-(void)setField:(int)arg1 ;
-(NSString *)fieldName;
-(void)setHasField:(BOOL)arg1 ;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
@end

