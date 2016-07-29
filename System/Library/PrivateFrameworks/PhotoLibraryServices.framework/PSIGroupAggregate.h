/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _rangesMatchingTokens;
	NSMutableArray* _groups;
	NSMutableArray* _assetIdArrays;
	NSMutableArray* _aggregatedGroupIds;

}
-(void)dealloc;
-(void)pop;
-(id)initWithSearchTokens:(id)arg1 ;
-(void)postProcessGroupResults:(id)arg1 ;
-(id)newGroup;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3 ;
-(CFArrayRef)_newSortedGroupIds;
-(BOOL)_verifySortedGroupIdsUnique;
-(BOOL)_prefer:(id)arg1 over:(id)arg2 ;
-(BOOL)pushGroup:(id)arg1 ;
@end

