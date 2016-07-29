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

@class NTPBCacheCoordinatorHints, NSData, NTPBDate, NSString, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying> {

	NTPBCacheCoordinatorHints* _cacheCoordinatorHintsValue;
	NSData* _dataValue;
	NTPBDate* _dateValue;
	NSString* _key;
	NTPBNetworkSessionList* _networkSessionList;
	NTPBPersonalizationLocalData* _personalizationLocalData;
	NTPBReadingHistoryItem* _readingHistoryItem;
	NSData* _recordData;
	NSString* _stringValue;
	int _valueType;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValueType; 
@property (assign,nonatomic) int valueType;                                                        //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                                   //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                               //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) NTPBDate * dateValue;                                                 //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheCoordinatorHintsValue; 
@property (nonatomic,retain) NTPBCacheCoordinatorHints * cacheCoordinatorHintsValue;               //@synthesize cacheCoordinatorHintsValue=_cacheCoordinatorHintsValue - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordData; 
@property (nonatomic,retain) NSData * recordData;                                                  //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,readonly) BOOL hasReadingHistoryItem; 
@property (nonatomic,retain) NTPBReadingHistoryItem * readingHistoryItem;                          //@synthesize readingHistoryItem=_readingHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkSessionList; 
@property (nonatomic,retain) NTPBNetworkSessionList * networkSessionList;                          //@synthesize networkSessionList=_networkSessionList - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationLocalData; 
@property (nonatomic,retain) NTPBPersonalizationLocalData * personalizationLocalData;              //@synthesize personalizationLocalData=_personalizationLocalData - In the implementation block
-(void)setCacheCoordinatorHintsValue:(NTPBCacheCoordinatorHints *)arg1 ;
-(void)setRecordData:(NSData *)arg1 ;
-(void)setReadingHistoryItem:(NTPBReadingHistoryItem *)arg1 ;
-(void)setNetworkSessionList:(NTPBNetworkSessionList *)arg1 ;
-(void)setPersonalizationLocalData:(NTPBPersonalizationLocalData *)arg1 ;
-(void)setHasValueType:(BOOL)arg1 ;
-(BOOL)hasCacheCoordinatorHintsValue;
-(BOOL)hasRecordData;
-(BOOL)hasReadingHistoryItem;
-(BOOL)hasNetworkSessionList;
-(BOOL)hasPersonalizationLocalData;
-(NTPBCacheCoordinatorHints *)cacheCoordinatorHintsValue;
-(NSData *)recordData;
-(NTPBReadingHistoryItem *)readingHistoryItem;
-(NTPBNetworkSessionList *)networkSessionList;
-(NTPBPersonalizationLocalData *)personalizationLocalData;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)hasKey;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(NTPBDate *)dateValue;
-(void)setDataValue:(NSData *)arg1 ;
-(BOOL)hasDataValue;
-(void)setDateValue:(NTPBDate *)arg1 ;
-(BOOL)hasDateValue;
-(int)valueType;
-(NSData *)dataValue;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
@end

