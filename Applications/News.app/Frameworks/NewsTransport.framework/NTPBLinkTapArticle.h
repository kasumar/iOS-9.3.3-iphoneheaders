/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleType;
	NSString* _linkUrl;
	NSString* _referencedArticleId;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,readonly) BOOL hasLinkUrl; 
@property (nonatomic,retain) NSString * linkUrl;                          //@synthesize linkUrl=_linkUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                             //@synthesize articleType=_articleType - In the implementation block
-(void)setArticleId:(NSString *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(NSString *)articleId;
-(NSString *)referencedArticleId;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(void)setLinkUrl:(NSString *)arg1 ;
-(BOOL)hasLinkUrl;
-(NSString *)linkUrl;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

