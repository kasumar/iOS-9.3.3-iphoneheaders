/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_el.bundle/TextInput_el
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_el/TextInput_el-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_el : TIKeyboardInputManagerZephyr
-(id)nonstopPunctuationCharacters;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)sentenceDelimitingCharacters;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
@end
