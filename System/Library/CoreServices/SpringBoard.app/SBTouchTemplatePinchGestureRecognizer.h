/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePinchGestureRecognizer : SBTouchTemplateGestureRecognizer
-(BOOL)hasSignificantMotionToBegin;
-(void)_log:(id)arg1 ;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(double)_computeNonlinearSpeedGain:(double)arg1 ;
-(double)_computeHandSizeCompensationGain:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

