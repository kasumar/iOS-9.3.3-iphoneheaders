/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSAPdfHyperlinkController.h>

@class TSWPStorage;

@interface TPPdfHyperlinkController : TSAPdfHyperlinkController {

	CGRect mCanvasRect;
	TSWPStorage* mBodyStorage;

}
+(id)footnoteRefNameForIndex:(unsigned long long)arg1 ;
+(id)footnoteMarkNameForIndex:(unsigned long long)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)addHyperlinksForRep:(id)arg1 context:(CGContextRef)arg2 ;
-(CGRect)canvasRect;
-(BOOL)ignoreUrl:(id)arg1 ;
-(BOOL)isDestination:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(void)setCanvasRect:(CGRect)arg1 ;
@end

