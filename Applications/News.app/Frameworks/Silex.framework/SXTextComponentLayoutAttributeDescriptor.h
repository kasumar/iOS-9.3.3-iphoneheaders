/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class SXTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {

	SXTextExclusionPath* _resultingExclusionPath;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) SXTextExclusionPath * resultingExclusionPath;              //@synthesize resultingExclusionPath=_resultingExclusionPath - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(NSRange)arg4 ;
-(SXTextExclusionPath *)resultingExclusionPath;
-(void)setResultingExclusionPath:(SXTextExclusionPath *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

