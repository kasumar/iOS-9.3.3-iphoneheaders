/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol SearchUIDelegate;
@class UIView, NSLayoutConstraint, SearchUIRoundedView;

@interface SearchUITableViewCell : UITableViewCell {

	BOOL _expanded;
	id<SearchUIDelegate> _delegate;
	UIView* _clippingContainer;
	NSLayoutConstraint* _clippingConstraint;
	SearchUIRoundedView* _roundedView;

}

@property (__weak) id<SearchUIDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (retain) UIView * clippingContainer;                           //@synthesize clippingContainer=_clippingContainer - In the implementation block
@property (getter=isExpanded) BOOL expanded;                             //@synthesize expanded=_expanded - In the implementation block
@property (retain) NSLayoutConstraint * clippingConstraint;              //@synthesize clippingConstraint=_clippingConstraint - In the implementation block
@property (retain) SearchUIRoundedView * roundedView;                    //@synthesize roundedView=_roundedView - In the implementation block
+(id)reuseIdentifierForClass:(Class)arg1 result:(id)arg2 ;
+(id)reuseCharacteristicsIDForResult:(id)arg1 ;
+(Class)classForResult:(id)arg1 ;
+(UIEdgeInsets)insetLayoutMarginsForLayoutMargins:(UIEdgeInsets)arg1 ;
+(CGRect)visibleFrameForHomeScreenIcons;
+(void)enableRoundedCorners;
+(id)reuseIdentifierForResults:(id)arg1 ;
+(id)reuseIdentifierForResult:(id)arg1 ;
+(id)rowViewForResult:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SearchUIDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SearchUIDelegate>)delegate;
-(void)reset;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)layoutMarginsFollowReadableWidth;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(id)initWithResults:(id)arg1 style:(unsigned long long)arg2 ;
-(UIView *)clippingContainer;
-(id)initWithResult:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)supportsRecycling;
-(void)setClippingContainer:(UIView *)arg1 ;
-(void)setClippingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRoundedView:(SearchUIRoundedView *)arg1 ;
-(SearchUIRoundedView *)roundedView;
-(NSLayoutConstraint *)clippingConstraint;
-(void)updateRoundedCorners;
-(void)updateClippingHeight:(double)arg1 ;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)updateWithResults:(id)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)isExpandable;
-(unsigned long long)numberOfVisibleResults;
-(void)clearPurgeableMemory;
@end

