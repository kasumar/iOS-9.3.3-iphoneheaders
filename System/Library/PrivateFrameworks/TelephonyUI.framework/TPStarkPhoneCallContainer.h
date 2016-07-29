/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@protocol TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate;
@class NSMutableArray;

@interface TPStarkPhoneCallContainer : UIView {

	BOOL _shouldMerge;
	BOOL _merging;
	id<TPStarkPhoneCallContainerDataSource> _dataSource;
	id<TPStarkPhoneCallContainerDelegate> _delegate;
	NSMutableArray* _visibleCells;

}

@property (assign,nonatomic) id<TPStarkPhoneCallContainerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<TPStarkPhoneCallContainerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * visibleCells;                                             //@synthesize visibleCells=_visibleCells - In the implementation block
@property (assign) BOOL shouldMerge;                                                          //@synthesize shouldMerge=_shouldMerge - In the implementation block
@property (getter=isMerging) BOOL merging;                                                    //@synthesize merging=_merging - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<TPStarkPhoneCallContainerDataSource>)arg1 ;
-(void)setDelegate:(id<TPStarkPhoneCallContainerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<TPStarkPhoneCallContainerDataSource>)dataSource;
-(id<TPStarkPhoneCallContainerDelegate>)delegate;
-(NSMutableArray *)visibleCells;
-(void)setNeedsMerge;
-(id)_reloadQueue;
-(BOOL)shouldReloadCellsWithNumberOfCells:(unsigned long long)arg1 ;
-(void)updateNumberOfCellsWithNewValue:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)updateCell:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)createVisibleCells:(unsigned long long)arg1 ;
-(void)updateLayoutAnimated:(BOOL)arg1 ;
-(void)mergeVisibleCells;
-(void)removeVisibleCells:(unsigned long long)arg1 ;
-(void)updateAllCellConstraints;
-(void)animateLayoutOfViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isMerging;
-(void)mergeAllCellConstraints;
-(void)phoneCallViewCellTapped:(id)arg1 ;
-(void)addConstraintsForNewCell:(id)arg1 ;
-(id)constraintToFillContainerWithLeftOfCell:(id)arg1 ;
-(id)constraintToFillContainerWithRightOfCell:(id)arg1 ;
-(void)addRelationForWidthOfCell:(id)arg1 ;
-(void)removeAllConstraintsForCell:(id)arg1 ;
-(void)addRelationForLeftOfCell:(id)arg1 ;
-(void)addRelationForRightOfCell:(id)arg1 ;
-(void)setVisibleCells:(NSMutableArray *)arg1 ;
-(BOOL)shouldMerge;
-(void)setShouldMerge:(BOOL)arg1 ;
-(void)setMerging:(BOOL)arg1 ;
-(void)reloadDataAnimated:(BOOL)arg1 ;
@end

