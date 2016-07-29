/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString, NSDate;

@interface CMProgressiveArchiveManager : CMArchiveManager {

	const void* mClient;
	SCD_Struct_CM14* mCallBacks;
	NSMutableDictionary* mDataCache;
	NSMutableDictionary* mStyleCache;
	NSMutableString* mCssString;
	BOOL mMainDataInited;
	NSDate* mStartDate;
	NSDate* mLastCommitDate;
	NSMutableString* mHtmlLogString;

}
-(void)dealloc;
-(BOOL)isCancelled;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(BOOL)isProgressive;
-(id)initWithClient:(const void*)arg1 andCallBacks:(SCD_Struct_CM14*)arg2 ;
@end

