/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFFileCacheStore.h>

@class NSURL, NSString;

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore> {

	NSURL* _directoryURL;

}

@property (nonatomic,copy,readonly) NSURL * directoryURL;              //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2 ;
-(void)fileCache:(id)arg1 storeFileWrapper:(id)arg2 ;
-(void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2 ;
-(void)removeAllFileWrappersForFileCache:(id)arg1 ;
-(id)fileURLForFileNamed:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(NSURL *)directoryURL;
@end

