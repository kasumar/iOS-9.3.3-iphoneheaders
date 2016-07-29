/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface UpdateKeepLocalRulesOperation : CloudLibraryOperation {

	NSArray* _collectionEntities;
	BOOL _backgroundRequest;

}

@property (assign,getter=isBackgroundRequest,nonatomic) BOOL backgroundRequest;              //@synthesize backgroundRequest=_backgroundRequest - In the implementation block
-(id)initWithCollectionEntities:(id)arg1 ;
-(id)_keepLocalEnabledPredicate;
-(id)_missingTrackDataPredicate;
-(id)_hasTrackDataPredicate;
-(id)_keepLocalDisabledPredicate;
-(id)_hasTrackDataOrPendingDownloadPredicate;
-(id)_inMyLibraryPredicate;
-(id)_keepLocalAndMissingTrackDataPredicate;
-(id)_searchableKeepLocalCollectionClasses;
-(id)_trackQueryForEntityCollection:(id)arg1 predicate:(id)arg2 ;
-(BOOL)_containerIsSmartLimited:(id)arg1 ;
-(id)_anyTracksQueryForCollection:(id)arg1 ;
-(id)_keepLocalNotDisabledPredicate;
-(id)_keepLocalDisabledAndHasTrackDataOrDownloadPredicate;
-(id)_hasTrackDataAndAlbumKeepLocalOffPredicate;
-(id)_keepLocalOffPredicate;
-(id)_allTracksDisabledForCollection:(id)arg1 ;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)arg1 ;
-(void)main;
@end

