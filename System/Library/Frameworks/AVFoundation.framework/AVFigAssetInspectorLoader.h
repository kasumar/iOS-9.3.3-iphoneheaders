/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetInspector, NSObject, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {

	OpaqueFigAssetRef _figAsset;
	int _figAssetCreationStatus;
	AVWeakReference* _weakReferenceToAsset;
	AVAssetInspector* _assetInspector;
	long long _assetInspectorOnce;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _loadingBatches;
	BOOL _loadingCanceled;
	BOOL _registeredForFigAssetNotifications;
	long long _fragmentMinderAssociationCount;
	NSURL* _URL;

}
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetTrackPropertiesForKeys;
-(void)dealloc;
-(SCD_Struct_CM5)duration;
-(id)URL;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)figChapterGroupInfo;
-(id)figChapters;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 forAsset:(id)arg2 ;
-(id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4 ;
-(id)assetInspector;
-(id)originalNetworkContentURL;
-(BOOL)isAssociatedWithFragmentMinder;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(long long)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 error:(id*)arg3 ;
-(id)_completionHandlerQueue;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(id)resolvedURL;
-(id)lyrics;
-(BOOL)_isStreaming;
-(BOOL)hasProtectedContent;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)downloadToken;
-(BOOL)isReadable;
-(void)finalize;
@end

