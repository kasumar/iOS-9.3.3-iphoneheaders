/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageLayout.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TPAttachmentLayoutParent.h>

@protocol TSWPHeaderFooterProvider, TPMasterDrawableProvider;
@class TPMarginAdjustLayout, TPInflatableFootnoteContainerLayout, TSURetainedPointerKeyDictionary, TPBodyLayout, NSArray, TPFootnoteContainerLayout, TSWPPadding;

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent> {

	id<TSWPHeaderFooterProvider> _headerFooterProvider;
	TPMarginAdjustLayout* _marginAdjustLayout;
	TPInflatableFootnoteContainerLayout* _footnoteContainerLayout;
	unsigned long long _pageNumber;
	unsigned long long _pageCount;
	BOOL _childLayoutsValid;
	TSURetainedPointerKeyDictionary* _oldChildLayouts;
	id<TPMasterDrawableProvider> _masterDrawableProvider;
	unsigned _contentFlags;
	int _inInvalidationClusterCount;
	BOOL _childTextLayoutsNeedInvalidationForExteriorWrap;
	BOOL _validating;

}

@property (nonatomic,readonly) TPBodyLayout * bodyLayout; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) BOOL allowsBody; 
@property (nonatomic,readonly) BOOL allowsFootnotes; 
@property (nonatomic,readonly) unsigned long long pageIndex; 
@property (nonatomic,readonly) id<NSFastEnumeration> childTextLayoutsForExteriorWrap; 
@property (nonatomic,readonly) NSArray * floatingDrawableLayouts; 
@property (nonatomic,readonly) NSArray * anchoredDrawableLayouts; 
@property (nonatomic,readonly) TPFootnoteContainerLayout * footnoteContainerLayout;                //@synthesize footnoteContainerLayout=_footnoteContainerLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) id<TPMasterDrawableProvider> masterDrawableProvider; 
@property (assign,getter=isValidating,nonatomic) BOOL validating;                                  //@synthesize validating=_validating - In the implementation block
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2 ;
-(BOOL)hasHeaders;
-(BOOL)hasFooters;
-(void)invalidateSize;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(void)parentWillChangeTo:(id)arg1 ;
-(void)parentDidChange;
-(BOOL)isRootLayoutForInspectorGeometry;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
-(BOOL)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(void)wrappableChildInvalidated:(id)arg1 ;
-(void)beginResizeWrapInvalidationCluster;
-(void)endResizeWrapInvalidationCluster;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1 ;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(int)naturalAlignmentForTextLayout:(id)arg1 ;
-(unsigned long long)pageCountForAttachment:(id)arg1 ;
-(unsigned long long)pageNumberForAttachment:(id)arg1 ;
-(void)addAttachmentLayout:(id)arg1 ;
-(id)headerFooterProvider;
-(BOOL)headerFooterProviderValid;
-(BOOL)allowsHeaderFooter;
-(BOOL)shouldHeaderFooterBeVisible:(int)arg1 ;
-(CGRect)bodyRect;
-(id)pageLayout;
-(TPBodyLayout *)bodyLayout;
-(id)existingAttachmentLayoutForInfo:(id)arg1 ;
-(void)processWidowAndInflation;
-(void)evacuateOldChildLayoutCache;
-(BOOL)allowsBody;
-(id<NSFastEnumeration>)childTextLayoutsForExteriorWrap;
-(BOOL)allowsFootnotes;
-(void)resetLayoutsForReinflation;
-(TPFootnoteContainerLayout *)footnoteContainerLayout;
-(double)heightAvailableForFootnotes;
-(void)invalidateLayoutsForPageCountChange;
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1 ;
-(id)layoutForChildInfo:(id)arg1 ;
-(id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2 ;
-(void)rebuildChildLayoutsOnNextValidationForcingTextLayout:(BOOL)arg1 ;
-(NSArray *)floatingDrawableLayouts;
-(NSArray *)anchoredDrawableLayouts;
-(id)p_existingChildLayoutForInfo:(id)arg1 ;
-(void)p_sortChildLayouts;
-(BOOL)p_isHeaderFooterLayout:(id)arg1 ;
-(void)setValidating:(BOOL)arg1 ;
-(void)p_updateFromLayoutInfoProvider;
-(void)p_populateOldChildLayoutsWithLayouts:(id)arg1 ;
-(void)p_insertBodyLayout;
-(void)p_insertValidatedFloatingLayouts;
-(void)p_insertValidatedMasterLayouts;
-(void)p_insertFootnoteContainerLayout;
-(void)p_insertValidatedMarginAdjustLayout;
-(id)p_insertChildLayoutForInfo:(id)arg1 ;
-(id)p_orderedChildInfos;
-(id<TPMasterDrawableProvider>)masterDrawableProvider;
-(id)primaryLayoutForInfo:(id)arg1 ;
-(BOOL)isReadyForBodyLayout;
-(void)invalidateHeaderFooterLayoutsCache;
-(void)invalidateHeaderFooterLayouts;
-(void)invalidateBodyAndMarginLayouts;
-(void)invalidateFootnoteSeparatorLine;
-(void)invalidateFootnoteContainers;
-(void)inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(CGRect)footnoteContainerFrameWithSize:(CGSize)arg1 ;
-(id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(BOOL)arg2 ;
-(id)p_insertValidatedChildLayoutForInfo:(id)arg1 ;
-(void)dealloc;
-(TSWPPadding *)layoutMargins;
-(unsigned long long)pageCount;
-(unsigned long long)columnCount;
-(unsigned long long)pageIndex;
-(void)validate;
-(unsigned long long)pageNumber;
-(BOOL)isValidating;
@end

