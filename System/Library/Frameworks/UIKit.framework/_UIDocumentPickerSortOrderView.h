/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@protocol _UIDocumentPickerViewServiceViewController;
@class UISegmentedControl, UIButton, NSArray;

@interface _UIDocumentPickerSortOrderView : UIControl {

	BOOL _listModeToggleHidden;
	id<_UIDocumentPickerViewServiceViewController> _serviceViewController;
	long long _listMode;
	UISegmentedControl* _sortOrder;
	UIButton* _listModeToggle;
	NSArray* _leftAlignedConstraints;
	NSArray* _centeredConstraints;

}

@property (assign,nonatomic) id<_UIDocumentPickerViewServiceViewController> serviceViewController;              //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (assign,nonatomic) int value; 
@property (assign,nonatomic) long long listMode;                                                                //@synthesize listMode=_listMode - In the implementation block
@property (assign,nonatomic) BOOL listModeToggleHidden;                                                         //@synthesize listModeToggleHidden=_listModeToggleHidden - In the implementation block
@property (nonatomic,retain) UISegmentedControl * sortOrder;                                                    //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,retain) UIButton * listModeToggle;                                                         //@synthesize listModeToggle=_listModeToggle - In the implementation block
@property (nonatomic,copy) NSArray * leftAlignedConstraints;                                                    //@synthesize leftAlignedConstraints=_leftAlignedConstraints - In the implementation block
@property (nonatomic,copy) NSArray * centeredConstraints;                                                       //@synthesize centeredConstraints=_centeredConstraints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(int)value;
-(void)setValue:(int)arg1 ;
-(void)setSortOrder:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)sortOrder;
-(id<_UIDocumentPickerViewServiceViewController>)serviceViewController;
-(void)setListModeToggle:(UIButton *)arg1 ;
-(UIButton *)listModeToggle;
-(void)valueChanged:(id)arg1 ;
-(void)_toggleListMode:(id)arg1 ;
-(void)updateForListMode;
-(NSArray *)centeredConstraints;
-(NSArray *)leftAlignedConstraints;
-(void)setLeftAlignedConstraints:(NSArray *)arg1 ;
-(void)setCenteredConstraints:(NSArray *)arg1 ;
-(void)setListMode:(long long)arg1 ;
-(void)setListModeToggleHidden:(BOOL)arg1 ;
-(void)setServiceViewController:(id<_UIDocumentPickerViewServiceViewController>)arg1 ;
-(long long)listMode;
-(BOOL)listModeToggleHidden;
@end

