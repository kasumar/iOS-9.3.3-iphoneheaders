/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying> {

	NSString* _etag;
	BOOL _knownToServer;
	BOOL _wasCached;
	SCD_Struct_BR2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasKnownToServer; 
@property (assign,nonatomic) BOOL knownToServer;                    //@synthesize knownToServer=_knownToServer - In the implementation block
@property (assign,nonatomic) BOOL hasWasCached; 
@property (assign,nonatomic) BOOL wasCached;                        //@synthesize wasCached=_wasCached - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                       //@synthesize etag=_etag - In the implementation block
+(id)newFromSqliteValue:(MemRef)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(void)setCKInfoFieldsInRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setHasKnownToServer:(BOOL)arg1 ;
-(BOOL)hasKnownToServer;
-(void)setHasWasCached:(BOOL)arg1 ;
-(BOOL)hasWasCached;
-(BOOL)knownToServer;
-(BOOL)wasCached;
-(void)setWasCached:(BOOL)arg1 ;
-(void)setKnownToServer:(BOOL)arg1 ;
@end

