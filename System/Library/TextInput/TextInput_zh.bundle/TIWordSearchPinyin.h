/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchPinyin : TIWordSearch {

	id _dictionaryUpdateObserver;
	/*^block*/id _addressBookLoader;
	BOOL _fuzzyPinyinEnabled;
	BOOL _tenKeyPinyinEnabled;
	NSArray* _fuzzyPinyinPairs;

}

@property (assign,nonatomic) BOOL fuzzyPinyinEnabled;                 //@synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled - In the implementation block
@property (assign,nonatomic) BOOL tenKeyPinyinEnabled;                //@synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled - In the implementation block
@property (nonatomic,retain) NSArray * fuzzyPinyinPairs;              //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
+(void)sendDictionaryUpdatePathsForInputMode:(id)arg1 toMecabra:(id)arg2 onQueue:(id)arg3 ;
+(id)pinyinCharacterSetWithTones;
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(int)mecabraInputMethodType;
-(void)updateMecabraState;
-(void)clearObservers;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)setFuzzyPinyinPairs:(NSArray *)arg1 ;
-(NSArray *)fuzzyPinyinPairs;
-(void)updateAddressBook;
-(void)updateDictionaryPaths;
-(BOOL)fuzzyPinyinEnabled;
-(void)setFuzzyPinyinEnabled:(BOOL)arg1 ;
-(void)updateFuzzyPinyinSettings;
-(BOOL)tenKeyPinyinEnabled;
-(unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)arg1 firstSyllableLocked:(BOOL)arg2 reanalysisMode:(BOOL)arg3 hardwareKeyboardMode:(BOOL)arg4 ;
-(void)clearCacheForInputString:(id)arg1 selectedHiddenCandidateIndex:(unsigned long long)arg2 ;
-(void)setTenKeyPinyinEnabled:(BOOL)arg1 ;
@end

