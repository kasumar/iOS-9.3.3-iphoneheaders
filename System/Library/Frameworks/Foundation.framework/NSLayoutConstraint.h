/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSISConstraint.h>

@class _NSLayoutConstraintConstant, NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstItem;
	id _secondItem;
	double _constant;
	double _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (setter=_setEncodedConstant:,getter=_encodedConstant,retain) _NSLayoutConstraintConstant * encodedConstant; 
@property (assign) float priority; 
@property (assign) BOOL shouldBeArchived; 
@property (assign) id firstItem;                                                                                                                     //@synthesize firstItem=_firstItem - In the implementation block
@property (assign) long long firstAttribute; 
@property (assign) long long relation; 
@property (assign) id secondItem;                                                                                                                    //@synthesize secondItem=_secondItem - In the implementation block
@property (assign) long long secondAttribute; 
@property (assign) double multiplier; 
@property (assign) double constant; 
@property (getter=isActive) BOOL active; 
@property (copy) NSString * identifier; 
@property (readonly) BOOL hasBeenLowered; 
@property (assign) id container; 
@property (readonly) double unsatisfaction; 
@property (copy) NSString * symbolicConstant; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) BOOL loweredConstantNeedsUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3 ;
+(id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(UIEdgeInsets)arg5 applyOrthogonalConstraints:(BOOL)arg6 ;
+(id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3 ;
+(id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3 ;
+(id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3 ;
+(id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2 ;
+(id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(UIEdgeInsets)arg5 ;
+(id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2 ;
+(id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2 ;
+(id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2 ;
+(id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(UIEdgeInsets)arg3 ;
+(id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3 ;
+(id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2 ;
+(id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3 ;
+(id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8 ;
+(id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(UIEdgeInsets)arg5 ;
+(BOOL)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2 ;
+(id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(UIOffset)arg4 ;
+(id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(UIEdgeInsets)arg4 ;
+(id)naui_constraintsBySizingView:(id)arg1 toSize:(CGSize)arg2 ;
+(id)naui_viewsInConstraints:(id)arg1 ;
+(id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5 ;
+(id)PG_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned long long)arg3 offset:(UIOffset)arg4 ;
+(id)constraintsBySizingView:(id)arg1 toSize:(CGSize)arg2 ;
+(id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(UIEdgeInsets)arg3 ;
+(id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(UIEdgeInsets)arg4 ;
+(id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(int)arg3 offset:(UIOffset)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)constraintWithItem:(id)arg1 height:(double)arg2 ;
+(id)ax_constraintsToMakeView:(id)arg1 sameDimensionsAsView:(id)arg2 ;
+(BOOL)_UIWantsMarginAttributeSupport;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 ;
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2 ;
+(void)_setLegacyDecodingOnly:(BOOL)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(void)activateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4 ;
+(void)deactivateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
-(void)tk_removeFromContainer;
-(id)_maps_constraintWithHighestBreakablePriority;
-(BOOL)naui_isEqualToConstraint:(id)arg1 ;
-(id)naui_debugIdentifierWithBaseLabel:(id)arg1 ;
-(void)naui_setIdentifierWithLabel:(id)arg1 ;
-(void)ax_removeFromContainer;
-(id)_ola_dimensionRefItem;
-(id)_ola_dimensionItem;
-(void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(BOOL)arg2 ;
-(id)_baselineLoweringInfoForFirstItem:(BOOL)arg1 ;
-(id)_encodedConstant;
-(void)_setEncodedConstant:(id)arg1 ;
-(BOOL)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3 ;
-(id)_uiFirstRefView;
-(id)_uiSecondRefView;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(double)unsatisfaction;
-(id)_negativeExtraVar;
-(id)_constantDescriptionForDTrace;
-(BOOL)_existsInEngine:(id)arg1 ;
-(double)_allowedMagnitudeForIntegralizationAdjustment;
-(CGSize)_engineToContainerScalingCoefficients;
-(void)setHasBeenLowered:(BOOL)arg1 ;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5 ;
-(double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1 ;
-(id)_symbolicConstant;
-(void)_ensureValueMaintainsArbitraryLimit:(double*)arg1 ;
-(void)_setSymbolicConstant:(id)arg1 ;
-(BOOL)_tryToChangeContainerGeometryWithUndoHandler:(/*^block*/id)arg1 ;
-(BOOL)_effectiveConstant:(double*)arg1 error:(id*)arg2 ;
-(void)_setSymbolicConstant:(id)arg1 constant:(double)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)asciiArtDescription;
-(id)equationDescription;
-(id)_priorityDescription;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(double)priorityForVariable:(id)arg1 ;
-(id)_deallocSafeDescription;
-(void)_makeExtraVars;
-(void)_setActive:(BOOL)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(BOOL)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 ;
-(void)_setFirstAttribute:(long long)arg1 ;
-(void)_setRelation:(long long)arg1 ;
-(void)_setSecondItem:(id)arg1 ;
-(void)_setSecondAttribute:(long long)arg1 ;
-(double)dissatisfaction;
-(void)_setLoweredConstantNeedsUpdate:(BOOL)arg1 ;
-(BOOL)_loweredConstantNeedsUpdate;
-(BOOL)_isIBPrototypingLayoutConstraint;
-(BOOL)_existsInFirstItemEngine;
-(BOOL)_isFudgeable;
-(double)_fudgeIncrement;
-(void)_setMarkerAndPositiveErrorVar:(id)arg1 ;
-(void)_setNegativeExtraVar:(id)arg1 ;
-(BOOL)_deferDTraceLogging;
-(void)_setDeferDTraceLogging:(BOOL)arg1 ;
-(int)_primitiveConstraintType;
-(void)_setPrimitiveConstraintType:(int)arg1 ;
-(void)_clearWeakContainerReference;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(BOOL)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(id)_loweredExpression;
-(void)_explainUnsatisfaction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(BOOL)isActive;
-(NSString *)identifier;
-(void)setConstant:(double)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id)_layoutEngine;
-(id)container;
-(void)_removeFromEngine:(id)arg1 ;
-(BOOL)hasBeenLowered;
-(void)_containerGeometryDidChange;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)_addToEngine:(id)arg1 ;
-(BOOL)shouldBeArchived;
-(double)constant;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)firstItem;
-(id)secondItem;
-(long long)firstAttribute;
-(long long)secondAttribute;
-(void)setContainer:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(id)animations;
-(void)_setMultiplier:(double)arg1 ;
-(long long)relation;
-(double)multiplier;
-(BOOL)_nsib_isRedundant;
-(BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(BOOL)_loweredConstantIsRounded;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)_markerAndPositiveExtraVar;
-(NSString *)symbolicConstant;
-(void)setSymbolicConstant:(NSString *)arg1 ;
-(void)setShouldBeArchived:(BOOL)arg1 ;
-(int)_constraintType;
-(id)_identifier;
-(void)_setIdentifier:(id)arg1 ;
@end

