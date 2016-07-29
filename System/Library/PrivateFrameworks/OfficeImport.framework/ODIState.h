/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDDiagram, OADOrientedBounds, OADGroup, NSMutableArray, OADShapeStyle, OADDrawingTheme;

@interface ODIState : NSObject {

	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	double mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;

}
-(void)dealloc;
-(double)scale;
-(void)setGroup:(id)arg1 ;
-(id)group;
-(id)textStyle;
-(void)setTextStyle:(id)arg1 ;
-(int)pointCount;
-(CGRect)logicalBounds;
-(id)diagram;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(id)diagramOrientedBounds;
-(id)presentationNameForPointType:(int)arg1 ;
-(id)drawingTheme;
-(int)pointIndex;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setPointCount:(int)arg1 ;
-(void)setPointIndex:(int)arg1 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(BOOL)arg2 ;
@end

