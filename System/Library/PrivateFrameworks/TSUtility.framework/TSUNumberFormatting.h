/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(double)scaleFactor;
-(unsigned short)base;
-(id)formatString;
-(id)currencyCode;
-(id)stringFromString:(id)arg1;
-(int)valueType;
-(id)formatName;
-(void)setFormatName:(id)arg1;
-(unsigned short)decimalPlaces;
-(BOOL)usesAccountingStyle;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)isCustom;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2;
-(BOOL)isEquivalent:(id)arg1;

@end

