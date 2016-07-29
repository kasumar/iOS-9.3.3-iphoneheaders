/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher, NSRecursiveLock;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;
	NSRecursiveLock* _databaseAccessRecursiveLock;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
+(id)sharedManager;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)allLocales;
-(id)defaultCitiesShownInWorldClock;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(CPSearchMatcher *)citySearchMatcher;
-(void)dealloc;
-(id)init;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 ;
-(id)allCities;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
@end

