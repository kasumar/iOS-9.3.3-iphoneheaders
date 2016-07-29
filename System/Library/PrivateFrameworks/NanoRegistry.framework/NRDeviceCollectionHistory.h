/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NRMutableDeviceCollection, NSObject, NSMutableArray, NSMutableDictionary;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSSecureCoding, NSFastEnumeration> {

	NSMutableOrderedSet* _observers;
	BOOL _dirty;
	NRMutableDeviceCollection* _deviceCollection;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _startIndex;
	NSMutableArray* _history;
	NSMutableDictionary* _historyStateCache;
	NSMutableArray* _historyStateCacheMRU;
	NSMutableArray* _historyStateCacheIndex;

}

@property (nonatomic,readonly) NRMutableDeviceCollection * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long nextIndex; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL dirty;                                                //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) unsigned switchIndex; 
@property (assign,nonatomic) unsigned long long startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * history;                                    //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historyStateCache;                     //@synthesize historyStateCache=_historyStateCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheMRU;                       //@synthesize historyStateCacheMRU=_historyStateCacheMRU - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheIndex;                     //@synthesize historyStateCacheIndex=_historyStateCacheIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)dirty;
-(unsigned long long)startIndex;
-(id)stateAtIndex:(unsigned long long)arg1 ;
-(void)_truncateHistory;
-(id)_mostRecentStateBefore:(id)arg1 ;
-(id)applyDiff:(id)arg1 ;
-(void)_updateHistoryCachesWithIndex:(id)arg1 ;
-(unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2 ;
-(void)pruneStateCacheItems:(unsigned long long)arg1 ;
-(id)switchDeviceIDFromDiff:(id)arg1 ;
-(void)notifyObserversWithEntry:(id)arg1 ;
-(id)historyEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToHistory:(id)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(void)purgeWorkingSet;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(NRMutableDeviceCollection *)deviceCollection;
-(NSMutableDictionary *)historyStateCache;
-(void)setHistoryStateCache:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)historyStateCacheMRU;
-(void)setHistoryStateCacheMRU:(NSMutableArray *)arg1 ;
-(NSMutableArray *)historyStateCacheIndex;
-(void)setHistoryStateCacheIndex:(NSMutableArray *)arg1 ;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)nextIndex;
-(unsigned)switchIndex;
-(NSMutableArray *)history;
-(void)setHistory:(NSMutableArray *)arg1 ;
@end

