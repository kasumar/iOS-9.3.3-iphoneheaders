/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDInfo.h>

@class TSDInfoGeometry, NSString;

@interface TSWPTextParentInfo : NSObject <TSDInfo>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isAttachedToBodyText;
-(BOOL)isThemeContent;
-(BOOL)isInlineWithText;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
@end

