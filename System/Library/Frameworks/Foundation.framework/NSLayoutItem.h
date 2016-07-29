/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutItem <NSObject>
@optional
-(id)nsli_minXVariable;
-(id)nsli_minYVariable;
-(void)nsli_addConstraint:(id)arg1;
-(BOOL)nsli_removeConstraint:(id)arg1;
-(id)nsli_installedConstraints;
-(double)nsli_marginOffsetForAttribute:(long long)arg1;
-(void)nsli_addConstraint:(id)arg1 mutuallyExclusiveConstraints:(id*)arg2;
-(id)nsli_widthVariable;
-(id)nsli_heightVariable;

@required
-(id)nsli_superitem;
-(id)nsli_description;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
-(id)nsli_layoutEngine;
-(CGSize*)nsli_convertSizeToEngineSpace:(CGSize)arg1;
-(CGSize*)nsli_convertSizeFromEngineSpace:(CGSize)arg1;
-(BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(BOOL)nsli_descriptionIncludesPointer;
-(unsigned long long)nsli_autoresizingMask;
-(BOOL)nsli_isFlipped;

@end
