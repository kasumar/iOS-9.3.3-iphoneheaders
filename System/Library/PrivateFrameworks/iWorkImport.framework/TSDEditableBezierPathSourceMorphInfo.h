/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDEditableBezierPathSource, TSUPointerKeyDictionary;

@interface TSDEditableBezierPathSourceMorphInfo : NSObject {

	TSDEditableBezierPathSource* mOriginal;
	TSDEditableBezierPathSource* mSmoothOriginal;
	TSUPointerKeyDictionary* mOriginalNodeIndexMapping;

}

@property (nonatomic,retain) TSDEditableBezierPathSource * original; 
@property (nonatomic,retain) TSDEditableBezierPathSource * smoothOriginal; 
-(void)setOriginal:(TSDEditableBezierPathSource *)arg1 ;
-(id)initWithEditableBezierPathSource:(id)arg1 ;
-(id)originalNodeForNode:(id)arg1 ;
-(unsigned long long)originalSubpathIndexForNode:(id)arg1 ;
-(unsigned long long)originalNodeIndexForNode:(id)arg1 ;
-(id)originalSmoothNodeForNode:(id)arg1 ;
-(TSDEditableBezierPathSource *)smoothOriginal;
-(void)setSmoothOriginal:(TSDEditableBezierPathSource *)arg1 ;
-(void)dealloc;
-(TSDEditableBezierPathSource *)original;
@end

