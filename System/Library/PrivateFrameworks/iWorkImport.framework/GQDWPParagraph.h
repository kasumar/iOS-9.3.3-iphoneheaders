/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

@interface GQDWPParagraph : GQDWPInlineList {

	GQDSStyle* mParaStyle;
	long long mListLevel;
	BOOL mRestartList;
	BOOL mContinue;
	BOOL mIsHidden;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(BOOL)restartList;
-(BOOL)cont;
-(void)dealloc;
-(BOOL)isHidden;
-(id)paragraphStyle;
-(BOOL)isBlank;
-(long long)listLevel;
@end

