/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDPhoto : PBCodable <NSCopying> {

	NSString* _photoId;
	NSMutableArray* _photoVersions;

}

@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId;                          //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoVersions;              //@synthesize photoVersions=_photoVersions - In the implementation block
+(id)photosForPlaceData:(id)arg1 ;
-(id)_bestURL;
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
-(NSString *)photoId;
-(BOOL)hasPhotoId;
-(NSMutableArray *)photoVersions;
-(unsigned long long)photoVersionsCount;
-(void)addPhotoVersion:(id)arg1 ;
-(void)setPhotoVersions:(NSMutableArray *)arg1 ;
-(void)setPhotoId:(NSString *)arg1 ;
-(id)photoVersionAtIndex:(unsigned long long)arg1 ;
-(void)clearPhotoVersions;
@end

