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

@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {

	NSString* _contentId;
	int _contentType;
	NSString* _referencedArticleId;
	int _shareSheetExposureLocation;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                            //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                  //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasShareSheetExposureLocation; 
@property (assign,nonatomic) int shareSheetExposureLocation;                  //@synthesize shareSheetExposureLocation=_shareSheetExposureLocation - In the implementation block
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)referencedArticleId;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(int)shareSheetExposureLocation;
-(void)setShareSheetExposureLocation:(int)arg1 ;
-(void)setHasShareSheetExposureLocation:(BOOL)arg1 ;
-(BOOL)hasShareSheetExposureLocation;
-(void)setContentType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)contentType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentId;
-(BOOL)hasContentId;
@end

