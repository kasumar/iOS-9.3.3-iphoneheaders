/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying> {

	NSMutableArray* _assetFields;
	CKDPRecordIdentifier* _recordId;
	CKDPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetFields;                 //@synthesize assetFields=_assetFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)addAssetFields:(id)arg1 ;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(unsigned long long)assetFieldsCount;
-(void)clearAssetFields;
-(id)assetFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRecordId;
-(NSMutableArray *)assetFields;
-(void)setAssetFields:(NSMutableArray *)arg1 ;
-(CKDPRecordIdentifier *)recordId;
@end

