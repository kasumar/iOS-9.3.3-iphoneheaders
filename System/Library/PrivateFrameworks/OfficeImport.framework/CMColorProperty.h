/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>

@class OITSUColor;

@interface CMColorProperty : CMProperty {

	OITSUColor* wdValue;

}
+(id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
+(float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3 ;
+(id)cssStringFromOADColor:(id)arg1 ;
+(float)transformedAlphaFromOADColor:(id)arg1 ;
+(id)nsColorFromShading:(id)arg1 ;
+(id)nsColorFromOADFill:(id)arg1 state:(id)arg2 ;
+(id)nsColorFromOADColor:(id)arg1 state:(id)arg2 ;
+(id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)cssStringFromTSUColor:(id)arg1 ;
+(CGColorRef)copyCGColorFromOADColor:(id)arg1 state:(id)arg2 ;
+(CGColorRef)copyCGColorFromOADFill:(id)arg1 state:(id)arg2 ;
+(id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2 ;
-(id)value;
-(id)initWithColor:(id)arg1 ;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(BOOL)isEqualTo:(id)arg1 ;
@end

