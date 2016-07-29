/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, SSVMediaContentTasteUpdateResponse;

@interface MediaContentTasteUpdateOperation : ISOperation {

	NSArray* _contentTasteItemUpdates;
	SSVMediaContentTasteUpdateResponse* _response;
	BOOL _shouldInvalidateLocalCache;

}

@property (copy) NSArray * contentTasteItemUpdates;                              //@synthesize contentTasteItemUpdates=_contentTasteItemUpdates - In the implementation block
@property (readonly) SSVMediaContentTasteUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign) BOOL shouldInvalidateLocalCache;                              //@synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache - In the implementation block
+(id)_cachedMediaContentSyncURLResponseForAccount:(id)arg1 ;
+(void)_storeCachedMediaContentSyncURLResponse:(id)arg1 forAccount:(id)arg2 ;
+(id)_mediaContentTasteCacheDirectoryPath;
+(id)_mediaContentTasteSyncURLResponseCacheFilePathForAccount:(id)arg1 ;
+(void)removeAllCachedResponses;
-(void)_getData:(id*)arg1 forContentTasteItemUpdates:(id)arg2 includedContentTasteItemUpdates:(id*)arg3 ;
-(unsigned long long)_revisionIDForURLResponse:(id)arg1 ;
-(id)_ETagValueWithResponse:(id)arg1 ;
-(id)_responseWithResponseData:(id)arg1 expirationDate:(id)arg2 revisionID:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 ;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
-(SSVMediaContentTasteUpdateResponse *)response;
-(void)main;
@end

