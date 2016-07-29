/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSearchAgent.h>
#import <libobjc.A.dylib/SPDaemonQueryDelegate.h>
#import <libobjc.A.dylib/PRSImageSource.h>

@protocol OS_dispatch_semaphore;
@class CPLRUDictionary, NSObject, NSOperationQueue, NSOperation, NSArray, NSString;

@interface SPUISearchModel : SPSearchAgent <SPDaemonQueryDelegate, PRSImageSource> {

	CPLRUDictionary* _cachedResultImages;
	NSObject*<OS_dispatch_semaphore> _cacheResultLock;
	NSOperationQueue* _prefetchOperationQueue;
	NSOperationQueue* _loadOperationQueue;
	NSOperation* _waitOperation;
	NSArray* _deferredResults;
	BOOL _isDeferredQUeryComplete;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedGeneralInstance;
+(id)sharedFullZWKInstance;
+(id)sharedPartialZKWInstance;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
+(void)cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2 ;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(void)clearImageCache;
-(void)fetchCardDataForResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cachedImageForResult:(id)arg1 inSection:(id)arg2 ;
-(id)operationFetchingImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)cacheImage:(id)arg1 forResult:(id)arg2 inSection:(id)arg3 ;
-(id)placeholderImageForResult:(id)arg1 ;
-(void)cancelPrefetchingAndStartNewBatch;
-(BOOL)prefetchImageForResult:(id)arg1 inSection:(id)arg2 ;
-(id)initForZKWLevel:(int)arg1 ;
-(void)cachedZKWAvailable:(BOOL)arg1 ;
-(void)transferZKWResults:(id)arg1 wasSimilar:(BOOL)arg2 ;
-(void)invalidateCurrentQuery;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(BOOL)itemInLibrary:(id)arg1 ;
-(BOOL)_getCachedImageForKey:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_cacheImage:(id)arg1 forKey:(id)arg2 ;
-(id)_uniqueKeyForResult:(id)arg1 withSearchDomain:(unsigned)arg2 ;
-(id)_imageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)fetchImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)getImageWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)contentFilters;
-(id)_customImageForPath:(id)arg1 ;
@end

