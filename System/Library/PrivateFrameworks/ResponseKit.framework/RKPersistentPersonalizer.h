/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RKDisplayStringsProvider;
@class NSString, NSLocale, NSURL, NSDate, NSMutableDictionary;

@interface RKPersistentPersonalizer : NSObject {

	void* _model;
	NSString* _languageID;
	NSLocale* _languageLocale;
	NSURL* _dynamicDataURL;
	id<RKDisplayStringsProvider> _displayStringsProvider;
	NSDate* _lastObservedDynamicDataCreationDate;
	NSDate* _lastDynamicDataCreationCheckDate;
	NSMutableDictionary* _synonyms;

}

@property (retain) NSString * languageID;                                              //@synthesize languageID=_languageID - In the implementation block
@property (retain) NSLocale * languageLocale;                                          //@synthesize languageLocale=_languageLocale - In the implementation block
@property (retain) NSURL * dynamicDataURL;                                             //@synthesize dynamicDataURL=_dynamicDataURL - In the implementation block
@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider;              //@synthesize displayStringsProvider=_displayStringsProvider - In the implementation block
@property (readonly) void* model; 
@property (retain) NSDate * lastObservedDynamicDataCreationDate;                       //@synthesize lastObservedDynamicDataCreationDate=_lastObservedDynamicDataCreationDate - In the implementation block
@property (retain) NSDate * lastDynamicDataCreationCheckDate;                          //@synthesize lastDynamicDataCreationCheckDate=_lastDynamicDataCreationCheckDate - In the implementation block
@property (retain) NSMutableDictionary * synonyms;                                     //@synthesize synonyms=_synonyms - In the implementation block
+(void)removeAllDynamicModelsInDirectory:(id)arg1 ;
+(id)nonEmptyStringsPredicate;
-(void)dealloc;
-(id)init;
-(void*)model;
-(void)setLanguageLocale:(NSLocale *)arg1 ;
-(NSLocale *)languageLocale;
-(NSMutableDictionary *)synonyms;
-(void)setSynonyms:(NSMutableDictionary *)arg1 ;
-(NSURL *)dynamicDataURL;
-(id<RKDisplayStringsProvider>)displayStringsProvider;
-(id)headwordsForSynonym:(id)arg1 ;
-(id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4 ;
-(id)headwordsForSynonymPrefix:(id)arg1 ;
-(void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6 ;
-(id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3 ;
-(void*)createLanguageModel;
-(id)dynamicDataCreationDate;
-(NSString *)languageID;
-(void)initializeDynamicLanguageModel;
-(NSDate *)lastDynamicDataCreationCheckDate;
-(void)setLastDynamicDataCreationCheckDate:(NSDate *)arg1 ;
-(NSDate *)lastObservedDynamicDataCreationDate;
-(void)setLastObservedDynamicDataCreationDate:(NSDate *)arg1 ;
-(void)setLanguageID:(NSString *)arg1 ;
-(void)setDynamicDataURL:(NSURL *)arg1 ;
-(void)flushDynamicData;
@end
