/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/BKSeriesInfo.h>
@class NSString, NSArray, NSURL;


@protocol BKSeriesInfo <NSObject>
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) BOOL isExplicit; 
@property (readonly) BOOL isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned long long sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
@required
-(NSString *)sequenceDisplayName;
-(NSString *)seriesId;
-(NSString *)seriesTitle;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(NSString *)name;
-(NSString *)title;
-(NSString *)kind;
-(unsigned long long)sequenceNumber;
-(NSString *)author;
-(NSString *)adamId;
-(NSArray *)genres;
-(BOOL)isExplicit;
-(NSString *)tellAFriendMessageContentsUrl;
-(NSArray *)genreNames;
-(BOOL)isContainer;
-(NSString *)genre;
-(float)popularity;
-(NSArray *)children;

@end


@class NSString, NSArray, NSURL, NSDictionary;

@interface BKSeriesInfo : NSObject <BKSeriesInfo> {

	NSDictionary* _infoDictionary;

}

@property (copy) NSDictionary * infoDictionary;                             //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) BOOL isExplicit; 
@property (readonly) BOOL isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned long long sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
+(id)seriesInfoWithDictionary:(id)arg1 ;
-(NSString *)sequenceDisplayName;
-(NSString *)seriesId;
-(NSString *)seriesTitle;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSDictionary *)infoDictionary;
-(NSString *)title;
-(NSString *)kind;
-(unsigned long long)sequenceNumber;
-(NSString *)author;
-(NSString *)adamId;
-(NSArray *)genres;
-(BOOL)isExplicit;
-(NSString *)tellAFriendMessageContentsUrl;
-(NSArray *)genreNames;
-(BOOL)isContainer;
-(NSString *)genre;
-(float)popularity;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(NSArray *)children;
@end

