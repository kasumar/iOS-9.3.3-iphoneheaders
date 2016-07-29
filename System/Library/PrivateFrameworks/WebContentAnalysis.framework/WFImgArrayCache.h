/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	long long numberOfUnknownSizedImages;
	long long numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(long long)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(long long)numberOfUnknownSizedImages;
@end

