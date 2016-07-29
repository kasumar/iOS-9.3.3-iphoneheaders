/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR27* _pINEntrySeparatorIndexes;
	unsigned long long _validTextRangeLength;
	unsigned long long _validTextRangeLocation;
	int _autocapitalizationType;
	int _keyboardType;
	int _returnKeyType;
	BOOL _autocorrection;
	BOOL _enablesReturnKeyAutomatically;
	BOOL _secureTextEntry;
	BOOL _spellchecking;
	SCD_Struct_MR28 _has;

}

@property (assign,nonatomic) BOOL hasAutocapitalizationType; 
@property (assign,nonatomic) int autocapitalizationType;                                      //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardType; 
@property (assign,nonatomic) int keyboardType;                                                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) BOOL hasReturnKeyType; 
@property (assign,nonatomic) int returnKeyType;                                               //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasAutocorrection; 
@property (assign,nonatomic) BOOL autocorrection;                                             //@synthesize autocorrection=_autocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasSpellchecking; 
@property (assign,nonatomic) BOOL spellchecking;                                              //@synthesize spellchecking=_spellchecking - In the implementation block
@property (assign,nonatomic) BOOL hasEnablesReturnKeyAutomatically; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically;                              //@synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically - In the implementation block
@property (assign,nonatomic) BOOL hasSecureTextEntry; 
@property (assign,nonatomic) BOOL secureTextEntry;                                            //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) BOOL hasValidTextRangeLocation; 
@property (assign,nonatomic) unsigned long long validTextRangeLocation;                       //@synthesize validTextRangeLocation=_validTextRangeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasValidTextRangeLength; 
@property (assign,nonatomic) unsigned long long validTextRangeLength;                         //@synthesize validTextRangeLength=_validTextRangeLength - In the implementation block
@property (nonatomic,readonly) unsigned long long pINEntrySeparatorIndexesCount; 
@property (nonatomic,readonly) unsigned long long* pINEntrySeparatorIndexes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(BOOL)autocorrection;
-(void)setAutocorrection:(BOOL)arg1 ;
-(BOOL)hasAutocorrection;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)pINEntrySeparatorIndexesCount;
-(void)clearPINEntrySeparatorIndexes;
-(unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)arg1 ;
-(void)addPINEntrySeparatorIndexes:(unsigned long long)arg1 ;
-(void)setHasAutocapitalizationType:(BOOL)arg1 ;
-(BOOL)hasAutocapitalizationType;
-(void)setHasKeyboardType:(BOOL)arg1 ;
-(BOOL)hasKeyboardType;
-(void)setHasReturnKeyType:(BOOL)arg1 ;
-(BOOL)hasReturnKeyType;
-(void)setSpellchecking:(BOOL)arg1 ;
-(void)setHasSpellchecking:(BOOL)arg1 ;
-(BOOL)hasSpellchecking;
-(void)setHasEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(BOOL)hasEnablesReturnKeyAutomatically;
-(void)setHasSecureTextEntry:(BOOL)arg1 ;
-(BOOL)hasSecureTextEntry;
-(void)setValidTextRangeLocation:(unsigned long long)arg1 ;
-(void)setHasValidTextRangeLocation:(BOOL)arg1 ;
-(BOOL)hasValidTextRangeLocation;
-(void)setValidTextRangeLength:(unsigned long long)arg1 ;
-(void)setHasValidTextRangeLength:(BOOL)arg1 ;
-(BOOL)hasValidTextRangeLength;
-(unsigned long long*)pINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)spellchecking;
-(unsigned long long)validTextRangeLocation;
-(unsigned long long)validTextRangeLength;
-(BOOL)secureTextEntry;
@end

