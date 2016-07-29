/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIIconViewContainer, NSLayoutConstraint, NSArray;

@interface SearchUISimpleMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIIconViewContainer* _topContainer;
	SearchUIIconViewContainer* _bottomContainer;
	NSLayoutConstraint* _singleRowConstraint;
	NSLayoutConstraint* _doubleRowConstraint;
	NSArray* _results;

}

@property (retain) SearchUIIconViewContainer * topContainer;                 //@synthesize topContainer=_topContainer - In the implementation block
@property (retain) SearchUIIconViewContainer * bottomContainer;              //@synthesize bottomContainer=_bottomContainer - In the implementation block
@property (retain) NSLayoutConstraint * singleRowConstraint;                 //@synthesize singleRowConstraint=_singleRowConstraint - In the implementation block
@property (retain) NSLayoutConstraint * doubleRowConstraint;                 //@synthesize doubleRowConstraint=_doubleRowConstraint - In the implementation block
@property (retain) NSArray * results;                                        //@synthesize results=_results - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
-(void)layoutSubviews;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)numberOfVisibleColumns;
-(id)initWithResults:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setTopContainer:(SearchUIIconViewContainer *)arg1 ;
-(void)setSingleRowConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomContainer:(SearchUIIconViewContainer *)arg1 ;
-(void)setDoubleRowConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)doubleRowConstraint;
-(SearchUIIconViewContainer *)topContainer;
-(BOOL)resultsSupportExpansion;
-(SearchUIIconViewContainer *)bottomContainer;
-(void)updateNumberOfColumns;
-(NSLayoutConstraint *)singleRowConstraint;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)updateWithResults:(id)arg1 ;
-(BOOL)isExpandable;
-(unsigned long long)numberOfVisibleResults;
@end
