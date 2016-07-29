/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSString;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {

	BOOL _assertDefaultKeyPlane;
	TIKeyboardInputManagerState* _inputManagerState;
	TIKeyboardIntermediateText* _intermediateText;
	NSString* _layoutTag;
	NSString* _accentKeyString;

}

@property (nonatomic,copy) TIKeyboardInputManagerState * inputManagerState;              //@synthesize inputManagerState=_inputManagerState - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;              //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                                         //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,copy) NSString * accentKeyString;                                   //@synthesize accentKeyString=_accentKeyString - In the implementation block
@property (assign,nonatomic) BOOL assertDefaultKeyPlane;                                 //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(TIKeyboardInputManagerState *)inputManagerState;
-(void)setInputManagerState:(TIKeyboardInputManagerState *)arg1 ;
-(TIKeyboardIntermediateText *)intermediateText;
-(BOOL)assertDefaultKeyPlane;
-(NSString *)accentKeyString;
-(void)setAccentKeyString:(NSString *)arg1 ;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(void)setAssertDefaultKeyPlane:(BOOL)arg1 ;
@end

