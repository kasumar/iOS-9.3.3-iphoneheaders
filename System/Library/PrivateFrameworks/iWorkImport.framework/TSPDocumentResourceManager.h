/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSDictionary, NSMutableDictionary, TSPDocumentResourceCache, TSUDownloadManager;

@interface TSPDocumentResourceManager : NSObject {

	NSURL* _appDocumentResourcesURL;
	NSURL* _appDocumentResourcesMetadataURL;
	long long _documentResourcesConfigurationToken;
	NSObject*<OS_dispatch_queue> _documentResourcesConfigurationQueue;
	NSDictionary* _documentResourcesConfiguration;
	long long _sageDocumentResourcesConfigurationToken;
	NSMutableDictionary* _sageDocumentResourcesConfiguration;
	TSPDocumentResourceCache* _cache;
	TSUDownloadManager* _downloadManager;

}

@property (nonatomic,readonly) TSPDocumentResourceCache * cache;                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) TSUDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
+(id)appDocumentResourcesMetadataURL;
+(id)appDocumentResourcesURL;
+(void)setAppDocumentResourcesURL:(id)arg1 ;
+(void)setAppDocumentResourcesMetadataURL:(id)arg1 ;
+(void)setSageAppDocumentResourcesURL:(id)arg1 ;
+(id)sharedManager;
-(id)newDataProviderForContext:(id)arg1 ;
-(id)findDocumentResourceUsingDigestString:(id)arg1 locator:(id)arg2 ;
-(id)initWithAppDocumentResourcesURL:(id)arg1 appDocumentResourcesMetadataURL:(id)arg2 cache:(id)arg3 downloadManager:(id)arg4 ;
-(id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 infoToDownload:(id*)arg4 ;
-(id)URLForAppDocumentResourceWithDigestString:(id)arg1 extension:(id)arg2 ;
-(id)sageDocumentResourcesConfiguration;
-(id)documentResourcesConfiguration;
-(id)documentResourceRelativePathWithDigestString:(id)arg1 extension:(id)arg2 ;
-(id)applicationDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2 ;
-(id)cachedDocumentResourceDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2 ;
-(id)sageAssetURLForLocator:(id)arg1 ;
-(id)URLForCachedDocumentResourceWithDigestString:(id)arg1 ;
-(id)init;
-(TSPDocumentResourceCache *)cache;
-(void)clearCache;
-(TSUDownloadManager *)downloadManager;
@end

