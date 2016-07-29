/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitCore/WLMigrationWebService.h>

@class WebBookmarkCollection;

@interface WLBookmarksMigrator : WLMigrationWebService {

	WebBookmarkCollection* _collection;

}
+(id)contentType;
+(id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2 ;
+(id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2 ;
+(id)_createRootBookmarkFolder;
+(id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2 ;
-(id)contentType;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4 ;
-(id)importWillBegin;
-(void)importDidEnd;
@end
