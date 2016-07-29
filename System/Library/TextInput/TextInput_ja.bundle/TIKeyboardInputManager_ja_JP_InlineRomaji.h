/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TIKeyboardInputManager_ja_JP.h>

@class NSMutableArray, NSString;

@interface TIKeyboardInputManager_ja_JP_InlineRomaji : TIKeyboardInputManager_ja_JP {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}
+(Class)wordSearchClass;
-(void)dealloc;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(id)inputString;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)updateState;
-(id)initWithInputMode:(id)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)loadDictionaries;
-(BOOL)isPartialCandidate;
-(void)inputLocationChanged;
-(id)remainingInput;
-(id)didAcceptCandidate:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(BOOL)remainingInputIsRomanAlphabet:(unsigned long long)arg1 ;
@end

