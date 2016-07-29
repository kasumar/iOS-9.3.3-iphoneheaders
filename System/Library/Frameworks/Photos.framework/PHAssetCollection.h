/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollection.h>
#import <libobjc.A.dylib/PUDisplayAssetCollection.h>

@class NSString, NSDate, CLLocation, NSArray, PHQuery, NSURL;

@interface PHAssetCollection : PHCollection <PUDisplayAssetCollection> {

	NSString* _localizedTitle;
	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSDate* _startDate;
	NSDate* _endDate;
	CLLocation* _approximateLocation;
	NSArray* _localizedLocationNames;
	NSArray* _assets;
	PHQuery* _query;
	NSString* _transientIdentifier;
	BOOL _canShowCloudComments;
	BOOL _isPendingPhotoStreamAlbum;
	BOOL _shouldDeleteWhenEmpty;
	BOOL _isLibrary;
	BOOL _isCameraRoll;
	BOOL _isPanoramasCollection;
	BOOL _isWallpaperCollection;
	BOOL _isPhotoStreamCollection;
	BOOL _isCloudSharedAlbum;
	BOOL _isStandInCollection;
	BOOL _isOwnedCloudSharedAlbum;
	BOOL _isMultipleContributorCloudSharedAlbum;
	BOOL _isSmartCollection;
	BOOL _hasUnseenContentBoolValue;
	BOOL _canContributeToCloudSharedAlbum;
	int _pendingItemsCount;
	int _pendingItemsType;
	int _plAlbumKind;
	NSString* _title;
	unsigned long long _approximateCount;
	unsigned long long _approximatePhotosCount;
	unsigned long long _approximateVideosCount;
	NSURL* _groupURL;
	/*^block*/id _sortingComparator;
	NSString* _importSessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long assetCollectionType;                                                                       //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                                    //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) NSDate * startDate;                                                                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                                                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) CLLocation * approximateLocation;                                                                    //@synthesize approximateLocation=_approximateLocation - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                                                                    //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum;                                                                      //@synthesize isPendingPhotoStreamAlbum=_isPendingPhotoStreamAlbum - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty;                                                                          //@synthesize shouldDeleteWhenEmpty=_shouldDeleteWhenEmpty - In the implementation block
@property (nonatomic,readonly) unsigned long long approximateCount;                                                                 //@synthesize approximateCount=_approximateCount - In the implementation block
@property (nonatomic,readonly) unsigned long long approximatePhotosCount;                                                           //@synthesize approximatePhotosCount=_approximatePhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long approximateVideosCount;                                                           //@synthesize approximateVideosCount=_approximateVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL isLibrary;                                                                                      //@synthesize isLibrary=_isLibrary - In the implementation block
@property (nonatomic,readonly) BOOL isCameraRoll;                                                                                   //@synthesize isCameraRoll=_isCameraRoll - In the implementation block
@property (nonatomic,readonly) BOOL isPanoramasCollection;                                                                          //@synthesize isPanoramasCollection=_isPanoramasCollection - In the implementation block
@property (nonatomic,readonly) BOOL isWallpaperCollection;                                                                          //@synthesize isWallpaperCollection=_isWallpaperCollection - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoStreamCollection;                                                                        //@synthesize isPhotoStreamCollection=_isPhotoStreamCollection - In the implementation block
@property (nonatomic,readonly) BOOL isCloudSharedAlbum;                                                                             //@synthesize isCloudSharedAlbum=_isCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isStandInCollection;                                                                            //@synthesize isStandInCollection=_isStandInCollection - In the implementation block
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum;                                                                        //@synthesize isOwnedCloudSharedAlbum=_isOwnedCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum;                                                          //@synthesize isMultipleContributorCloudSharedAlbum=_isMultipleContributorCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isLastImportedAlbum; 
@property (nonatomic,readonly) BOOL isTrashBin; 
@property (nonatomic,readonly) BOOL isSmartCollection;                                                                              //@synthesize isSmartCollection=_isSmartCollection - In the implementation block
@property (nonatomic,readonly) NSURL * groupURL;                                                                                    //@synthesize groupURL=_groupURL - In the implementation block
@property (nonatomic,copy,readonly) id sortingComparator;                                                                           //@synthesize sortingComparator=_sortingComparator - In the implementation block
@property (nonatomic,readonly) NSString * importSessionID;                                                                          //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,readonly) int pendingItemsCount;                                                                               //@synthesize pendingItemsCount=_pendingItemsCount - In the implementation block
@property (nonatomic,readonly) int pendingItemsType;                                                                                //@synthesize pendingItemsType=_pendingItemsType - In the implementation block
@property (nonatomic,readonly) BOOL hasUnseenContentBoolValue;                                                                      //@synthesize hasUnseenContentBoolValue=_hasUnseenContentBoolValue - In the implementation block
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum;                                                                //@synthesize canContributeToCloudSharedAlbum=_canContributeToCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canContainCustomKeyAssets; 
@property (nonatomic,readonly) BOOL keyAssetsAtEnd; 
@property (nonatomic,readonly) NSString * transientIdentifier;                                                                      //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) int plAlbumKind;                                                                                     //@synthesize plAlbumKind=_plAlbumKind - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) PHQuery * query;                                                                                     //@synthesize query=_query - In the implementation block
@property (assign,setter=_setCanShowCloudComments:,getter=_canShowCloudComments,nonatomic) BOOL _canShowCloudComments;              //@synthesize canShowCloudComments=_canShowCloudComments - In the implementation block
+(id)posterImageForAssetCollection:(id)arg1 ;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg1 ;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg1 includeTrash:(BOOL)arg2 ;
+(id)fetchUserLibraryAlbumWithOptions:(id)arg1 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2 ;
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)identifierCode;
+(id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 ;
+(id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsWithOptions:(id)arg1 ;
+(id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 ;
+(id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(BOOL)pl_isWallpaperAlbum;
-(id)pl_assetContainer;
-(NSString *)description;
-(PHQuery *)query;
-(NSString *)title;
-(NSString *)localizedTitle;
-(CLLocation *)approximateLocation;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(int)plAlbumKind;
-(BOOL)_canShowCloudComments;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 ;
-(BOOL)canContainCustomKeyAssets;
-(void)_setCanShowCloudComments:(BOOL)arg1 ;
-(unsigned long long)approximatePhotosCount;
-(unsigned long long)approximateVideosCount;
-(BOOL)isPanoramasCollection;
-(BOOL)isWallpaperCollection;
-(BOOL)isPhotoStreamCollection;
-(BOOL)isSmartCollection;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(long long)assetCollectionType;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(unsigned long long)estimatedAssetCount;
-(BOOL)canShowAvalancheStacks;
-(long long)assetCollectionSubtype;
-(BOOL)isCameraRoll;
-(unsigned long long)approximateCount;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(BOOL)hasUnseenContentBoolValue;
-(BOOL)isLibrary;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSString *)importSessionID;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(int)pendingItemsType;
-(NSArray *)assets;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)keyAssetsAtEnd;
-(BOOL)isLastImportedAlbum;
-(BOOL)isTrashBin;
-(NSString *)transientIdentifier;
-(BOOL)collectionHasFixedOrder;
-(BOOL)collectionCanBePinned;
-(BOOL)isStandInCollection;
-(BOOL)canContainAssets;
@end

