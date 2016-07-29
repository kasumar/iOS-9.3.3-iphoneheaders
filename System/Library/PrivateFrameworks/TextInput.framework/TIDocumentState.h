/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding> {

	NSString* _contextBeforeInput;
	NSString* _markedText;
	NSString* _selectedText;
	NSString* _contextAfterInput;
	NSRange _selectedRangeInMarkedText;

}

@property (nonatomic,readonly) NSString * contextBeforeInput;                  //@synthesize contextBeforeInput=_contextBeforeInput - In the implementation block
@property (nonatomic,readonly) NSString * markedText;                          //@synthesize markedText=_markedText - In the implementation block
@property (nonatomic,readonly) NSString * selectedText;                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,readonly) NSString * contextAfterInput;                   //@synthesize contextAfterInput=_contextAfterInput - In the implementation block
@property (nonatomic,readonly) NSRange selectedRangeInMarkedText;              //@synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText - In the implementation block
+(id)documentStateOfSecureTextDocument:(id)arg1 ;
+(id)documentStateOfDocument:(id)arg1 ;
+(id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 ;
+(id)documentStateWithText:(id)arg1 selectedRange:(NSRange)arg2 ;
+(id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 ;
+(id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(NSRange)arg3 contextAfter:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDocument:(id)arg1 ;
-(id)initWithSecureTextDocument:(id)arg1 ;
-(id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(/*^block*/id)arg3 ;
-(id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 ;
-(id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3 ;
-(id)copyTextInRange:(id)arg1 fromDocument:(id)arg2 ;
-(id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(/*^block*/id)arg3 ;
-(id)initWithText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(BOOL)deletingBackwardsWillRemoveText;
-(id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(/*^block*/id)arg2 reverse:(BOOL)arg3 ;
-(unsigned long long)inputIndexWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(id)inputStemWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(id)inputStringWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(id)documentStateAfterCollapsingSelection;
-(id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)documentStateAfterUnmarkingText;
-(id)documentStateAfterInsertingText:(id)arg1 ;
-(id)documentStateAfterInsertingTextAfterSelection:(id)arg1 ;
-(id)documentStateAfterDeletingBackward;
-(id)documentStateAfterDeletingForward;
-(id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2 ;
-(id)documentStateAfterCursorAdjustment:(long long)arg1 ;
-(unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)selectedText;
-(NSString *)contextBeforeInput;
-(NSString *)markedText;
-(NSRange)selectedRangeInMarkedText;
-(id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(NSRange)arg5 ;
-(BOOL)documentIsEmpty;
-(NSString *)contextAfterInput;
@end

