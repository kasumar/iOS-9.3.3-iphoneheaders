/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextReplacementGenerator.h>

@class UITextChecker, TIKeyboardCandidate;

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

	BOOL _forceHistoryReplacement;
	BOOL _forceAutocorrectionGuesses;
	BOOL _forceSpellingGuesses;
	UITextChecker* _textChecker;
	TIKeyboardCandidate* _autocorrectionRecord;
	unsigned long long _maxEditDistance;
	unsigned long long _maxCountAfterAutocorrectionGuesses;
	unsigned long long _maxCountAfterSpellingGuesses;

}

@property (nonatomic,retain) UITextChecker * textChecker;                                        //@synthesize textChecker=_textChecker - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecord;                         //@synthesize autocorrectionRecord=_autocorrectionRecord - In the implementation block
@property (assign,nonatomic) BOOL forceHistoryReplacement;                                       //@synthesize forceHistoryReplacement=_forceHistoryReplacement - In the implementation block
@property (assign,nonatomic) unsigned long long maxEditDistance;                                 //@synthesize maxEditDistance=_maxEditDistance - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;              //@synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceAutocorrectionGuesses;                                    //@synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterSpellingGuesses;                    //@synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceSpellingGuesses;                                          //@synthesize forceSpellingGuesses=_forceSpellingGuesses - In the implementation block
-(id)init;
-(void)setTextChecker:(UITextChecker *)arg1 ;
-(void)setAutocorrectionRecord:(TIKeyboardCandidate *)arg1 ;
-(void)setForceHistoryReplacement:(BOOL)arg1 ;
-(void)setForceAutocorrectionGuesses:(BOOL)arg1 ;
-(void)setForceSpellingGuesses:(BOOL)arg1 ;
-(void)setMaxCountAfterAutocorrectionGuesses:(unsigned long long)arg1 ;
-(void)setMaxCountAfterSpellingGuesses:(unsigned long long)arg1 ;
-(id)replacements;
-(void)setMaxEditDistance:(unsigned long long)arg1 ;
-(UITextChecker *)textChecker;
-(TIKeyboardCandidate *)autocorrectionRecord;
-(unsigned long long)maxCountAfterAutocorrectionGuesses;
-(unsigned long long)maxEditDistance;
-(unsigned long long)maxCountAfterSpellingGuesses;
-(BOOL)isStringMisspelled:(id)arg1 ;
-(BOOL)forceHistoryReplacement;
-(id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1 ;
-(void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1 ;
-(BOOL)forceAutocorrectionGuesses;
-(void)addAutocorrectionGuessesToReplacements:(id)arg1 ;
-(BOOL)forceSpellingGuesses;
-(void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2 ;
@end

