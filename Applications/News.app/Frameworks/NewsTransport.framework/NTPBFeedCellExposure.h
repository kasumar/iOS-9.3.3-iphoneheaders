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

@class NSData, NSString;

@interface NTPBFeedCellExposure : PBCodable <NSCopying> {

	int _displayRankInSection;
	NSData* _feedCellHostExposureId;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSString* _viewFrameInScreen;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRankInSection; 
@property (assign,nonatomic) int displayRankInSection;                      //@synthesize displayRankInSection=_displayRankInSection - In the implementation block
@property (nonatomic,readonly) BOOL hasViewFrameInScreen; 
@property (nonatomic,retain) NSString * viewFrameInScreen;                  //@synthesize viewFrameInScreen=_viewFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedCellHostExposureId; 
@property (nonatomic,retain) NSData * feedCellHostExposureId;               //@synthesize feedCellHostExposureId=_feedCellHostExposureId - In the implementation block
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)isUserSubscribedToFeed;
-(int)feedCellSection;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(int)feedCellHostType;
-(void)setFeedCellHostType:(int)arg1 ;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(BOOL)hasFeedCellHostType;
-(void)setViewFrameInScreen:(NSString *)arg1 ;
-(BOOL)hasViewFrameInScreen;
-(NSString *)viewFrameInScreen;
-(void)setFeedCellHostExposureId:(NSData *)arg1 ;
-(void)setDisplayRankInSection:(int)arg1 ;
-(void)setHasDisplayRankInSection:(BOOL)arg1 ;
-(BOOL)hasDisplayRankInSection;
-(BOOL)hasFeedCellHostExposureId;
-(int)displayRankInSection;
-(NSData *)feedCellHostExposureId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFeedId;
-(void)setFeedId:(NSString *)arg1 ;
-(NSString *)feedId;
@end

