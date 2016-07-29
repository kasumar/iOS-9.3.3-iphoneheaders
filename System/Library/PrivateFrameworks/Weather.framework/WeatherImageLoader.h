/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject {

	double _scale;
	CPBitmapStore* _store;
	NSCache* _conditionImagesCache;

}

@property (nonatomic,retain) CPBitmapStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSCache * conditionImagesCache;              //@synthesize conditionImagesCache=_conditionImagesCache - In the implementation block
+(id)sharedImageLoader;
+(id)conditionImageBundle;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)conditionImageNamed:(id)arg1 ;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(id)init;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)cachedImageForKey:(id)arg1 ;
-(NSCache *)conditionImagesCache;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
@end

