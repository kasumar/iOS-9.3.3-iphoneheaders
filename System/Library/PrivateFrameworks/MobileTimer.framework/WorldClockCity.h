/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALCity, City, NSString, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject {

	ALCity* _alCity;
	City* _weatherCity;
	NSString* _timeZone;
	NSString* _name;
	NSString* _countryName;
	NSString* _countryCode;
	NSString* _unlocalizedName;
	NSString* _unlocalizedCountryName;

}

@property (nonatomic,readonly) NSString * abbreviation; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) ALCity * alCity;                                //@synthesize alCity=_alCity - In the implementation block
@property (nonatomic,readonly) NSNumber * alCityId; 
@property (nonatomic,retain) City * weatherCity;                               //@synthesize weatherCity=_weatherCity - In the implementation block
@property (nonatomic,readonly) NSString * timeZone; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * countryName; 
@property (nonatomic,readonly) NSString * unlocalizedCityName; 
@property (nonatomic,readonly) NSString * unlocalizedCountryName; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSURL * idUrl; 
+(BOOL)isWorldClockCityProperties:(id)arg1 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2 ;
+(id)unlocalizedExampleCity;
-(NSString *)abbreviation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)timeZone;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)countryCode;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(NSString *)unlocalizedCountryName;
-(id)initWithALCity:(id)arg1 ;
-(NSURL *)idUrl;
-(ALCity *)alCity;
-(void)setWeatherCity:(City *)arg1 ;
-(City *)weatherCity;
-(id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6 ;
-(id)initWithALCityIdentifier:(int)arg1 ;
-(NSString *)countryName;
@end

