/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {

	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) NSString * field;                       //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * operands;              //@synthesize operands=_operands - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)field;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasField;
-(void)setField:(NSString *)arg1 ;
-(void)clearOperands;
-(NSMutableArray *)operands;
-(BOOL)hasValue;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(unsigned long long)operandsCount;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(void)addOperand:(id)arg1 ;
@end

