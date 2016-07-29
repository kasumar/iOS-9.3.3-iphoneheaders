/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSDate;

@interface _DKLocationHistoryCache : NSObject {

	NSMutableArray* _visits;
	NSMutableSet* _visitSet;
	double _earliestTime;
	double _latestTime;
	unsigned long long _index;
	BOOL _needsSorting;

}

@property (readonly) NSDate * oldestEntryDate; 
@property (readonly) NSDate * newestExitDate; 
@property (readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)init;
-(void)clear;
-(void)sortIfNecessary;
-(NSDate *)oldestEntryDate;
-(NSDate *)newestExitDate;
-(void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3 ;
-(id)lookupLocationIdforDate:(id)arg1 ;
-(void)clearOldest:(unsigned long long)arg1 ;
@end

