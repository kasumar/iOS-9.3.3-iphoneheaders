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

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {

	int _addressType;
	NSString* _name;
	NSString* _spokenName;
	BOOL _isMe;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType;                    //@synthesize addressType=_addressType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName;              //@synthesize spokenName=_spokenName - In the implementation block
@property (assign,nonatomic) BOOL hasIsMe; 
@property (assign,nonatomic) BOOL isMe;                          //@synthesize isMe=_isMe - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)spokenName;
-(void)setSpokenName:(NSString *)arg1 ;
-(BOOL)hasSpokenName;
-(BOOL)hasAddressType;
-(BOOL)hasIsMe;
-(BOOL)isMe;
-(void)setHasAddressType:(BOOL)arg1 ;
-(void)setHasIsMe:(BOOL)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setAddressType:(int)arg1 ;
-(int)addressType;
@end

