/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface WebHistoryPrivate : NSObject {

	NSMutableDictionary* _entriesByURL;
	unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >* _entriesByDate;
	NSMutableArray* _orderedLastVisitedDays;
	BOOL itemLimitSet;
	int itemLimit;
	BOOL ageInDaysLimitSet;
	int ageInDaysLimit;

}
+(void)initialize;
-(BOOL)findKey:(long long*)arg1 forDay:(double)arg2 ;
-(BOOL)removeItemFromDateCaches:(id)arg1 ;
-(void)insertItem:(id)arg1 forDateKey:(long long)arg2 ;
-(void)addItemToDateCaches:(id)arg1 ;
-(BOOL)removeItemForURLString:(id)arg1 ;
-(BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(id)ageLimitDate;
-(BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4 ;
-(id)visitedURL:(id)arg1 withTitle:(id)arg2 ;
-(void)rebuildHistoryByDayIfNeeded:(id)arg1 ;
-(id)orderedLastVisitedDays;
-(id)orderedItemsLastVisitedOnDay:(id)arg1 ;
-(void)setHistoryAgeInDaysLimit:(int)arg1 ;
-(void)setHistoryItemLimit:(int)arg1 ;
-(BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(void)addVisitedLinksToVisitedLinkStore:(WebVisitedLinkStore*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(BOOL)removeItem:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)removeAllItems;
-(id)itemForURLString:(id)arg1 ;
-(id)itemForURL:(id)arg1 ;
-(id)allItems;
-(BOOL)containsURL:(id)arg1 ;
-(BOOL)removeItems:(id)arg1 ;
-(void)finalize;
@end

