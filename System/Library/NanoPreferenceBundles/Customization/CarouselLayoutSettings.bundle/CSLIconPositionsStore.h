/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSLIconPostionsStoreDelegate;
@class NPSManager;

@interface CSLIconPositionsStore : NSObject {

	NPSManager* _syncManager;
	BOOL _initialSyncComplete;
	id<CSLIconPostionsStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLIconPostionsStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)loadDefaultPositions;
-(id)_loadPositionsUsingKey:(id)arg1 ;
-(id)_loadLocalPositionsUsingKey:(id)arg1 ;
-(void)savePositions:(id)arg1 ;
-(void)positionsChanged;
-(void)actionsOnInitialSyncComplete;
-(void)_savePositions:(id)arg1 usingKey:(id)arg2 ;
-(void)_saveLocalPositions:(id)arg1 usingKey:(id)arg2 ;
-(void)saveTargetPositions:(id)arg1 ;
-(id)loadTargetPositions;
-(id)loadPositions;
-(void)initialSyncComplete;
-(void)setDelegate:(id<CSLIconPostionsStoreDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CSLIconPostionsStoreDelegate>)delegate;
@end

