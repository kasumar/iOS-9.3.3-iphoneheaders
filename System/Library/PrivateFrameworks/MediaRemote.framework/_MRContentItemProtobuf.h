/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRContentItemMetadataProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {

	NSString* _identifier;
	_MRContentItemMetadataProtobuf* _metadata;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) _MRContentItemMetadataProtobuf * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasMetadata;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(_MRContentItemMetadataProtobuf *)metadata;
-(void)setMetadata:(_MRContentItemMetadataProtobuf *)arg1 ;
-(BOOL)hasIdentifier;
@end

