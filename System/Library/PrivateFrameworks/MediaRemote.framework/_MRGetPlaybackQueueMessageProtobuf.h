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

@interface _MRGetPlaybackQueueMessageProtobuf : PBCodable <NSCopying> {

	int _length;
	int _location;
	BOOL _includeArtwork;
	BOOL _includeMetadata;
	SCD_Struct_MR16 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) int length;                           //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMetadata; 
@property (assign,nonatomic) BOOL includeMetadata;                 //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeArtwork; 
@property (assign,nonatomic) BOOL includeArtwork;                  //@synthesize includeArtwork=_includeArtwork - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(int)arg1 ;
-(int)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(void)setHasIncludeMetadata:(BOOL)arg1 ;
-(BOOL)hasIncludeMetadata;
-(void)setIncludeArtwork:(BOOL)arg1 ;
-(void)setHasIncludeArtwork:(BOOL)arg1 ;
-(BOOL)hasIncludeArtwork;
-(BOOL)includeMetadata;
-(BOOL)includeArtwork;
@end

