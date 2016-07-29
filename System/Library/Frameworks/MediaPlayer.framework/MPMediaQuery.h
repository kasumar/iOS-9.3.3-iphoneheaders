/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary, MPMediaQueryCriteria, NSArray, MPMediaPlaylist, MPMediaItemCollection, NSSet, NSDictionary, MPMediaQuerySectionInfo, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {

	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	long long _staticEntityType;

}

@property (nonatomic,readonly) MPMediaPlaylist * containingPlaylist; 
@property (nonatomic,readonly) MPMediaItemCollection * collectionByJoiningCollections; 
@property (nonatomic,retain) NSSet * filterPredicates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * collections; 
@property (assign,nonatomic) long long groupingType; 
@property (nonatomic,readonly) NSArray * itemSections; 
@property (nonatomic,readonly) NSArray * collectionSections; 
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,copy) NSSet * itemPropertiesToFetch; 
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch; 
@property (setter=_setOrderingProperties:,getter=_orderingProperties,nonatomic,copy) NSArray * orderingProperties; 
@property (setter=_setOrderingDirectionMappings:,getter=_orderingDirectionMappings,nonatomic,copy) NSDictionary * orderingDirectionMappings; 
@property (assign,nonatomic) BOOL sortItems; 
@property (assign,nonatomic) BOOL useSections; 
@property (assign,nonatomic) unsigned long long entityLimit; 
@property (nonatomic,readonly) BOOL _hasItems; 
@property (nonatomic,readonly) BOOL _hasCollections; 
@property (nonatomic,readonly) unsigned long long _countOfItems; 
@property (nonatomic,readonly) unsigned long long _countOfCollections; 
@property (nonatomic,readonly) BOOL _hasStaticEntities; 
@property (nonatomic,readonly) NSArray * itemPersistentIdentifiers; 
@property (nonatomic,readonly) NSArray * collectionPersistentIdentifiers; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * itemSectionInfo; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * collectionSectionInfo; 
@property (nonatomic,readonly) BOOL excludesEntitiesWithBlankNames; 
@property (assign,nonatomic) BOOL includeEntitiesWithBlankNames; 
@property (nonatomic,readonly) BOOL specifiesPlaylistItems; 
@property (assign,nonatomic) BOOL shouldIncludeNonLibraryEntities; 
@property (nonatomic,readonly) BOOL willGroupEntities; 
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) MPMediaItemCollection * _representativeCollection; 
@property (nonatomic,readonly) long long _representativeCollectionGroupingType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevicePurchasesPlaylist;
+(id)activeGeniusPlaylist;
+(id)playbackHistoryPlaylist;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(void)setFilteringDisabled:(BOOL)arg1 ;
+(void)initFilteringDisabled;
+(BOOL)isFilteringDisabled;
+(id)podcastsQuery;
+(id)ITunesUQuery;
+(id)ITunesUAudioQuery;
+(id)videoITunesUQuery;
+(id)audibleAudiobooksQuery;
+(id)compilationsQuery;
+(id)albumArtistsQuery;
+(id)videosQuery;
+(id)tvShowsQuery;
+(id)homeVideosQuery;
+(id)moviesQuery;
+(id)movieRentalsQuery;
+(id)audioPodcastsQuery;
+(id)videoPodcastsQuery;
+(id)geniusMixesQuery;
+(id)playlistsRecentlyAddedQuery;
+(id)albumsQuery;
+(id)audiobooksQuery;
+(id)songsQuery;
+(id)playlistsQuery;
+(id)genresQuery;
+(id)composersQuery;
+(id)musicVideosQuery;
+(id)artistsQuery;
-(id)_MPUSDS_searchPredicate;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(BOOL)MPSD_hasDownloadableEntities;
-(BOOL)MPSD_hasDownloadingEntities;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 forProperty:(id)arg2 ;
-(MPMediaPlaylist *)containingPlaylist;
-(void)setFilterPropertyPredicate:(id)arg1 ;
-(BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2 ;
-(MPMediaItemCollection *)collectionByJoiningCollections;
-(id)predicateForProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(void)setFilterPredicates:(NSSet *)arg1 ;
-(BOOL)_isFilteringDisabled;
-(id)initWithCriteria:(id)arg1 library:(id)arg2 ;
-(void)setStaticEntities:(id)arg1 entityType:(long long)arg2 ;
-(NSSet *)filterPredicates;
-(id)protobufferEncodableObject;
-(void)setSortItems:(BOOL)arg1 ;
-(void)_getRepresentativeCollectionGrouping:(long long*)arg1 propertyPredicate:(id*)arg2 ;
-(BOOL)excludesEntitiesWithBlankNames;
-(BOOL)specifiesPlaylistItems;
-(unsigned long long)groupingThreshold;
-(MPMediaQuerySectionInfo *)itemSectionInfo;
-(MPMediaQuerySectionInfo *)collectionSectionInfo;
-(id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3 ;
-(void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyByRemovingStaticEntities;
-(id)copyBySanitizingStaticEntities;
-(BOOL)shouldIncludeNonLibraryEntities;
-(BOOL)includeEntitiesWithBlankNames;
-(NSSet *)itemPropertiesToFetch;
-(NSSet *)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(NSSet *)arg1 ;
-(BOOL)_hasCollections;
-(BOOL)_hasStaticEntities;
-(NSArray *)itemPersistentIdentifiers;
-(NSArray *)collectionPersistentIdentifiers;
-(id)_orderingProperties;
-(id)_orderingDirectionMappings;
-(BOOL)sortItems;
-(void)setUseSections:(BOOL)arg1 ;
-(BOOL)useSections;
-(BOOL)willGroupEntities;
-(NSArray *)itemSections;
-(NSArray *)collectionSections;
-(id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 ;
-(id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)criteria;
-(void)setCriteria:(id)arg1 ;
-(void)_enumerateUnorderedItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)setItemPropertiesToFetch:(NSSet *)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(BOOL)_hasItems;
-(void)setGroupingType:(long long)arg1 ;
-(void)setEntityLimit:(unsigned long long)arg1 ;
-(void)setIncludeEntitiesWithBlankNames:(BOOL)arg1 ;
-(unsigned long long)entityLimit;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithFilterPredicates:(id)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(unsigned long long)_countOfItems;
-(long long)groupingType;
-(unsigned long long)_countOfCollections;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(NSArray *)collections;
-(void)setShouldIncludeNonLibraryEntities:(BOOL)arg1 ;
-(MPMediaItemCollection *)_representativeCollection;
-(void)_setOrderingProperties:(id)arg1 ;
-(void)_setOrderingDirectionMappings:(id)arg1 ;
-(void)_enumerateUnorderedItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithEntities:(id)arg1 entityType:(long long)arg2 ;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(long long)_representativeCollectionGroupingType;
-(BOOL)ignoreRestrictionsPredicates;
-(BOOL)ignoreSystemFilterPredicates;
@end

