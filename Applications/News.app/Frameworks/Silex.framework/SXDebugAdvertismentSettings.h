/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SXDebugAdvertismentSettings : NSObject {

	unsigned long long _frequency;
	NSString* _bannerType;
	NSString* _margin;

}

@property (assign,nonatomic) unsigned long long frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,retain) NSString * bannerType;                     //@synthesize bannerType=_bannerType - In the implementation block
@property (nonatomic,retain) NSString * margin;                         //@synthesize margin=_margin - In the implementation block
-(NSString *)bannerType;
-(void)setBannerType:(NSString *)arg1 ;
-(unsigned long long)frequency;
-(void)setFrequency:(unsigned long long)arg1 ;
-(void)setMargin:(NSString *)arg1 ;
-(NSString *)margin;
@end

