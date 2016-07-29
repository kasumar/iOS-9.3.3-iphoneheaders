/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDChangeableInfo.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKTransformableObject.h>

@protocol TSDContainerInfo;
@class NSObject, TSDInfoGeometry, TSSPropertySetChangeDetails, TSSStylesheet, KNAbstractSlide, TSDFill, NSString;

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject> {

	NSObject*<TSDContainerInfo> mParentInfo;
	TSDInfoGeometry* mGeometry;
	TSSPropertySetChangeDetails* mChanges;
	TSSStylesheet* mStylesheet;
	KNAbstractSlide* mSlide;

}

@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,readonly) KNAbstractSlide * slide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isUserModifiable; 
+(id)backgroundWithSlide:(id)arg1 andGeometry:(id)arg2 ;
-(id)initWithSlide:(id)arg1 andGeometry:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)willChangeProperty:(int)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isAttachedToBodyText;
-(BOOL)isThemeContent;
-(BOOL)isInlineWithText;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(BOOL)isUserModifiable;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)dealloc;
-(TSDFill *)fill;
-(CGSize)minimumSize;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
-(KNAbstractSlide *)slide;
@end

