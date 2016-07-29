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

@class NSString, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	unsigned long long _muid;
	NSString* _entityNameString;
	NSMutableArray* _transitLabels;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                     //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitLabels;              //@synthesize transitLabels=_transitLabels - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString;                 //@synthesize entityNameString=_entityNameString - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)transitLabelsCount;
-(NSString *)entityNameString;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(void)setEntityNameString:(NSString *)arg1 ;
-(id)transitLabelAtIndex:(unsigned long long)arg1 ;
-(void)addTransitLabel:(id)arg1 ;
-(NSMutableArray *)transitLabels;
-(BOOL)hasEntityNameString;
-(void)clearTransitLabels;
@end

