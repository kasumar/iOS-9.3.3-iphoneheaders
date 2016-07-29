/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/SPDaemonQueryDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol SPSearchAgentDelegate, OS_dispatch_queue;
@class SPDaemonQueryToken, NSString, NSArray, NSMutableArray, SPSearchResultSection, SPSearchResult, NSDictionary, NSObject, NSDate;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver> {

	SPDaemonQueryToken* _currentToken;
	NSString* _prefixWithNoResults;
	NSArray* _sections;
	NSMutableArray* _mutableSections;
	NSArray* _searchDomains;
	unsigned _resultCount;
	int _options;
	SPSearchResultSection* _topHitResultSection;
	SPSearchResult* _webSearchThroughResult;
	SPSearchResult* _appStoreSearchThroughResult;
	SPSearchResult* _mapsSearchThroughResult;
	BOOL _searchThroughAllowed;
	BOOL _observersAdded;
	BOOL _defaultSearchEnabled;
	BOOL _oneShotZKWSEnabled;
	NSString* _lastVoiceQuery;
	BOOL _voiceQueryHasBeenStable;
	BOOL _hasCachedUpdate;
	NSDictionary* _lastParsecResults;
	BOOL _isActivated;
	NSString* _previousQuery;
	NSString* _previousQueryAnySession;
	BOOL _queryComplete;
	NSObject*<SPSearchAgentDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queryProcessor;
	int _currentZKWLevel;
	long long _updatesDisabled;
	WaitingResults_s* _deferredUpdate;
	NSString* _lastQueryString;
	int _seqNo;
	int _storedSeqNo;
	int _lastUpdateSeqNo;
	NSDate* _parsecNewsExpireTime;
	int _prefsToken;
	BOOL _newQuery;
	BOOL _willNotify;
	BOOL _liveAndCached;
	BOOL _shouldCacheResults;
	BOOL _activeCachedZKW;
	NSMutableArray* _cachedZKW1;
	NSMutableArray* _cachedZKW2;
	NSString* _fbq;
	NSString* _web_fbq;

}

@property (readonly) NSArray * sections; 
@property (readonly) NSString * fbq;                                                        //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                                    //@synthesize web_fbq=_web_fbq - In the implementation block
@property (readonly) int currentZKWLevel;                                                   //@synthesize currentZKWLevel=_currentZKWLevel - In the implementation block
@property (assign,nonatomic) int options;                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL queryComplete;                                          //@synthesize queryComplete=_queryComplete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryProcessor;                   //@synthesize queryProcessor=_queryProcessor - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                                       //@synthesize searchDomains=_searchDomains - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SPSearchAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)deactivate;
+(void)activate;
+(BOOL)hasSeenZKWApps;
-(void)setDelegate:(NSObject*<SPSearchAgentDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<SPSearchAgentDelegate>)delegate;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)deactivate;
-(void)activate;
-(void)clear;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)queryString;
-(NSArray *)sections;
-(void)addSections:(id)arg1 ;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(unsigned long long)sectionCount;
-(BOOL)queryComplete;
-(id)queryId;
-(NSArray *)searchDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)cancelCurrentQuery;
-(BOOL)sectionNeedsMoreMapsOption:(id)arg1 ;
-(void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3 ;
-(void)postSearchAgentClearedResultsToDelegate;
-(void)postSearchAgentUpdatedResultsToDelegate;
-(void)pushAndPostUpdates;
-(void)updateResultsThroughDelegate:(BOOL)arg1 ;
-(void)mergeSections;
-(BOOL)hasParsecNewsHigh;
-(void)testPermuteSection:(id)arg1 domain:(unsigned)arg2 count:(int)arg3 ;
-(void)clearInternal:(int)arg1 ;
-(BOOL)promoteCachedQuery;
-(BOOL)setQueryString:(id)arg1 withResponse:(id)arg2 keyboardLanguage:(id)arg3 keyboardPrimaryLanguage:(id)arg4 isStable:(BOOL)arg5 levelZKW:(int)arg6 allowInternet:(BOOL)arg7 ;
-(void)addDeserializer:(id)arg1 ;
-(BOOL)cleanupObsoleteResults;
-(void)addSearchThroughSectionWithQuery:(id)arg1 ;
-(BOOL)hasParsecNews;
-(void)updateSearchThroughSectionWithQuery:(id)arg1 ;
-(void)stuffChanged;
-(void)stuffChangedNotification;
-(id)_indexesOfCompatibleSection:(id)arg1 ;
-(int)levelZKW;
-(BOOL)_shouldIgnoreQuery:(id)arg1 ;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 withResponse:(id)arg4 isStable:(BOOL)arg5 ;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 levelZKW:(int)arg3 allowInternet:(BOOL)arg4 ;
-(void)internetDomainsChanged;
-(NSObject*<OS_dispatch_queue>)queryProcessor;
-(void)setQueryProcessor:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasResults;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(int)currentQuerySeqNo;
-(NSString *)fbq;
-(NSString *)web_fbq;
-(int)currentZKWLevel;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 levelZKW:(int)arg4 allowInternet:(BOOL)arg5 ;
-(void)performZKWQueryWithKeyboardLanguage:(id)arg1 allowInternet:(BOOL)arg2 ;
-(void)cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2 ;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 withResponse:(id)arg3 isStable:(BOOL)arg4 ;
-(void)clearParsecResultsIfStale;
-(void)testSaveCachedZKWPermUsers:(int)arg1 appLinks:(int)arg2 apps:(int)arg3 ;
-(void)testRestoreCacheZKW;
-(id)initWithZKWLevel:(int)arg1 andOptions:(int)arg2 ;
-(void)cachedZKWAvailable:(BOOL)arg1 ;
-(void)invalidateCurrentQuery;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateResultsThroughDelegate;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryReset:(id)arg1 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
-(long long)contentFilters;
@end

