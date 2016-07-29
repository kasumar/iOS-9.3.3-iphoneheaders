/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSLocale, NSString, NSArray, NSMutableArray, OITSUDateParserLibrary, NSLock, NSMutableDictionary, NSTimeZone;

@interface TSULocale : NSObject {

	NSLocale* _locale;
	CFLocaleRef _gregorianCalendarLocale;
	NSString* _languageCode;
	NSString* _localeIdentifier;
	NSString* _documentLanguageIdentifier;
	NSString* _currencyCode;
	NSString* _decimalSeparator;
	NSString* _currencyDecimalSeparator;
	NSString* _listSeparator;
	NSString* _groupingSeparator;
	NSString* _percentSymbol;
	int _dateComponentOrdering;
	NSArray* _standaloneMonthSymbols;
	NSArray* _weekdaySymbols;
	NSArray* _standaloneWeekdaySymbols;
	NSArray* _shortMonthSymbols;
	NSArray* _shortStandaloneMonthSymbols;
	NSArray* _shortStandaloneWeekdaySymbols;
	opaque_pthread_mutex_t _formattersMutex;
	NSMutableArray* _numberFormatters;
	NSMutableArray* _scientificNumberFormatters;
	OITSUDateParserLibrary* _dateParserLibrary;
	NSLock* _numberFormatterStringFromDoubleWithFormatLock;
	CFNumberFormatterRef _plainFormatter;
	CFNumberFormatterRef _noMinusSignPlainFormatter;
	CFNumberFormatterRef _currencyFormatter;
	CFNumberFormatterRef _noMinusSignCurrencyFormatter;
	NSString* _activeCurrencyCode;
	NSString* _activeNoMinusSignCurrencyCode;
	unsigned _groupingSize;
	NSLock* _localeSpecificStorageLock;
	NSMutableDictionary* _localeSpecificStorage;

}

@property (readonly) NSLocale * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (readonly) CFLocaleRef cfLocale; 
@property (readonly) NSLocale * gregorianCalendarLocale; 
@property (readonly) CFLocaleRef cfGregorianCalendarLocale;                   //@synthesize gregorianCalendarLocale=_gregorianCalendarLocale - In the implementation block
@property (readonly) NSString * languageCode;                                 //@synthesize languageCode=_languageCode - In the implementation block
@property (readonly) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (readonly) NSString * documentLanguageIdentifier;                   //@synthesize documentLanguageIdentifier=_documentLanguageIdentifier - In the implementation block
@property (readonly) NSString * currencyCode;                                 //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) NSString * decimalSeparator;                             //@synthesize decimalSeparator=_decimalSeparator - In the implementation block
@property (readonly) NSString * currencyDecimalSeparator;                     //@synthesize currencyDecimalSeparator=_currencyDecimalSeparator - In the implementation block
@property (readonly) NSString * listSeparator;                                //@synthesize listSeparator=_listSeparator - In the implementation block
@property (readonly) NSString * arrayRowSeparator; 
@property (readonly) NSString * groupingSeparator;                            //@synthesize groupingSeparator=_groupingSeparator - In the implementation block
@property (readonly) NSString * percentSymbol;                                //@synthesize percentSymbol=_percentSymbol - In the implementation block
@property (readonly) unsigned groupingSize;                                   //@synthesize groupingSize=_groupingSize - In the implementation block
@property (readonly) int dateComponentOrdering;                               //@synthesize dateComponentOrdering=_dateComponentOrdering - In the implementation block
@property (readonly) NSArray * standaloneMonthSymbols;                        //@synthesize standaloneMonthSymbols=_standaloneMonthSymbols - In the implementation block
@property (readonly) NSArray * weekdaySymbols;                                //@synthesize weekdaySymbols=_weekdaySymbols - In the implementation block
@property (readonly) NSArray * standaloneWeekdaySymbols;                      //@synthesize standaloneWeekdaySymbols=_standaloneWeekdaySymbols - In the implementation block
@property (readonly) NSArray * shortMonthSymbols;                             //@synthesize shortMonthSymbols=_shortMonthSymbols - In the implementation block
@property (readonly) NSArray * shortStandaloneMonthSymbols;                   //@synthesize shortStandaloneMonthSymbols=_shortStandaloneMonthSymbols - In the implementation block
@property (readonly) NSArray * shortStandaloneWeekdaySymbols;                 //@synthesize shortStandaloneWeekdaySymbols=_shortStandaloneWeekdaySymbols - In the implementation block
@property (readonly) OITSUDateParserLibrary * dateParserLibrary;              //@synthesize dateParserLibrary=_dateParserLibrary - In the implementation block
@property (readonly) NSTimeZone * timeZone; 
+(void)initialize;
+(id)currentLocale;
+(id)preferredLanguages;
+(id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1 ;
+(id)canonicalizeLocaleIdentifier:(id)arg1 ;
+(id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2 ;
+(void)saveLocaleForReuse:(id)arg1 ;
+(id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1 ;
+(void)setLocalizedStringBundle:(CFBundleRef)arg1 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSString *)localeIdentifier;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(NSString *)languageCode;
-(NSString *)currencyCode;
-(CFLocaleRef)cfGregorianCalendarLocale;
-(id)localeSpecificStorageForKey:(id)arg1 ;
-(void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2 ;
-(OITSUDateParserLibrary *)dateParserLibrary;
-(CFLocaleRef)cfLocale;
-(NSString *)decimalSeparator;
-(NSString *)groupingSeparator;
-(id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(BOOL)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(BOOL)arg6 currencyCode:(id)arg7 suppressMinusSign:(BOOL)arg8 ;
-(id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(BOOL)arg3 ;
-(NSString *)documentLanguageIdentifier;
-(id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 ;
-(void)_initializeNumberFormatterStringFromDoubleCache;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(CFBundleRef)arg4 ;
-(id)localeIdentifierWithLanguageAndRegionOnly;
-(id)localeIdentifierWithLanguageScriptAndRegionOnly;
-(id)copyWithDocumentLanguageIdentifier:(id)arg1 ;
-(NSLocale *)gregorianCalendarLocale;
-(NSString *)arrayRowSeparator;
-(CFNumberFormatterRef)checkoutNumberFormatter;
-(void)returnNumberFormatter:(CFNumberFormatterRef)arg1 ;
-(CFNumberFormatterRef)checkoutScientificNumberFormatter;
-(void)returnScientificNumberFormatter:(CFNumberFormatterRef)arg1 ;
-(long long)localizedCompare:(id)arg1 toString:(id)arg2 ;
-(BOOL)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
-(NSString *)currencyDecimalSeparator;
-(NSString *)listSeparator;
-(unsigned)groupingSize;
-(NSString *)percentSymbol;
-(int)dateComponentOrdering;
-(NSArray *)standaloneMonthSymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)shortMonthSymbols;
-(NSArray *)shortStandaloneMonthSymbols;
-(NSArray *)shortStandaloneWeekdaySymbols;
@end

