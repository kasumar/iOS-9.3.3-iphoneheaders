/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {

	unsigned _format;
	NSData* _imageData;
	BOOL _precomposed;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) unsigned format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL hasPrecomposed; 
@property (assign,nonatomic) BOOL precomposed;                 //@synthesize precomposed=_precomposed - In the implementation block
-(BOOL)precomposed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)imageData;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(BOOL)hasImageData;
-(void)setHasPrecomposed:(BOOL)arg1 ;
-(BOOL)hasPrecomposed;
@end

