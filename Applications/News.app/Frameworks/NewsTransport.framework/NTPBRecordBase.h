/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBRecordBase : PBCodable <NSCopying> {

	NTPBDate* _assetUrlsDate;
	int _cacheLifetimeHint;
	NSString* _changeTag;
	NTPBDate* _fetchDate;
	NSString* _identifier;
	NTPBDate* _modificationDate;
	int _recordType;
	BOOL _deletedFromCloud;
	SCD_Struct_NT10 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeTag; 
@property (nonatomic,retain) NSString * changeTag;                     //@synthesize changeTag=_changeTag - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchDate; 
@property (nonatomic,retain) NTPBDate * fetchDate;                     //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedFromCloud; 
@property (assign,nonatomic) BOOL deletedFromCloud;                    //@synthesize deletedFromCloud=_deletedFromCloud - In the implementation block
@property (assign,nonatomic) BOOL hasCacheLifetimeHint; 
@property (assign,nonatomic) int cacheLifetimeHint;                    //@synthesize cacheLifetimeHint=_cacheLifetimeHint - In the implementation block
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                           //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetUrlsDate; 
@property (nonatomic,retain) NTPBDate * assetUrlsDate;                 //@synthesize assetUrlsDate=_assetUrlsDate - In the implementation block
-(void)setChangeTag:(NSString *)arg1 ;
-(void)setAssetUrlsDate:(NTPBDate *)arg1 ;
-(BOOL)hasChangeTag;
-(BOOL)hasFetchDate;
-(void)setDeletedFromCloud:(BOOL)arg1 ;
-(void)setHasDeletedFromCloud:(BOOL)arg1 ;
-(BOOL)hasDeletedFromCloud;
-(int)cacheLifetimeHint;
-(void)setCacheLifetimeHint:(int)arg1 ;
-(void)setHasCacheLifetimeHint:(BOOL)arg1 ;
-(BOOL)hasCacheLifetimeHint;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasAssetUrlsDate;
-(NSString *)changeTag;
-(BOOL)deletedFromCloud;
-(NTPBDate *)assetUrlsDate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NTPBDate *)modificationDate;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(void)setRecordType:(int)arg1 ;
-(BOOL)hasRecordType;
-(int)recordType;
-(BOOL)hasModificationDate;
-(NTPBDate *)fetchDate;
-(void)setFetchDate:(NTPBDate *)arg1 ;
@end

