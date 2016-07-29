/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, TSURetainedPointerKeyDictionary, TSADocumentRoot;

@interface TSAShortcutController : TSPObject {

	NSMutableDictionary* _shortcutToStyleDictionary;
	TSURetainedPointerKeyDictionary* _styleToShortcutDictionary;
	TSADocumentRoot* _documentRoot;

}

@property (nonatomic,readonly) BOOL hasShortcuts; 
@property (assign,nonatomic) TSADocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
+(id)localizedStringForShortcut:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)documentDidLoad;
-(void)saveToArchive:(ShortcutControllerArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ShortcutControllerArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)hasShortcuts;
-(void)documentWillUnload;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)styleForShortcut:(id)arg1 ;
-(id)shortcutForStyle:(id)arg1 ;
-(void)setStyle:(id)arg1 forShortcut:(id)arg2 ;
-(void)removeStylesNotInTheme;
-(void)dealloc;
-(TSADocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TSADocumentRoot *)arg1 ;
@end
