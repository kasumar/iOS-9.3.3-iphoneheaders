/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitCore/WLFileMigrationWebService.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError;

@interface WLVideosMigrator : WLFileMigrationWebService {

	NSObject*<OS_dispatch_semaphore> _importSema;
	BOOL _didSaveVideo;
	NSError* _saveError;

}
+(id)contentType;
-(id)contentType;
-(id)dataType;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldDownloadDataAsSeparateFileForSummary:(id)arg1 account:(id)arg2 ;
-(id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3 ;
@end

