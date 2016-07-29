/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXTextSource, NSSet, TSDLayoutController, SXTextTangierContainerInfo;

@interface SXTextLayouter : NSObject {

	SXTextSource* _textSource;
	NSSet* _exclusionPaths;
	TSDLayoutController* _layoutController;
	SXTextTangierContainerInfo* _textInfo;

}

@property (nonatomic,retain) SXTextSource * textSource;                           //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) NSSet * exclusionPaths;                              //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
@property (nonatomic,retain) TSDLayoutController * layoutController;              //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) SXTextTangierContainerInfo * textInfo;               //@synthesize textInfo=_textInfo - In the implementation block
-(double)calculateHeightForWidth:(double)arg1 ;
-(void)setLayoutController:(TSDLayoutController *)arg1 ;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(SXTextSource *)textSource;
-(void)removeAllExclusionPaths;
-(void)addExclusionPath:(id)arg1 ;
-(id)initWithTextSource:(id)arg1 ;
-(void)assignExclusionPaths;
-(SXTextTangierContainerInfo *)textInfo;
-(id)textLayout;
-(id)wpLayout;
-(double)baselineForLastLine;
-(id)wpStorage;
-(void)setTextInfo:(SXTextTangierContainerInfo *)arg1 ;
-(TSDLayoutController *)layoutController;
-(id)init;
-(void)invalidate;
-(NSSet *)exclusionPaths;
-(void)setExclusionPaths:(NSSet *)arg1 ;
-(id)firstColumn;
@end

