/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression {

	SCRCMathExpression* _radicand;
	SCRCMathExpression* _rootIndex;

}

@property (nonatomic,retain) SCRCMathExpression * radicand;               //@synthesize radicand=_radicand - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * rootIndex;              //@synthesize rootIndex=_rootIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(void)setRadicand:(SCRCMathExpression *)arg1 ;
-(void)setRootIndex:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)radicand;
-(SCRCMathExpression *)rootIndex;
-(BOOL)_isSquareRoot;
-(BOOL)_isCubeRoot;
-(id)mathMLString;
@end

