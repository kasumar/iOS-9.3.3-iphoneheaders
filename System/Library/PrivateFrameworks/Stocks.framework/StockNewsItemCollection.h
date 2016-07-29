/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface StockNewsItemCollection : NSObject {

	NSArray* _newsItems;
	double _expirationTime;

}

@property (nonatomic,retain) NSArray * newsItems;                //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(id)initWithArchiveArray:(id)arg1 ;
-(id)archiveArray;
-(NSArray *)newsItems;
-(void)setNewsItems:(NSArray *)arg1 ;
@end

