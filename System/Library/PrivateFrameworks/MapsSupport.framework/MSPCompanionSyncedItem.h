/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPBookmarkStorage, MSPPinStorage, MSPHistoryEntryStorage, NSString;

@interface MSPCompanionSyncedItem : PBCodable <SYObject, NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPBookmarkStorage* _bookmark;
	MSPPinStorage* _pin;
	MSPHistoryEntryStorage* _searchRequest;
	NSString* _syncId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSyncId; 
@property (nonatomic,retain) NSString * syncId;                                   //@synthesize syncId=_syncId - In the implementation block
@property (nonatomic,readonly) BOOL hasBookmark; 
@property (nonatomic,retain) MSPBookmarkStorage * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasPin; 
@property (nonatomic,retain) MSPPinStorage * pin;                                 //@synthesize pin=_pin - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequest; 
@property (nonatomic,retain) MSPHistoryEntryStorage * searchRequest;              //@synthesize searchRequest=_searchRequest - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setBookmark:(MSPBookmarkStorage *)arg1 ;
-(void)setPin:(MSPPinStorage *)arg1 ;
-(MSPPinStorage *)pin;
-(NSString *)syncId;
-(void)setSyncId:(NSString *)arg1 ;
-(MSPBookmarkStorage *)bookmark;
-(BOOL)hasSearchRequest;
-(void)setSearchRequest:(MSPHistoryEntryStorage *)arg1 ;
-(MSPHistoryEntryStorage *)searchRequest;
-(BOOL)hasSyncId;
-(BOOL)hasBookmark;
-(BOOL)hasPin;
@end

