/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol EKDayAllDayViewDelegate;
@class NSMutableArray, UILabel, UIScrollView, EKEvent, UIView;

@interface EKDayAllDayView : UIView {

	long long _orientation;
	NSMutableArray* _occurrenceViews;
	UILabel* _allDay;
	BOOL _allDayLabelHighlighted;
	UIScrollView* _scroller;
	double _occurrenceInset;
	BOOL _allowSelection;
	BOOL _showSelection;
	EKEvent* _selectedEvent;
	BOOL _usesSmallText;
	UIView* _dividerLineViewTop;
	UIView* _dividerLineViewBottom;
	BOOL _showsBorderLines;
	BOOL _showsLabel;
	int _maxVisibleRows;
	id<EKDayAllDayViewDelegate> _delegate;
	double _fixedHeight;
	EKEvent* _dimmedOccurrence;

}

@property (assign,nonatomic,__weak) id<EKDayAllDayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsSelection; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection; 
@property (assign,nonatomic) BOOL showsBorderLines;                                    //@synthesize showsBorderLines=_showsBorderLines - In the implementation block
@property (assign,nonatomic) BOOL showsLabel;                                          //@synthesize showsLabel=_showsLabel - In the implementation block
@property (nonatomic,readonly) double naturalHeight; 
@property (assign,nonatomic) double fixedHeight;                                       //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) int maxVisibleRows;                                       //@synthesize maxVisibleRows=_maxVisibleRows - In the implementation block
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                               //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
+(id)allDayLabelBoldFont;
+(id)unscaledAllDayFont;
+(id)allDayLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EKDayAllDayViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<EKDayAllDayViewDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(id)occurrenceViews;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(BOOL)containsEvent:(id)arg1 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(EKEvent *)dimmedOccurrence;
-(double)naturalHeight;
-(void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2 ;
-(double)nextAvailableOccurrenceViewYOrigin;
-(void)updateLabelFont;
-(void)setShowsBorderLines:(BOOL)arg1 ;
-(double)firstEventYOffset;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)addViewToScroller:(id)arg1 ;
-(void)setShowsLabel:(BOOL)arg1 ;
-(void)setFixedHeight:(double)arg1 ;
-(double)_height;
-(double)_allDayAreaHeightForEventCount:(long long)arg1 ;
-(double)_borderLineWidth;
-(BOOL)showsBorderLines;
-(void)removeAllOccurrenceViews;
-(double)fixedHeight;
-(void)setShowsSelection:(BOOL)arg1 ;
-(BOOL)showsSelection;
-(void)setAllDayLabelColor:(id)arg1 ;
-(BOOL)showsLabel;
-(int)maxVisibleRows;
-(void)setMaxVisibleRows:(int)arg1 ;
@end

